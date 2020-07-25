#include <iostream>
#include <string>
using namespace std;

int main()
{
	string name;
	float salary;
	float sale;
	float comper;

	cout << "Enter Name : ";
	cin >> name;
	cout << "Enter Salary : ";
	cin >> salary;
	cout << "Enter Sale : ";
	cin >> sale;
	cout << "Enter Commission Percent : ";
	cin >> comper;

	cout << endl;
	cout << "Your name = " << name << endl;
	cout << "Total Revenue = " << (sale * comper) / 100 + salary << endl;
}