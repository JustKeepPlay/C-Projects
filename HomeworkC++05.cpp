#include <iostream>
#include <string>
#include <time.h>
using namespace std;
int Random_guess(int);
int main()
{
	int ran, Round;
	srand(time(NULL));
	ran = rand() % 9 + 1;
	cout << "=======This is guessing program=======" << endl;
	cout << "Secret number has been chosen." << endl;
	Round = Random_guess(ran);
	cout << "The secret number is " << ran << "" << endl;
	cout << "You made " << Round << " guesses." << endl;
}
int Random_guess(int ran)
{
	int num;
	bool done = true;
	int Round = 1;
	while (done) {
		cout << "Please guess the number : ";
		cin >> num;
		if (num < ran)
			cout << "The number is higher than that." << endl;
		else if (num > ran)
			cout << "The number is lower than that." << endl;
		else {
			cout << "Congratulation! You got that right!" << endl;
			break;
		}
		Round++;
	}
	return Round;
}