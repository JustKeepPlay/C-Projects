#include <iostream>
#include <array>
void display(int salary[],int num);
int cal_bonus(int salary);
using namespace std;
int main(){
	int num;
	cout<<"Enter number of person : ";
	cin>>num;
	cal_bonus(num);
	int *salary=new int [num];
	for(int n=0;n<num;n++){
		cout<<"Enter the salary ("<<n+1<<") : ";
		cin>>salary[n];
		cal_bonus(salary[n]);
	}
	display(salary,num);
}
int cal_bonus(int salary){
	int bonus=0;
	bonus=salary*2;
	return bonus;
}
void display(int salary[],int num){
	cout<<"There are "<<num<<" person."<<endl;
	for (int n=0;n<num;n++){
		int bonus=cal_bonus(salary[n]);
		cout<<"The salary for person "<<n+1<<" = "<<salary[n]<<" and Bonus = "<<bonus<<endl;
	}
}