#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	float f,s,t ;
	int mid,fin;
	float total;
	cout<<"============QUIZZES===========\n";
	cout<<"Enter first quizz (10): ";
	cin>>f;
	cout<<"Enter second quizz (10): ";
	cin>>s;
	cout<<"Enter third quizz (10): ";
	cin>>t;
	
	cout<<"===========MID-TERM===========\n";
	cout<<"Enter mid-term (40): ";
	cin>>mid;
	
	cout<<"==========FINAL-TERM==========\n";
	cout<<"Enter final term (50): ";
	cin>>fin;
	
	total=(f+s+t)/3+mid+fin;
	cout<<"==============================\n";
	cout<<"Quizz total : "<<(f+s+t)/3<<endl;
	cout<<"Mid term : "<<mid<<endl;
	cout<<"Final term : "<<fin<<endl;
	cout<<"Total : "<<total<<endl;
	cout<<"Your score is "<<(total>=50?"PASS":"FAIL")<<endl;
	
}
