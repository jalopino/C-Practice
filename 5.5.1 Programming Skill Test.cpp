//MACHINE PROBLEM #1

#include <iostream>

using namespace std;



int a;

int main() {
	while (a != 50) {
		cout << "Enter you guess number: ";
		cin >> a;
		if (a == 50) {
			cout << "Correct!" << endl;
		}
		else if (a < 50) {
			cout << "Higher!" << endl;
		}
		else if (a > 50) {
			cout << "Lower!" << endl;
		}
	}


}



//MACHINE PROBLEM #2



int main() {
	int a;
	cout << "Enter grade: ";
	cin >> a;
	if (a >= 101) {
		cout << "Remark: Overflow" << endl;
	}
	else if (a <= 100 && a >= 95) {
		cout << "Remark: Excellent" << endl;
	}
	else if (a <= 94 && a >= 90) {
		cout << "Remark: Very good" << endl;
	}
	else if (a <= 89 && a >= 85) {
		cout << "Remark: Good" << endl;
	}
	else if (a <= 84 && a >= 80) {
		cout << "Remark: Satisfactory" << endl;
	}
	else if (a <= 79 && a >= 75) {
		cout << "Remark: Needs Improvement" << endl;
	}
	else if (a <= 74 && a >= 60) {
		cout << "Remark: Failed" << endl;
	}
	else if (a <= 54 && a >= 1) {
		cout << "Remark: Invalid Input" << endl;
	}
}



//MACHINE PROBLEM #3

int main() {
	char input;
	int a;
	cout << "1. Menu" << endl;
	cout << "2. Drinks" << endl;
	cout << "Please choose: ";
	cin >> a;
	switch (a)
	{
	case 1: 
		cout << "a. Fried Chicken w/ rice 50" << endl;
		cout << "b. Porkchop w/ rice 60" << endl;
		cout << "Choose your men: ";
		cin >> input;
		if (input == 'a' || input == 'A') {
			cout << "Your order is Fried Chicken w/ rice 50" << endl;
			cout << "Thanks for ordering!!" << endl;
		}
		else if (input == 'b' || input == 'B') {
			cout << "Your order is Porkchop w/ rice 60" << endl;
			cout << "Thanks for ordering!!" << endl;
		}
		break;
	case 2:
		cout << "a. Coke" << endl;
		cout << "b. Sprite" << endl;
		cin >> input;
		if (input == 'a' || input == 'A') {
			cout << "Your order is Coke" << endl;
			cout << "Thanks for ordering!!" << endl;
		}
		else if (input == 'b' || input == 'B') {
			cout << "Your order is Sprite" << endl;
			cout << "Thanks for ordering!!" << endl;
		}
		break;
	default:
		break;
	}
}