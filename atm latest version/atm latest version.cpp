#include <iostream>
#include <array>
#include <string>
#include <iomanip>
using namespace std;
int main() {

	//declare variable
	float acc[5][2] = { {0,0},{0,0},{0,0},{0,0},{0,0} };
	float id,idt;
	int n;
	char ch,tacc,cho,sch;
	bool op = true;
	string list[5];
	string name[5][2];
	string tranfer[5];
	string depo,with,tran;
	
	//main program
	//login
	do {
		do {
			do {
				cout << "============================================================================================" << endl;
				cout << "Banking program" << endl;
				cout << "Enter 1 to Show all account id" << endl;
				cout << "Enter 2 to Login as customer" << endl;
				cout << "Enter 3 to Exit program" << endl;
				cout << "============================================================================================" << endl;
				cout << "Enter your select : ";
				cin >> sch;
				if (sch == '1') {
					cout << "Accout ID in system" << endl;
					cout << setw(30) << left << "Account ID"<< setw(30) << left <<"Name"<< "Balance(Bath)" << endl;
					for (int i = 0; i < 5; i++)
					{
						if (acc[i][0] == 0)
							cout << "No account" << endl;
						else {
							cout << setw(30) << left << fixed << setprecision(0)<< acc[i][0]<< setw(30) << left <<name[i][0]<<fixed<<setprecision(2)<< acc[i][1] << endl;
						}
					
					}
					op = true;
				}
				else if (sch == '2') {
					do {
						cout << "Do you have any account id ? (Y/N) : ";
						cin >> ch;
						if ((ch == 'n') || (ch == 'N')) {
							cout << "Please create your account id : ";
							cin >> id;
							for (int i = 0; i < 5; i++) {
								if (acc[i][0] == 0) {
									cout << "Please enter your name : ";
									cin >> name[i][0];
									break;
								}
							}
							for (int i = 0; i < 5; i++) {
									if (acc[i][0] == 0) {
										cout << "============================================================================================" << endl;
										cout << "Select your account type : " << endl;
										cout << "1.Saving account" << endl;
										cout << "2.Fixed deposit account" << endl;
										cout << "3.Current account" << endl;
										cout << "Select : ";
										cin >> tacc;
										cout << "============================================================================================" << endl;
										if (tacc == '1') {
											name[i][1] = "Saving account";
											op = false;
											break;
										}
										else if (tacc == '2') {
											name[i][1] = "Fixed account";
											op = false;
											break;
										}
										else if (tacc == '3') {
											name[i][1] = "Current account";
											op = false;
											break;
										}
										else {
											cout << "Select from the following option only !" << endl;
											i--;
										}
									}
								}
							for (int i = 0; i < 5; i++) {
								if (acc[i][0] == 0)
								{
									acc[i][0] = id;
									cout << "============================================================================================" << endl;
									cout << "Registered" << endl;
									cout << "Your account is \"" << fixed << setprecision(0) << acc[i][0] << "\"" << endl;
									cout << "Account name is \"" << name[i][0] << "\"" << endl;
									cout << "Account type is \"" << name[i][1] << "\"" << endl;
									cout << "============================================================================================" << endl;
									op = true;
									break;
								}
								else if (id == acc[i][0]) {
									cout << "This account is already exist !" << endl;
									break;
								}
							}
							
						}
						else if ((ch == 'y') || (ch == 'Y')) {
							int a=0;
							cout << "Please enter your account id : ";
							cin >> id;
							for (int i = 0; i < 5; i++) {
								if (id == acc[i][0]) {
									cout << "Your account name is \"" << name[i][0] << "\"" << endl;
									op = false;
									a = 1;
									break;

								}
								else
								{
									a = 0;
								}
							}
							if (a == 0)
							{
								cout << "Not have ID" << endl;
							}
						}

						else
							cout << "Select Yes or No only !" << endl;


					} while (op);
				}
				else if (sch == '3') {
					cout << "Exit program" << endl;
					op = true;
					break;
				}
				else
					cout << "Select from the following option only !" << endl;
			} while (op == true);
			if (sch == '3') {
				op = true;
				break;
			}
			//Menu selection
			do {
				for (int i = 0; i < 5; i++) {
					if (id == acc[i][0]) {
						n = i;
						break;
					}
				}
				cout << "============================================================================================" << endl;
				cout << "What you want to do ?" << endl;
				cout << "1.Deposit" << endl;
				cout << "2.Withdraw" << endl;
				cout << "3.Transfer" << endl;
				cout << "4.Balance check" << endl;
				cout << "5.View list" << endl;
				cout << "6.Change account" << endl;
				cout << "============================================================================================" << endl;
				cout << "Choose : ";
				cin >> cho;

				//Deposit
				if (cho == '1') {
					cout << "Account ID : " << fixed << setprecision(0)<<acc[n][0] << endl;
					cout << "Account name : " << name[n][0] << endl;
					cout << "\nPlease enter an amount you want to deposit : ";
					cin >> depo;
					cout << endl;
					acc[n][1] += atoi(depo.c_str());
					cout << "Your balance = " << fixed << setprecision(2) << acc[n][1] << endl;
					list[n] += "\nDeposit " + depo + ".00 Baht";
					op = true;
				}

				//Withdraw
				else if (cho == '2') {
					cout << "Account ID : " << fixed << setprecision(0) <<acc[n][0] << endl;
					cout << "Account name : " << name[n][0] << endl;
					cout << "\nPlease enter an amount you want to withdraw : ";
					cin >> with;
					cout << endl;
					if (acc[n][1] > atoi(with.c_str())) {
						acc[n][1] -= atoi(with.c_str());
						cout << "Your balance = " << fixed << setprecision(2) << acc[n][1] << endl;
						list[n] += "\nWithdraw " + with + ".00 Baht";
					}
					else cout << "You have not enough money !" << endl;
					op = true;
				}

				//Transfer
				else if (cho == '3') {
					cout << "Account ID : " << fixed << setprecision(0) << acc[n][0] << endl;
					cout << "Account name : " << name[n][0] << endl;
					cout << "\nPlease enter the account id you want to transfer to : ";
					cin >> idt;
					cout << endl;
					for (int i = 0; i < 5; i++) {
						if (idt == acc[i][0]) {
							cout << "Please enter amount you want to transfer : ";
							cin >> tran;
							int m = i;
							if (atoi(tran.c_str()) <= acc[n][1]) {
								
								float c = 0;
								acc[n][1] -= atoi(tran.c_str());
								acc[m][1] += atoi(tran.c_str());
								cout << "Your balance = " << fixed << setprecision(2) << acc[n][1] << endl;
								tranfer[n] = "\nTranfer " + tran + ".00 Baht to " + to_string(static_cast<long long>(acc[m][0]));
								tranfer[m] = "\nReceive " + tran + ".00 Baht to " + to_string(static_cast<long long>(acc[n][0]));
							}
							else cout << "You have not enough money!" << endl;
						}
					}
					op = true;
				}

				//Check balance
				else if (cho == '4') {
					cout << "Account ID : " << fixed << setprecision(0) << acc[n][0] << endl;
					cout << "Account name : " << name[n][0] << endl;
					cout << "\nBalance check" << endl;
					cout << endl;
					cout << "Account type : " << name[n][1] << endl;
					cout << endl;
					cout << "Total = " << fixed << setprecision(2) << acc[n][1] << endl;
					cout << endl;
					op = true;
				}

				//View list
				else if (cho == '5') {
					cout << "Account ID : " << fixed << setprecision(0) << acc[n][0] << endl;
					cout << "Account name : " << name[n][0] << endl;
					cout << list[n];
					cout << tranfer[n]  << endl;
					cout << "\nYour Balance : " << fixed << setprecision(2) << acc[n][1] << endl;
					op = true;
				}
				//Change accout
				else if (cho == '6') {
					cout << "\nChange accout..." << endl;
					op = false;
					break;
				}
				
				else cout << "Please select from the following menu " << endl;

			} while (op == true);
		}while (op == false);
	} while (op == false);
	return 0;
}