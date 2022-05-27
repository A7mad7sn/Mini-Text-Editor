#include "Text File.h"
#include <fstream>

//Globals :
int Counter = 0;
int rcounter = 0;
int c = 0;
string hh;//hh is just an temp value to solve input case to avoid reading empty string !!
//Declaration of Helper Functions !!
void ALintro(file& f);
void ILintro(file& f);
void DLintro(file& f);
void GLTintro(file& f);
void ULintro(file& f);
void FAintro(file& f);
void FARintro(file& f);
void Showintro(file& f);
bool CheckIndex(int i, file& f);
void DataSaving(ofstream& myfile, string& directory, file& f);
void Creating_New_Text_File_Interface(ofstream& myfile, string& directory, file& f);
void Reading_Existing_Text_File_Inteface(ofstream& myfile, string& directory, file& f);
//Main Function !!
int main()
{
	file f;
	ofstream myfile;
	string directory;
	if (Counter == 0)
	{
		cout << "\t\t\t\t\t*****Welcome To Our Mini Text Editor*****" << endl;
	}
	bool Continuity = true;
	while (Continuity) {
		cout << "Please Select : " << endl;
		cout << "---------------" << endl;
		cout << "  1 --> Create a New Text File." << endl;
		cout << "  2 --> Open An Exsisting File & Edit it." << endl;
		cout << "  3 --> Exit Mini Text Editor." << endl;
		cout << endl;
		cout << "Option ==> ";
		string fOption;
		cin >> fOption;
		if (fOption == "1")
		{
			Creating_New_Text_File_Interface(myfile, directory, f); Continuity = false; break;

		}
		else if (fOption == "2") {
			rcounter = 0;
			c = 0;
			Reading_Existing_Text_File_Inteface(myfile, directory, f); Continuity = false; break;

		}
		else if (fOption == "3") {
			return 0;
		}
		else {
			cout << fOption << " is invalid Option , Please try again ! (Allowed from 1 to 3)" << endl;
			cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
			continue;
		}
	}
	DataSaving(myfile, directory, f);
	while (true)
	{
		cout << "Press : " << endl;
		cout << "-------" << endl;
		cout << "  1 --> Add another line." << endl;
		cout << "  2 --> Insert a line at a specific position." << endl;
		cout << "  3 --> Delete line." << endl;
		cout << "  4 --> Get a specific line." << endl;
		cout << "  5 --> Update line with another line." << endl;;
		cout << "  6 --> Find lines contains a specific string." << endl;
		cout << "  7 --> Replace a string with another one in all lines." << endl;
		if (f.CheckReset())
		{
			cout << "  8 --> Edit another Text File." << endl;
			cout << "  9 --> Exit Mini Text Editor." << endl;
		}
		else {
			cout << "  8 --> Undo Changes." << endl;
			cout << "  9 --> Redo Changes." << endl;
			cout << "  10 --> Edit another Text File." << endl;
			cout << "  11 --> Exit Mini Text Editor." << endl;
		}
		cout << endl;
		cout << "Option ====> ";
		int Option;
		cin >> Option;
		while (Option < 1 || Option > 12)
		{
			cout << "Error ------- enter another num" << endl;
			cin >> Option;
		}
		cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
		switch (Option)
		{
		case(1): ALintro(f); DataSaving(myfile, directory, f); break;
		case(2): ILintro(f); DataSaving(myfile, directory, f); break;
		case(3): DLintro(f); DataSaving(myfile, directory, f); break;
		case(4): GLTintro(f); DataSaving(myfile, directory, f); break;
		case(5): ULintro(f); DataSaving(myfile, directory, f); break;
		case(6): FAintro(f); DataSaving(myfile, directory, f); break;
		case(7): FARintro(f); DataSaving(myfile, directory, f); break;
		case(8): if (f.CheckReset()) { DataSaving(myfile, directory, f); Counter++; main(); }
			   else {f.Undo(); DataSaving(myfile, directory, f); break;}
			   break;
		case(9): if (f.CheckReset()) { DataSaving(myfile, directory, f); return 0; }
			   else { f.Redo(); DataSaving(myfile, directory, f); break; }
			   break;
		case(10): if (f.CheckReset()) {
				  DataSaving(myfile, directory, f);
				  cout << Option << "is Invalid Option , Please try again (Allowed from 1 to 9)" << endl;
				  }
				else { DataSaving(myfile, directory, f); Counter++; main(); }
				break;
		case(11):if (f.CheckReset()) {
				DataSaving(myfile, directory, f);
				cout << Option << "is Invalid Option , Please try again (Allowed from 1 to 9)" << endl;
				}
				else { DataSaving(myfile, directory, f); return 0; }
		default: DataSaving(myfile, directory, f);
			cout << Option << "is Invalid Option , Please try again (Allowed from 1 to 11)" << endl;
			continue;
		}
		Counter++;
		DataSaving(myfile, directory, f);
		Showintro(f);
	}
	return 0;
}
//Definition of Helper Functions !!
void ALintro(file& f)
{
	cout << "*_ Adding Line is Chosen _*" << endl;
	cout << "Please Enter The line You want to Add !" << endl;
	cout << "New Line ==> ";
	getline(cin, hh);
	string newline;
	getline(cin, newline);
	f.AddLine(newline);
}

