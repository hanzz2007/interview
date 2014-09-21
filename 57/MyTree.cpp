#include <vector>
#include <iostream>
#include "MyTree.h"


void CreateTree(NODE * &head, const std::vector<DATA> &dataVec){
	head = new(NODE);
	if(!head){
		exit(-1);
	}
	head->m_data = dataVec[0];
	head->m_PLeftChild = NULL;
	head->m_RightChild = NULL;

	for(uint i = 1; i < dataVec.size(); ++i){
		bool isLeft;
		NODE *parent = GetPos(head, dataVec[i], isLeft);
		NODE *temp = new(NODE);
		if(!temp){
			exit(-1);
		}
		temp->m_data = dataVec[i];
		temp->m_PLeftChild = NULL;
		temp->m_RightChild = NULL;

		if(isLeft){
			parent->m_PLeftChild = temp;
		}else{
			parent->m_RightChild = temp;
		}
	}
}
static NODE *GetPos(NODE *head, DATA val, bool &isLeft){
	if(head->m_data >= val){
		if(!head->m_PLeftChild){
			isLeft = true;
			return head;
		}
		return GetPos(head->m_PLeftChild, val, isLeft);
	}else{
		if(!head->m_RightChild){
			isLeft = false;
			return head;
		}
		return GetPos(head->m_RightChild, val, isLeft);
	}
}

void PrintPos(NODE *head, int pos_y){
	
	if(head->m_PLeftChild){
		PrintPos(head->m_PLeftChild, pos_y - 1);
	}

	if(g_pos_x == -1){
		g_pos_x = 0;
		std::cout << "data:" << head->m_data << "  pos_x:" << g_pos_x << "  pos_y:" << pos_y << std::endl;
	}
	else{
		++g_pos_x;
		std::cout << "data:" << head->m_data << "  pos_x:" << g_pos_x << "  pos_y:" << pos_y << std::endl;
	}

	if(head->m_RightChild){
		PrintPos(head->m_RightChild, pos_y -1);
	}
}

void GetposY(const NODE *head, int &pos_y){
	if(head->m_PLeftChild){
		++pos_y;
		GetposY(head->m_PLeftChild, pos_y);
	}
}