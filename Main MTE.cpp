#include "Text File.h"
#include <fstream>

//Globals :
int Counter = 0;
string hh;//hh is just an temp value to solve input case to avoid reading empty string !!
//Declaration of Helper Functions !!

void ALintro(file &f);
void ILintro(file &f);
void DLintro(file &f);
void GLTintro(file &f);
void ULintro(file &f);
void FAintro(file &f);
void FARintro(file &f);
void Showintro(file &f);
bool CheckIndex(int i, file &f);
void DataSaving(ofstream &myfile, string &directory, file &f);
void Creating_New_Text_File_Interface(ofstream &myfile, string &directory, file &f);
void Reading_Existing_Text_File_Inteface(ofstream &myfile, string &directory, file &f);
//Main Function !!
int main()
{
	file f;
	ofstream myfile;
	string directory;
	if (Counter == 0)
	{
		cout << "\t\t\t\t\t*****Welcome To Our Mini Text Editor*****" << endl;
		Counter++;
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
		int fOption;
		cin >> fOption;
		switch (fOption)
		{
		case(1): Creating_New_Text_File_Interface(myfile, directory, f); Continuity = false; break;
		case(2): Reading_Existing_Text_File_Inteface(myfile, directory, f); Continuity = false; break;
		case(3): return 0;
		default: cout << "--------------------------------------------------------------------" << endl;
				 cout << fOption <<" is invalid Option , Please try again ! (Allowed from 1 to 3)" << endl;
				 cout << "--------------------------------------------------------------------" << endl;
			     continue ;
		}
	}
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
		cout << "  8 --> Edit another Text File." << endl;
		cout << "  9 --> Exit Mini Text Editor." << endl;
		cout << endl;
		cout << "Option ====> ";
		int Option;
		cin >> Option;
		cout << "--------------------------------------------------------------------" << endl;
		switch (Option)
		{
		case(1): ALintro(f); break;
		case(2): ILintro(f); break;
		case(3): DLintro(f); break;
		case(4): GLTintro(f); break;
		case(5): ULintro(f); break;
		case(6): FAintro(f); break;
		case(7): FARintro(f); break;
		case(8): DataSaving(myfile, directory, f); main();
		case(9): DataSaving(myfile, directory, f); return 0;
		default: DataSaving(myfile, directory, f); 
			     cout << Option << "is Invalid Option , Please try again (Allowed from 1 to 9)" << endl;
			     continue;
		}
		DataSaving(myfile, directory, f);
		Showintro(f);
	}
	return 0;
}
//Definition of Helper Functions !!
void ALintro(file &f)
{
	cout << "*_ Adding Line is Chosen _*" << endl;
	cout << "Please Enter The line You want to Add !" << endl;
	cout << "New Line ==> ";
	getline(cin, hh);
	string newline;
	getline(cin, newline);
	f.AddLine(newline);
}

void ILintro(file &f)
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
	cout << "Row Num ==> ";
	int j;
	cin >> j;
	j = j - 1;
	f.InsertLine(j, newline);
}

void DLintro(file &f)
{
	cout << "*_ Deleting Line is Chosen _*" << endl;
	int j;
	while (true) {
		cout << "Please Enter The Row Num You want to delete ! (Allowed from 1 to " << f.GetSize();
		cout << ")" << endl;
		cout << "Row Num ==> ";
		cin >> j;
		if (!(CheckIndex(j, f))) 
		{
			cout << "--------------------------------------------------------------------" << endl;
			cout << "This Row doesn't Exist , please Try again !" << endl;
			cout << "You have Only " << f.GetSize() << " Rows !" << endl;
			cout << "--------------------------------------------------------------------" << endl;
			continue;
		}
		else
			break;
	}
	f.DeleteLine(j);
}

void GLTintro(file &f)
{
	cout << "*_ Getting Line is Chosen _*" << endl;
	int j;
	while (true) {
		cout << "Please Enter The Row Num You want to Get ! (Allowed from 1 to " << f.GetSize();
		cout << ")" << endl;
		cout << "Row Num ==> ";
		cin >> j;
		if (!(CheckIndex(j, f)))
		{
			cout << "--------------------------------------------------------------------" << endl;
			cout << "This Row doesn't Exist , please Try again !" << endl;
			cout << "You have Only " << f.GetSize() << " Rows !" << endl;
			cout << "--------------------------------------------------------------------" << endl;
			continue;
		}
		else
			break;
	}
	cout << "Line " << j << " is : ";
	j--;
	cout << f.GetLineText(j);
	cout << endl;
	cout << "--------------------------------------------------------------------" << endl;
	cout << "Type (Y) To Continue ==> ";
	cin >> hh;
	if (hh == "Y" || hh == "y")
	{
	}
	else
		exit(0);
}

void ULintro(file &f)
{
	cout << "*_ Updating Line is Chosen _*" << endl;
	int j;
	while (true) {
		cout << "Please Enter The Row Num You want to Update in ! (Allowed from 1 to " << f.GetSize();
		cout << ")" << endl;
		cin >> j;
		if (!(CheckIndex(j, f)))
		{
			cout << "--------------------------------------------------------------------" << endl;
			cout << "This Row doesn't Exist , please Try again !" << endl;
			cout << "You have Only " << f.GetSize() << " Rows !" << endl;
			cout << "--------------------------------------------------------------------" << endl;
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

void FAintro(file &f)
{
	cout << "*_ Find All lines is Chosen _*" << endl;
	cout << "Enter a String You want to find lines Num !" << endl;
	string s;
	cin >> s;
	f.FindAll(s);
}
void FARintro(file &f)
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
		cout << "--------------------------------------------------------------------" << endl;
		cout << "No Changes apllied as The two Strings are the same !" << endl;
	}
}
void Showintro(file &f)
{
	cout << "--------------------------------------------------------------------" << endl;
	cout << "- Display of your Current Text File : " << endl;
	cout << "----------------------------------------" << endl;;
	f.Show();
	cout << "--------------------------------------------------------------------" << endl;
}
bool CheckIndex(int i, file &f)
{
	if (i <= f.GetSize())
		return true;
	else
		return false;
}
void DataSaving(ofstream &myfile,string &directory,file &f) {
	myfile.open(directory, ios::out);
	for (int i = 0; i < f.GetSize(); i++) {
		myfile << f.GetLineText(i) << endl;
	}
	myfile.close();
}
void Creating_New_Text_File_Interface(ofstream &myfile, string &directory, file &f)
{
	cout << "--------------------------------------------------------------------" << endl;
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
void Reading_Existing_Text_File_Inteface(ofstream &myfile, string &directory, file &f) 
{
	cout << "--------------------------------------------------------------------" << endl;
	cout << "Please Enter Your Existing File Name : ";
	getline(cin, hh);
	string name;
	getline(cin, name);
	directory = "Data/" + name + ".txt";
	ifstream ifile(directory);
	if (ifile.fail()) {
		cout << "This File doesn't exist , Please Try again !" << endl;
		Reading_Existing_Text_File_Inteface(myfile, directory, f);
	}
	myfile.open(directory,ios::app);
	string l;
	while (getline(ifile, l)) {
		f.AddLine(l);
	}
	Showintro(f);
}
