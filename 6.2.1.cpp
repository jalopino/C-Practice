#include <iostream>

using namespace std;

int b;

int main()
{
	int a;
	while (b < 10) {
		a = 1 + b;
		b = a;
		cout << b << endl;
	}
	system("pause");
}