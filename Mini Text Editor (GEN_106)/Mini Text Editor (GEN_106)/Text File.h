#include <iostream>
#include "assert.h"
#include <string>
#include <vector>
#include <stack>
using namespace std;
class file{
	vector<string> lines;
    stack<vector<string>> Undostk;
    stack<vector<string>> Redostk;
public:
	int GetSize();
	void AddLine(string l);
	void InsertLine(int i, string l);
	void DeleteLine(int i);
	string GetLineText(int i);
	void UpdateLine(int i, string l);
	void FindAll(string s);
	void Findandreplace(string s1, string s2);
	void Show();
    void Redo();
    void Save();
    void Undo();
	
};