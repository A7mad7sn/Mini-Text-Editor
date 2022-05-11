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
void DataSaving(ofstream &myfile, string &directory, file &f);
void Creating_New_Text_File_Interface(ofstream &myfile, string &directory, file &f);
void Reading_Existing_Text_File_Inteface(ofstream &myfile, string &directory, file &f);
//Main Function !!
void main()
{
	file f;
	ofstream myfile;
	string directory;
	if (Counter == 0)
	{
		cout << "\t\t\t\t\t*****Welcome To Our Mini Text Editor*****" << endl;
		Counter++;
	}
	cout << "Please Select : " << endl;
	cout << "---------------" << endl;
	cout << "  1 --> Create a New Text File." << endl;
	cout << "  2 --> Open An Exsisting File & Edit it." << endl;
	cout << "  3 --> Exit Mini Text Editor." << endl;
	cout << "Option ==> ";
	int fOption;
	cin >> fOption;
	switch (fOption) 
	{
	case(1): Creating_New_Text_File_Interface(myfile, directory, f); break;
	case(2): Reading_Existing_Text_File_Inteface(myfile, directory, f); break;
	case(3): return;
	default: cout << "invalid Option , Program will exit..." << endl;
		     return;
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
		cout << "Option ====> : ";
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
		case(9): DataSaving(myfile, directory, f); return;
		default: cout << "invalid Option , Program will exit..." << endl;
			     return;
		}
		DataSaving(myfile, directory, f);
		Showintro(f);
	}
	return;
}
//Definition of Helper Functions !!
void ALintro(file &f)
{
	cout << "*_ Adding Line is Chosen _*" << endl;
	cout << "Please Enter The line You want to Add !" << endl;
	getline(cin, hh);
	cout << "New Line ==> ";
	string newline;
	getline(cin, newline);
	f.AddLine(newline);
}
void ILintro(file &f)
{
	cout << "*_ Inserting Line is Chosen _*" << endl;
	cout << "Please Enter The line You want to Insert !" << endl;
	getline(cin,hh);
	cout << "New Line ==> ";
	string newline;
	getline(cin, newline);
	cout << "Please Enter The Row Num You want to Insert in ! (Allowed from 1 to " << f.GetSize();
	cout << ")" << endl;
	int j;
	cin >> j;
	j = j - 1;
	f.InsertLine(j, newline);
}
void DLintro(file &f)
{
	cout << "*_ Deleting Line is Chosen _*" << endl;
	cout << "Please Enter The Row Num You want to delete ! (Allowed from 1 to "<< f.GetSize();
	cout << ")" << endl;
	int j;
	cin >> j;
	f.DeleteLine(j);
}
void GLTintro(file &f)
{
	cout << "*_ Getting Line is Chosen _*" << endl;
	cout << "Please Enter The Row Num You want to Get !" << endl;
	int j;
	cin >> j;
	cout << f.GetLineText(j);
}
void ULintro(file &f)
{
	cout << "*_ Updating Line is Chosen _*" << endl;
	cout << "Please Enter The Row Num You want to Update in ! (Allowed from 1 to " << f.GetSize();
	cout << ")" << endl;
	int j;
	cin >> j;
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
	cout << "Enter a String You want to Insert : ";
	cin >> newword;
	cout << "Enter a String You want to be Replaced : ";
	cin >> oldword;
	f.Findandreplace(newword, oldword);
}
void Showintro(file &f)
{
	cout << "--------------------------------------------------------------------" << endl;
	cout << "- Display of your Current file Text : " << endl;
	cout << "----------------------------------------" << endl;;
	f.Show();
	cout << "--------------------------------------------------------------------" << endl;
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
	string name;
	cin >> name;
	directory = "Data/" + name + ".txt";
	cout << "Please Add two Lines : " << endl;
	string s1, s2;
	getline(cin, hh);
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
	myfile.open(directory,ios::app);
	if (ifile.fail()) {
		cout << "This File doesn't exist , Program will exit..." << endl;
		return;
	}
	string l;
	while (getline(ifile, l)) {
		f.AddLine(l);
	}
	Showintro(f);
}
