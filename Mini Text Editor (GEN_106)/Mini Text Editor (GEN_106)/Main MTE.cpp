#include "Text File.h"
//Declaration of Helper Functions !!
void ALintro(file &f);
void ILintro(file &f);
void DLintro(file &f);
void GLTintro(file &f);
void ULintro(file &f);
void FAintro(file &f);
void FARintro(file &f);
void Showintro(file &f);
//Main Function !!
void main()
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
	Showintro(f);
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
		cout << "  8 --> Exit Mini Text Editor." << endl;
		cout << endl;
		cout << "Option ====> : ";
		int Option;
		cin >> Option;
		if (Option < 1 || Option > 8) {
			cout << "invalid Option , Program will exit..." << endl;
			return;
		}
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
		case(8): return;
		default: break;
		}
		Showintro(f);
	}
	return;
}
//Definition of Helper Functions !!
void ALintro(file &f)
{
	cout << "*_ Adding Line is Chosen _*" << endl;
	cout << "Please Enter The line You want to Add !" << endl;
	cout << "New Line ==> ";
	string newline;
	cin >> newline;
	f.AddLine(newline);
}
void ILintro(file &f)
{
	cout << "*_ Inserting Line is Chosen _*" << endl;
	cout << "Please Enter The line You want to Insert !" << endl;
	string newline;
	cin >> newline;
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
	cout << "Please Enter The line You want to Insert !" << endl;
	string newline;
	cin >> newline;
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