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
}

void file::InsertLine(int i, string l)
{
	if (i < lines.size()) {
		vector<string>::iterator it;
		lines.emplace(lines.begin() + i, l);
	}
	else{
		lines.resize(i+1 , " ");
		lines[i] = l;
	}
}

string file::GetLineText(int i)
{
	return lines[i];
}

void file::DeleteLine(int i)
{
	lines.erase(lines.begin() + i);
}

void file::UpdateLine(int i, string l)
{
	lines[i] = l;
}

void file::FindAll(string s)
{
	vector<int> v1;
	for (int i = 0; i < lines.size(); i++) {
		// how find  work
		if ((lines[i].find(s)) < lines[i].size()) {
			v1.push_back(i+1);
		}
	}
	if (v1.size() == 0)
		cout << "word does not exist" << endl;
	else
	{
		cout << "line/s contains word " << s << " is/are :" << endl;
		for (int i = 0; i < v1.size(); i++) {
			cout << v1[i] << ' ';
		}
		cout << endl;
	}
}

void file::Findandreplace(string s1, string s2)
{
	for (int i = 0; i < lines.size(); i++)
		if ((lines[i].find(s2)) < lines[i].size()) {
			int x1 = lines[i].find(s2), x2 = s2.size();
			lines[i].replace(x1, x2, s1);
		}
}

void file::Show()
{
	//WARNING : This Function work Correctly , but it isn't implemented as required
	for (int i = 0; i < lines.size(); i++) 
	{
		cout << "          " << lines.at(i) << endl;
	}
}

void file::Undo()
{

}

void file::Redo()
{

}