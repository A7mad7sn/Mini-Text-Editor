#include "Text File.h"
#include <iostream>
using namespace std;



int file::GetSize()
{ 
	int s = lines.size();
	return s;
}

//done + undo
void file::AddLine(string l)
{ 
	lines.push_back(l);
    Undostk.push(lines);
}
//done + undo
void file::InsertLine(int i, string l)
{
	if (i < lines.size())
		lines[i] = l;
	else {
		lines.resize(i+1 , " ");
		lines[i] = l;
	}
    Undostk.push(lines);
}

string file::GetLineText(int i)
{
	return lines[i];
}
//done + undo
void file::DeleteLine(int i)
{
	vector<string>::iterator it;
	if (lines.size() != 0)
	{
		if (i >= 1 && i <= lines.size())
		{
			for (it = lines.begin() + i - 1; it < lines.end() - 1; it++)
			{
				*it = *(it + 1);
			}
			lines.pop_back();
			cout << "The line is deleted";
		}
		else
		{
			cout << "line number out of range";
		}
	}
	else
	{
		cout << "Text File is empty";
	}
	cout << endl;
    Undostk.push(lines);
}
//done + undo
void file::UpdateLine(int i, string l)
{
	lines[i] = l;
    Undostk.push(lines);
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
//done + undo
void file::Findandreplace(string s1, string s2)
{
	for (int i = 0; i < lines.size(); i++)
        while((lines[i].find(s2)) < lines[i].size()){
            if ((lines[i].find(s2)) < lines[i].size()) {
                int x1 = lines[i].find(s2), x2 = s2.size();
                lines[i].replace(x1, x2, s1);
            }
        }

    Undostk.push(lines);
}

void file::Show()
{
	for (int i = 0; i < lines.size(); i++) 
	{
		cout << "          " << lines.at(i) << endl;
	}
}


void file :: Undo (){
    if(!Undostk.empty()){
        Redostk.push(Undostk.top());
        Undostk.pop();
    }


}
void file :: Redo(){
    if(!Redostk.empty()) {
        Undostk.push(Redostk.top());
        Redostk.pop();
    }
}
void file::Save(){
    if(!Undostk.empty())
        lines=Undostk.top();
}


