#include <iostream>

using namespace std; 

/*
int a;

int main() {
	int b = 1;
	cout << "Find the first 10 natural numbers" << endl;
	cout << "---------------------------------" << endl;
	cout << "The natural numbers are: " << endl;
	while (true) {
		a += b;
		cout << a << endl;
		if (a >= 10) {
			break;
		}
	}
	system("pause");
	return 0;
}
*/

/*
int a, z;

int main() {
	int b = 1;
	cout << "Find the first 10 natural numbers" << endl;
	cout << "---------------------------------" << endl;
	cout << "The natural numbers are: " << endl;
	while (true) {
		a += b;
		z += a;
		cout << a << endl;
		if (a >= 10) {
			break;
		}
	}
	cout <<"The sum of the first 10 natural numbers: " << z << endl;
	system("pause");
	return 0;
}
*/



int main() {
	string numbers;
	string reverse = "";
	cout << "Display the number in reverse order:" << endl;
	cout << "------------------------------------" << endl;
	cout << "Input a number: " << endl;
	cin >> numbers;
	for (int i = numbers.size() - 1; i >= 0; i--) {
		reverse += numbers[i];
	}
	cout << reverse << endl;
	system("pause");
	return 0;
}


/*
int main() {
	int i = 3;
	string numbers = "12345";
	string reverse = "";
	cout << numbers[i] << endl;
}
*/

/*
#include <iostream>
using namespace std;
int main()
{
	int bs, ex, num = 1, i;
	cout << "\n\n Find power of any number using for loop:\n";
	cout << "---------------------------------------------\n";
	cout << " Input the base: ";
	cin >> bs;
	cout << " Input the exponent: ";
	cin >> ex;

	for (i = 1; i <= ex; i++)
	{
		num = num * bs;
	}
	cout << bs << " ^ " << ex << " = " << num << endl;
}
*/