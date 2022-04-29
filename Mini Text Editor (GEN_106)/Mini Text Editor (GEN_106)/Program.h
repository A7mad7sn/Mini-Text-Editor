#include <string>
#include <vector>

using namespace std;

class file {
	vector<string> lines;
public:
	file();
	vector<string> GetLinesProps();
	void AddLine(string l);
	void InsertLine(int i, string l);
	void DeleteLine(int i);
	string GetLineText(int i);
	void UpdateLine(int i, string l);
	void FindAll(string s);
	void Findandreplace(string s1, string s2);
	void Show();
	
};