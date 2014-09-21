#pragma once
typedef unsigned int uint;
typedef int DATA;
typedef struct NODE{
	DATA m_data;
	struct NODE *m_PLeftChild;
	struct NODE *m_RightChild;
}NODE;

static int g_pos_x = -1;

void CreateTree(NODE * &head, const std::vector<DATA> &dataVec);
static NODE *GetPos(NODE *head, DATA val, bool &isLeft);
void PrintPos(NODE *head, int pos_y);
void GetposY(const NODE *head, int &pos_y);