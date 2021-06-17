#include <iostream>
#include <string>

using namespace std;


/*
int main() {
	cout << "Find power of any number using for loop" << endl;
	cout << "---------------------------------------" << endl;
	int base, exponent, power = 1;
	cout << "Input base: ";
	cin >> base;
	cout << "Input exponent: ";
	cin >> exponent;
	for (int i = 1; i <= exponent; i++) {
		power = power * base;
	}
	cout << base << " ^ " << exponent << " = " << power << endl;
	system("pause");
	return 0;
}
*/



/*
int main() {
	cout << "Display n terms of even natural number and their sum" << endl;
	cout << "----------------------------------------------------" << endl;
	int n, z = 0, s = 0;
	cout << "Enter number of terms: ";
	cin >> n;
	cout << "The even numbers are: " << endl;
		for (int i = 1; i <= n; i++) {
			z = z + 2;
			s = z + s;
			cout << z << endl;
		}
	cout << "The sum of the even numbers are: " << s << endl;
	system("pause");
	return 0;
}
*/



/*
int main() {
	cout << "Find the sum of first and last digit of a number" << endl;
	cout << "------------------------------------------------" << endl;
	string number;
	string convertf;
	string convertl;
	int first, last;
	cout << "Input any number: ";
		cin >> number;
		int i = number.size() - 1;
		int l = number.size() - number.size();
		cout << "The first digit of " << number << " is: " << number[l] << endl;
		cout << "The last digit of " << number << " is: " << number[i] << endl;
		convertf.push_back(number[l]);
		first = stoi(convertf);
		convertl.push_back(number[i]);
		last = stoi(convertl);

		cout << "The sum of the first and the last digit of " << number << " is: " << first + last << endl;
		system("pause");
		return 0;
}
*/


/*
int main() {
	cout << "Display the pattern like a diamond" << endl;
	cout << "----------------------------------" << endl;
	string d = "*";
	string f = "*";
	string e = "";
	string k = " ";
	int a, b = 1;
	cout << "Input number of rows: ";
	cin >> a;
	for (int c = 1; c <= a; c++) {
		e += k;
	}
	d = e + d;
	for (int i = 1; i <= a; i++) {
		cout << d << endl;
		d.erase(d.begin());
		d += (f + f);
	}
	for (int i = 1; i <= a-1; i++) {
		k += (f + f);
		k.replace(1, 1, " ");
	}
	int c = k.size();
	for (int i = 1; i <= a - 1; i++) {
		k.replace(i, 1, " ");
		cout << k << endl;
		c = c - 1;
		k.replace(c, 1, " ");
	}
	system("pause");
	return 0;
}
*/


int main() {
	int n;
	int number;
	string numbers;
	string num;
	cout << "Print a number in words: " << endl;
	cin >> numbers;
	n = numbers.size();
	for (int i = 0; i < n; i++) {
		num = numbers[i];
		number = stoi(num);
		switch (number) {
		case 0:
			cout << "Zero ";
			break;
		case 1:
			cout << "One ";
			break;
		case 2:
			cout << "Two ";
			break;
		case 3 :
			cout << "Three ";
			break;
		case 4:
			cout << "Four ";
			break;
		case 5:
			cout << "Five ";
			break;
		case 6:
			cout << "Six ";
			break;
		case 7:
			cout << "Seven ";
			break;
		case 8:
			cout << "Eight ";
			break;
		case 9:
			cout << "Nine ";
			break;
		}
	}
	cout << endl;
	system("pause");
	return 0;
}

