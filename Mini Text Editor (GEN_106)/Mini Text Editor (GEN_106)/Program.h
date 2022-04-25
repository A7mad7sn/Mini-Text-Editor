#include <string>
#include <vector>

using namespace std;

class file {
	vector<string> lines;
public : 
	file();
	void AddLine(string l);
	void InsertLine(int i, string l);
	string GetLineText(int i);
	void DeleteLine(int i);
	void UpdateLine(int i, string l);
	void FindAll();
	void Show();
	void Findandreplace(string s1, string s2);
};