#include "Program.h"
#include <iostream>
using namespace std;

file::file()
{
}

vector<string> file::GetLinesProps()
{
	return lines;
}


void file::AddLine(string l)
{ 
	
}

void file::InsertLine(int i, string l)
{
}

string file::GetLineText(int i)
{
	return lines[i];
}

void file::DeleteLine(int i)
{
	vector<string>::iterator it;
	if (lines.size() != 0)
	{
		if (i >= 1 && i <= lines.size())
		{
			for (it = lines.begin() + i - 1; it <= lines.end() - 1; it++)
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
}

void file::UpdateLine(int i, string l)
{
}

void file::FindAll(string s)
{
}

void file::Findandreplace(string s1, string s2)
{
}

void file::Show()
{
}