void ILintro(file& f)
{
	cout << "*_ Inserting Line is Chosen _*" << endl;
	cout << "Please Enter The line You want to Insert !" << endl;
	cout << "New Line ==> ";
	getline(cin, hh);
	string newline;
	getline(cin, newline);
	cout << endl;
	cout << "Please Enter The Row Num You want to Insert in !" << endl;
	cout << "*Note : if you insert Row Num > " << f.GetSize() << " (Text Size) , Size will be expanded automatically*" << endl;
	int j;
	while (true) {
		cout << "Row Num ==> ";
		cin >> j;
		if (j <= 0) {
			cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
			cout << "Invalid index , Minimum allowed is 1 !!" << endl;
			cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
			continue;
		}
		else
			break;
	}
	j = j - 1;
	f.InsertLine(j, newline);
}

void DLintro(file& f)
{
	cout << "*_ Deleting Line is Chosen _*" << endl;
	int j;
	cout << "Please Enter The Row Num You want to delete ! (Allowed from 1 to " << f.GetSize();
	cout << ")" << endl;
	while (true) {
		cout << "Row Num ==> ";
		cin >> j;
		if (!(CheckIndex(j, f)))
		{
			cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
			cout << "This Row doesn't Exist , please Try again !" << endl;
			cout << "You have Only " << f.GetSize() << " Rows !" << endl;
			cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
			continue;
		}
		else
			break;
	}
	j--;
	f.DeleteLine(j);
}

void GLTintro(file& f)
{
	cout << "*_ Getting Line is Chosen _*" << endl;
	int j;
	cout << "Please Enter The Row Num You want to Get ! (Allowed from 1 to " << f.GetSize();
	cout << ")" << endl;
	while (true) {
		cout << "Row Num ==> ";
		cin >> j;
		if (!(CheckIndex(j, f)))
		{
			cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
			cout << "This Row doesn't Exist , please Try again !" << endl;
			cout << "You have Only " << f.GetSize() << " Rows !" << endl;
			cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
			continue;
		}
		else
			break;
	}
	cout << "Line " << j << " is : ";
	j--;
	cout << f.GetLineText(j);
	cout << endl;
	cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
	cout << "Type (Y) To Continue ==> ";
	cin >> hh;
	if (hh == "Y" || hh == "y")
	{
	}
	else
		exit(0);
}

