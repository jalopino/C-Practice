#include <iostream> 

using namespace std;

int main()
{
	double a;
	cout << "Enter Grade: ";
	cin >> a;
	if (a >= 75)
	{
		cout << "You passed!" << endl;
	}
	else
		cout << "You failed!" << endl;
}