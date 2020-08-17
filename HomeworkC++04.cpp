#include <iostream>
int cal_age(int);
using namespace std;
int main()
{
 int num,year;
 cout << "Enter number of people : ";
 cin >> num;
 for (int n = 1; n <= num; n++)
 {
  cout << "Enter Year (" << n << ") :";
  cin >> year;
  int total = cal_age(year);
  cout << "Age (" << n << ") : " << total << endl;
 }
 cout << "*********Thank you.**********";
 return 0;
}
int cal_age(int year)
{
 int total = 0;
 total += (2563 - year);
 return total;
}