void ULintro(file& f)
{
	cout << "*_ Updating Line is Chosen _*" << endl;
	int j;
	cout << "Please Enter The Row Num You want to Update in ! (Allowed from 1 to " << f.GetSize();
	cout << ")" << endl;
	while (true) {
		cout << "Row Num ==> ";
		cin >> j;
		if (!(CheckIndex(j, f)))
		{
			cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
			cout << "This Row doesn't Exist , please Try again !" << endl;
			cout << "You have Only " << f.GetSize() << " Rows !" << endl;
			cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
			continue;
		}
		else
			break;
	}
	j--;
	cout << "Please Enter The line You want to Insert !" << endl;
	cout << "New Line ==> ";
	getline(cin, hh);
	string newline;
	getline(cin, newline);
	f.UpdateLine(j, newline);
}

void FAintro(file& f)
{
	cout << "*_ Find All lines is Chosen _*" << endl;
	cout << "Enter a String You want to find lines Num : ";
	string s;
	getline(cin, hh);
	getline(cin, s);
	deque<int> D = f.FindAll(s);
	if (D.empty() == false) {
		cout << "line/s contains word " << s << " is/are :" << endl;
		cout << "   ";
		for (int i = 0; i < D.size(); i++)
			cout << D[i] << ' ';
		cout << endl;
	}
	cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
	cout << "Type (Y) To Continue ==> ";
	cin >> hh;
	if (hh == "Y" || hh == "y")
	{
	}
	else
		exit(0);
}

void FARintro(file& f)
{
	cout << "*_ Find and Replace is Chosen _*" << endl;
	string newword;
	string oldword;
	cout << "Enter a String You want to Remove : ";
	getline(cin, hh);
	getline(cin, oldword);
	cout << "Enter a String You want to be Replaced with : ";
	getline(cin, newword);
	f.Findandreplace(newword, oldword);
	if (newword == oldword) {
		cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
		cout << "No Changes apllied as The two Strings are the same !" << endl;
	}
}

void Showintro(file& f)
{
	cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
	cout << "- Display of your Current Text File : " << endl;
	cout << "----------------------------------------" << endl;;
	f.Show();
	cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
}

bool CheckIndex(int i, file& f)
{
	if (i > 0 && i <= f.GetSize())
		return true;
	else
		return false;
}

void DataSaving(ofstream& myfile, string& directory, file& f) {
	f.Save();
	myfile.open(directory, ios::out);
	for (int i = 0; i < f.GetSize(); i++) {
		myfile << f.GetLineText(i) << endl;
	}
	myfile.close();
}

void Creating_New_Text_File_Interface(ofstream& myfile, string& directory, file& f)
{
	cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
	cout << "Please Name Your Text file : ";
	getline(cin, hh);
	string name;
	getline(cin, name);
	directory = "Data/" + name + ".txt";
	cout << "Please Add two Lines : " << endl;
	string s1, s2;
	cout << "Line 1 : ";
	getline(cin, s1);
	cout << "Line 2 : ";
	getline(cin, s2);
	f.AddLine(s1);
	f.AddLine(s2);
	Showintro(f);
}

void Reading_Existing_Text_File_Inteface(ofstream& myfile, string& directory, file& f)
{
	cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
	cout << "Please Enter Your Existing File Name : ";
	if (c == 0) {
		getline(cin, hh);
		c++;
	}
	string name;
	getline(cin, name);
	directory = "Data/" + name + ".txt";
	// Openning The Saved File 
	ifstream ifile(directory);
	if (ifile.fail()) {
		cout << "This File doesn't exist , Please Try again !" << endl;
		Reading_Existing_Text_File_Inteface(myfile, directory, f);
	}
	// Getting liness from The File into The Program 
	string l;
	deque<string> D;
	while (getline(ifile, l)) {
		D.push_back(l);
	}
	f.GetTheText(D);
	ifile.close();
	// Opening the ofstream file (To Save New Data After Editing)
	myfile.open(directory, ios::app);
	if (rcounter == 0) {
		Showintro(f);
		rcounter++;
	}
	Counter = 0;
}