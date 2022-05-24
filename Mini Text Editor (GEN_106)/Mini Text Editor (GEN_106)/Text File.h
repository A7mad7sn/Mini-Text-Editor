#include <iostream>
#include <string>
#include <deque>

using namespace std;
class file{
	deque<string> lines;
public:
	int GetSize();
	void AddLine(string l);
	void InsertLine(int i, string l);
	void DeleteLine(int i);
	string GetLineText(int i);
	void UpdateLine(int i, string l);
	deque<int> FindAll(string s);
	void Findandreplace(string s1, string s2);
	void Show();
	void Undo();
	void Redo();
	
};