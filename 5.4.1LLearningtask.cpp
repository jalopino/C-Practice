#include <iostream>

using namespace std;

double c;

void sum(double a, double b)
{
	c = a + b;
}

void subtraction(double a, double b)
{
	c = a - b;
}

void multiplication(double a, double b)
{
	c = a * b;

}

void division(double a, double b)
{
	c = a / b;
}

int main() {
	double x, y;
	int i;
	
	cout << "1. Addition" << endl;
	cout << "2. Difference" << endl;
	cout << "3. Product" << endl;
	cout << "4. Quotient" << endl;
	cout << "Select a mathematical operator: ";
	cin >> i;
	cout << "Enter two values: ";
	cin >> x;
	cout << "Enter one more: ";
	cin >> y;

	switch (i) {
	case 1:
		sum(x, y);
		cout << "The sum is: " << c << endl;
		break;
	case 2:
		subtraction(x, y);
		cout << "The difference is: " << c << endl;
		break;
	case 3:
		multiplication(x, y);
		cout << "The product is: " << c << endl;
		break;
	case 4:
		division(x, y);
		cout << "The quotient  is: " << c << endl;
		break;
	default:
		break;
	}

}