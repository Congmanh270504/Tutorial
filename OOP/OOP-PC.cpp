#include<conio.h>
#include<string>
#include<stdlib.h>
#include<iostream>

using namespace std;
class Student
{
private:
	string name;
	int age;
public:

	Student(string name, int age, string work)
	{
		this->name = name;
		this->age = age;
	}
	void Display(string work)
	{
		cout << "Ten Sv la: " << name << "\nTuoi: " << age << "\nCong viec: " << work << endl;
	}
	void doSomeThing()
	{
		cout << "Hi there!!" << endl;
	}

};


class myChild : public Student {
};



int main()
{
	string work;
	cout << "Nhap cong viec" << endl;
	getline(cin, work);
	/*string work;
	cout << "Nhap cong viec" << endl;
	getline(cin, work);
	Student Manh("Manh", 19, work);
	Student Son("Son", 21, work);
	Student Quy("Quy", 21, work);
	Manh.Display(work);
	Son.Display(work);
	Quy.Display(work);
	*/

	_getch();
}
