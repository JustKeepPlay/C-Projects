#include <iostream>
#include <time.h>
#include <iomanip>
#include <string>
using namespace std;
void displaymenu();
float area(const float radius);
float area(double base,double high);
float area(const float length,const float widht);
int main(){
	char choice;
	bool flag=true;
	do{
		displaymenu();
		cin>>choice;
		if (choice=='1'){
			float radius;
			cout<<"\nEnter radius : ";
			cin>>radius;
			cout<<"Area of circle = "<<fixed;
			cout<<setprecision(2)<<area(radius)<<endl;
		}
		else if (choice=='2'){
			float length,width;
			cout<<"Enter length and width : ";
			cin>>length>>width;
			cout<<"Area of rectangle = "<<fixed;
			cout<<setprecision(2)<<area(length,width);
			cout<<endl;
		}
		else if (choice=='3'){
			double base,high;
			cout<<"Enter base and high : ";
			cin>>base>>high;
			cout<<"Area of triangle = "<<fixed;
			cout<<setprecision(2)<<area(base,high);
			cout<<endl;
		}
		else if (choice=='4') flag=false;
		else{
			cout<<"\nYou choose out of range is ";
			cout<<"not process.\n";
		}
	}while(flag);
	cout<<"\n. . . Eit Program . . .\n";
	return 0;
}
float area(const float radius){
	return(3.14159F*radius*radius);
}
float area(const float length,const float width){
	return(length*width);
}
float area(const double base,const double high){
	return((base*high)*0.5);
}
void displaymenu()
{
	cout<<endl;
	cout<<"...Program calculate area..."<<endl;
	cout<<" 1.Circle"<<endl;
	cout<<" 2.Rectangle"<<endl;
	cout<<" 3.Triangle"<<endl;
	cout<<" 4.Exit"<<endl;
	cout<<"Enter your choose number : ";
}