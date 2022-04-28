#include <iostream>
#include "program.cpp"
using namespace std;
//Main Function !!
int main()
{
	file f ;
	string s1, s2;
	cout << "*****Welcome To Our Mini Text Editor*****" << endl;
	cout << "Please Add two Lines : " << endl;
	cin >> s1;
	cin >> s2;
	f.AddLine(s1);
	f.AddLine(s2);
	while (true)
	{
		cout << "*******************************************************" << endl;
		cout << "- Display of your Current file Text : " << endl;
		cout << "----------------------------------------" << endl;;
		f.Show();
		cout << "*******************************************************" << endl;
		cout << "How do you want to edit your file ?" << endl;
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
		if (Option == 1) {
			cout << "*_ Adding Line is Chosen _*" << endl;
			cout << "Please Enter The line You want to Add !" << endl;
			string newline;
			cin >> newline;
			f.AddLine(newline);
		}
		else if (Option == 2) {
			cout << "*_ Inserting Line is Chosen _*" << endl;
			cout << "Please Enter The line You want to Insert !" << endl;
			string newline;
			cin >> newline;
			cout << "Please Enter The Row Num You want to Insert in ! (Allowed from 1 to " + f.lines.size();
			cout << ")" << endl;
			int i;
			cin >> i;
			i = i - 1;
			f.InsertLine(i, newline);
		}
		else if (Option == 3) {
			cout << "*_ Deleting Line is Chosen _*" << endl;
			cout << "Please Enter The Row Num You want to delete !" << endl;
			int i;
			cin >> i;
			f.DeleteLine(i);
		}
		else if (Option == 4) {
			cout << "*_ Getting Line is Chosen _*" << endl;
			cout << "Please Enter The Row Num You want to Get !" << endl;
			int i;
			cin >> i;
			cout << f.GetLineText(i);
		}
		else if (Option == 5) {
			cout << "*_ Updating Line is Chosen _*" << endl;
			cout << "Please Enter The line You want to Insert !" << endl;
			string newline;
			cin >> newline;
			cout << "Please Enter The Row Num You want to Update in ! (Allowed from 1 to " + f.lines.size();
			cout << ")" << endl;
			int i;
			cin >> i;
			f.UpdateLine(i, newline);
		}
		else if (Option == 6) {
			cout << "*_ Find All lines is Chosen _*" << endl;
			cout << "Enter a String You want to find lines Num !" << endl;
			string s;
			cin >> s;
			f.FindAll(s);
		}
		else if (Option == 7) {
			cout << "*_ Find and Replace is Chosen _*" << endl;
			string newstring;
			string oldstring;
			cout << "Enter a String You want to Insert : ";
			cin >> newstring;
			cout << "Enter a String You want to be Replaced : ";
			cin >> oldstring;
			f.Findandreplace(newstring, oldstring);
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
////Helper Functions !!
//void ALintro(file f)
//{
//	cout << "*_ Adding Line is Chosen _*" << endl;
//	cout << "Please Enter The line You want to Add !" << endl;
//	string newline;
//	cin >> newline;
//	f.AddLine(newline);
//}
//void ILintro(file f)
//{
//	cout << "*_ Inserting Line is Chosen _*" << endl;
//	cout << "Please Enter The line You want to Insert !" << endl;
//	string newline;
//	cin >> newline;
//	cout << "Please Enter The Row Num You want to Insert in ! (Allowed from 1 to " + f.lines.size();
//	cout << ")" << endl;
//	int i;
//	cin >> i;
//	i = i - 1;
//	f.InsertLine(i, newline);
//}
//void DLintro(file f)
//{
//	cout << "*_ Deleting Line is Chosen _*" << endl;
//	cout << "Please Enter The Row Num You want to delete !" << endl;
//	int i;
//	cin >> i;
//	f.DeleteLine(i);
//}
//void GLTintro(file f)
//{
//	cout << "*_ Getting Line is Chosen _*" << endl;
//	cout << "Please Enter The Row Num You want to Get !" << endl;
//	int i;
//	cin >> i;
//	cout << f.GetLineText(i);
//}
//void ULintro(file f)
//{
//	cout << "*_ Updating Line is Chosen _*" << endl;
//	cout << "Please Enter The line You want to Insert !" << endl;
//	string newline;
//	cin >> newline;
//	cout << "Please Enter The Row Num You want to Update in ! (Allowed from 1 to " + f.lines.size();
//	cout << ")" << endl;
//	int i;
//	cin >> i;
//	f.UpdateLine(i, newline);
//}
//void FAintro(file f)
//{
//	cout << "*_ Find All lines is Chosen _*" << endl;
//	cout << "Enter a String You want to find lines Num !" << endl;
//	string s;
//	cin >> s;
//	f.FindAll(s);
//}
//void FARintro(file f)
//{
//	cout << "*_ Find and Replace is Chosen _*" << endl;
//	string newstring;
//	string oldstring;
//	cout << "Enter a String You want to Insert : ";
//	cin >> newstring;
//	cout << "Enter a String You want to be Replaced : ";
//	cin >> oldstring;
//	f.Findandreplace(newstring, oldstring);
//}
