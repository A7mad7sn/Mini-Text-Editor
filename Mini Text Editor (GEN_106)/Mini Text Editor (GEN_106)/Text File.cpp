#include "Text File.h"
#include <iostream>
using namespace std;



int file::GetSize()
{
	return lines.size();
}

void file::AddLine(string l)
{
	lines.push_back(l);
	Undostk.push(lines);
}

void file::InsertLine(int i, string l)
{
	if (i == 0) {
		lines.push_front(l); // O(1)
	}
	else if (i < lines.size() ) {
		lines.emplace(lines.begin() + i, l); 
	}
	else {
		lines.resize(i + 1, " ");
		lines[i] = l;
	}
	Undostk.push(lines);
}

string file::GetLineText(int i)
{
	return lines[i];
}

void file::DeleteLine(int i)
{
	lines.erase(lines.begin() + i);
	Undostk.push(lines);
}

void file::UpdateLine(int i, string l)
{
	lines[i] = l;
	Undostk.push(lines);
}

deque<int> file::FindAll(string s)
{
	deque<int> D;
	for (int i = 0; i < lines.size(); i++) {
		// how find  work
		if ((lines[i].find(s)) < lines[i].size()) {
			D.push_back(i + 1);
		}
	}
	if (D.size() == 0)
		cout << "word does not exist" << endl;
	else
	{
		return D;
	}
}

void file::Findandreplace(string s1, string s2)
{
	for (int i = 0; i < lines.size(); i++)
		while ((lines[i].find(s2)) < lines[i].size()) {
			int x1 = lines[i].find(s2), x2 = s2.size();
			lines[i].replace(x1, x2, s1);
		}
	Undostk.push(lines);
}

void file::Show() {

	deque<string> D = Undostk.top();
	if (D.empty())
		cout << " " << endl;
	else {
		for (int i = 0; i < D.size(); i++) {
			cout << (i + 1) << " : " << D[i] << endl;
		}
	}
}

void file::Undo() {
	if (!Undostk.empty()) {
		Redostk.push(Undostk.top());
		Undostk.pop();
	}
	else{}
	
}
void file::Redo() {
	if (!Redostk.empty()) {
		Undostk.push(Redostk.top());
		Redostk.pop();
	}
}

void file::Save() {
	if (!Undostk.empty())
		lines = Undostk.top();
}

void file::GetTheText(deque<string> D)
{
	lines = D;
	standard = D;
	Undostk.push(lines);
}

bool file::CheckReset()
{
	if (lines == standard)
		return true;
	else
		return false;
}


