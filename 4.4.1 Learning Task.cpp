#include <iostream>

using namespace std;

int main()
{
	string input;
	int tagprice, quantity, discount, total, cash, change;
	cout << "Enter item name: ";
	cin >> input;
		cout << "Enter tag price: ";
		cin >> tagprice;
		cout << "Enter quantity: ";
		cin >> quantity;
		cout << "Enter discount: ";
		cin >> discount;
		total = tagprice * quantity * discount;
		cout << "Total price: " << total << endl;
		cout << "Enter cash on hand: ";
		cin >> cash;
		change = total - cash;
		cout << "Change is: " << change << endl;
	system("pause");
}