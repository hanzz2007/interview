/************************************************************************/
/* 构造一颗字典树。并用测试文件进行测试                                         */
/************************************************************************/
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <algorithm>
using namespace std;

struct TrieNode{
	char key;
	int frequency;
	int id;
	TrieNode *nextNode[26];
	TrieNode(char value, int wordId):key(value), id(wordId){
		frequency = 0;
		for(int i = 0; i < 26; ++i){
			nextNode[i] = NULL;
		}
	}
};

class Solution{
public:
	Solution(){
		root = new TrieNode(0, 0);
	}
	void Insert(string &word, int id){
 
		_Insert(root, word, 0, id);
	}
	int Check(string word){
		return _Check(root, word, 0);
	}
private:
	TrieNode *root;
	int _Check(TrieNode *node, string &word, int index){
		int k = word[index] - 'a';
		if(!node->nextNode[k]){
			return -1;
		}
		if(index == word.size() - 1){
			return node->nextNode[k]->id;
		}
		else{
			return _Check(node->nextNode[k], word, index + 1);
		}

	}
	void _Insert(TrieNode *node, string word, int index, int id){

		int k = word[index] - 'a';
		if(!node->nextNode[k]){
			node->nextNode[k] = new TrieNode(word[index], 0);
		}

		if(index == word.size() - 1){
			node->nextNode[k]->id = id;
			node->nextNode[k]->frequency++;
		}
		else{
			_Insert(node->nextNode[k], word, index + 1, id);
		}
	}
};

//
//int main(){
//	Solution solution;
//	//string word("word");
//	ifstream fin("1.txt");
//	string word;
//	while(getline(fin, word)){
//		string str = word;
//		int splitPos = word.find(" ");
//		stringstream ss;
//		string numberStr = word.substr(0, splitPos);
//		ss << numberStr;
//		int number;
//		ss >> number;
//		word = word.substr(splitPos + 1);
//		transform(word.begin(), word.end(), word.begin(), tolower);
//		solution.Insert(word, number);
//		word.clear();
//	}
//	string checkWord1("absence");
//	string checkWord2("confusion");
//	cout << solution.Check(checkWord1) << endl;
//	cout << solution.Check(checkWord2) << endl;
//	//cout << solution.Check(word);
//	return 0;
//}