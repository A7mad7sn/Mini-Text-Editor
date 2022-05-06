#include <iostream>
using namespace std;
#include "Text File.h"
//Helper Functions !!
void ALintro(file f)
{
	cout << "*_ Adding Line is Chosen _*" << endl;
	cout << "Please Enter The line You want to Add !" << endl;
	string newline;
	cin >> newline;
	f.AddLine(newline);
}
void ILintro(file f)
{
	cout << "*_ Inserting Line is Chosen _*" << endl;
	cout << "Please Enter The line You want to Insert !" << endl;
	string newline;
	cin >> newline;
	cout << "Please Enter The Row Num You want to Insert in ! (Allowed from 1 to " + f.GetLinesProps().size();
	cout << ")" << endl;
	int j;
	cin >> j;
	j = j - 1;
	f.InsertLine(j, newline);
}
void DLintro(file f)
{
	cout << "*_ Deleting Line is Chosen _*" << endl;
	cout << "Please Enter The Row Num You want to delete !" << endl;
	int j;
	cin >> j;
	f.DeleteLine(j);
}
void GLTintro(file f)
{
	cout << "*_ Getting Line is Chosen _*" << endl;
	cout << "Please Enter The Row Num You want to Get !" << endl;
	int j;
	cin >> j;
	cout << f.GetLineText(j);
}
void ULintro(file f)
{
	cout << "*_ Updating Line is Chosen _*" << endl;
	cout << "Please Enter The line You want to Insert !" << endl;
	string newline;
	cin >> newline;
	cout << "Please Enter The Row Num You want to Update in ! (Allowed from 1 to " + f.GetLinesProps().size();
	cout << ")" << endl;
	int j;
	cin >> j;
	f.UpdateLine(j, newline);
}
void FAintro(file f)
{
	cout << "*_ Find All lines is Chosen _*" << endl;
	cout << "Enter a String You want to find lines Num !" << endl;
	string s;
	cin >> s;
	f.FindAll(s);
}
void FARintro(file f)
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

//Main Function !!
int main()
{
	file f;
	string s1, s2;
	cout << "*****Welcome To Our Mini Text Editor*****" << endl;
	cout << "Please Add two Lines : " << endl;
	cout << "Line 1 : ";
	cin >> s1;
	cout << "Line 2 : ";
	cin >> s2;
	f.AddLine(s1);
	f.AddLine(s2);
	while (true)
	{
		cout << "--------------------------------------------------------------------" << endl;
		cout << "- Display of your Current file Text : " << endl;
		cout << "----------------------------------------" << endl;;
		f.Show();
		cout << "--------------------------------------------------------------------" << endl;		cout << "How do you want to edit your file ?" << endl;
		cout << "Press : \n 1 --> Add another line." << endl;
		cout << "2 --> Insert a line at a specific position." << endl;
		cout << "3 --> Delete line." << endl;
		cout << "4 --> Get a specific line." << endl;
		cout << "5 --> Update line with another line." << endl;;
		cout << "6 --> Find lines contains a specific string." << endl;
		cout << "7 --> Replace a string with another one in all lines." << endl;
		int Option;
		cin >> Option;
		if (Option < 1 || Option > 7) {
			cout << "invalid Option , Program will exit..." << endl;
			return 0;
		}
		cout << "-------------------------------------------------------" << endl;
		switch (Option)
		{
		case(1): ALintro(f);
		case(2): ILintro(f);
		case(3): DLintro(f);
		case(4): GLTintro(f);
		case(5): ULintro(f);
		case(6): FAintro(f);
		case(7): FARintro(f);
		default: break;
		}
		cout << "-------------------------------------------------------" << endl;
		cout << "Continue Editing ? (Y for Yes , N for NO) :  ";
		char choice;
		cin >> choice;
		if (choice == 'Y' || choice == 'y')
			continue;
		else if (choice == 'N' || choice == 'n')
			break;
		else {
			cout << "Invalid Choice , Program will exit..." << endl;
			break;
		}
	}
	return 0;
}
