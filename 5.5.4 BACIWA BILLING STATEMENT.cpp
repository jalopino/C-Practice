#include <Windows.h>
#include <iostream>
#include <string>

using namespace std;
int waterConsumption;
bool start = true;
double charge;
string reply; 
int classification;
double tax;
double totalCharge;

int main() {
	cout << "BACIWA Billing Statement" << endl;
	while (true) {
		while (true) {
			cout << "Enter your water consumption: ";
			cin >> waterConsumption;
			if (waterConsumption > 0) {
				break;
			}
			else
				system("cls");
				cout << "Invalid consumption!" << endl;
				std::cin.clear();
				std::cin.ignore();
		}

		if (waterConsumption > 240) {
			classification = 2;
		}
		else
			classification = 1;

		switch (classification) {
		case 1:
			cout << "Classification:	Residential" << endl;
			charge = 3.40;
			break;
		case 2:
			cout << "Classification:	Commercial" << endl;
			charge = 5.50;
			break;
		}

		tax = (waterConsumption * charge) * .10;
		totalCharge = (waterConsumption * charge) + tax;
		cout << "Total Charge: " << totalCharge << endl;


		while (true) {
			cout << "Would you like to make another transaction? (yes/no): ";
			cin >> reply;
			if (reply == "yes" || reply == "no") {
				break;
			}
			else
				cout << "Invalid Reply!" << endl;
			std::cin.clear();
			std::cin.ignore();
		}

		if (reply == "yes") {
			start = true;
			system("cls");
			cout << "BACIWA Billing Statement" << endl;
		}
		else
			start = false;

		if (start == false) {
			break;
		}
	}

	return 0;
}