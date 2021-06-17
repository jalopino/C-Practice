#include <iostream>
#include <Windows.h>

using namespace std;
int classification; 
double totalPay;
double change;
double charge;
int totalPassengers;
double amountPaid;

void totalPayable() {
	switch (classification) {
	case 1: 
		cout << "Student" << endl;
		charge = 8.00;
		break;
	case 2:
		cout << "Regular" << endl;
		charge = 10.00;
		break;
	case 3:
		cout << "Senior" << endl;
		charge = 8.00;
		break;
	case 4:
		cout << "Minor" << endl;
		charge = 0.00;
		break;
	}
}

int main() {
	double z = 0;
	cout << "MRT Ticketing System" << endl;
	while (true) {
		cout << "Enter Number of Passenger/s: ";
		cin >> totalPassengers;
		if (totalPassengers > 0) {
			break;
		}
		else
			cout << "Invalid Number of Passenger/s!" << endl;
	}
	cout << "" << endl;
	for (int i = 0; i != totalPassengers; i++) {
		while (true) {
			cout << "Student = 1	" << 8.00 << "PHP" << endl;
			cout << "" << endl;
			cout << "Regular = 2	" << 10.00 << "PHP" << endl;
			cout << "" << endl;
			cout << "Senior = 3	" << 8.00 << "PHP" << endl;
			cout << "" << endl;
			cout << "Minor = 4	" << "FREE" << endl;
			cout << "" << endl;
			cout << "" << endl;
			cout << "PASSENGER NUMBER " << i + 1 << endl;
			cout << "Enter valid classification: ";
			cin >> classification;
			if (classification <= 0 || classification > 4) {
				cout << "Invalid Classification!" << endl;
			}
			else break;
		}
		totalPayable();
		z = z + charge;
		system("cls");
		cout << "Total Payment: " << z << "PHP" << endl;
		cout << "" << endl;
		cout << "" << endl;
	}

	while (true) {
		cout << "Total Cost: " << z << "PHP" << endl;
		cout << "" << endl;
		cout << "Enter Payment: ";
		cin >> amountPaid;
		change = amountPaid - z;
		if (change < 0) {
			cout << "Invalid Payment" << endl;
			cout << "" << endl;
		}
		else {
			cout << "Total Change: " << change << "PHP" << endl;
			break;
		}
		
	}

	system("pause");
	return 0;

}