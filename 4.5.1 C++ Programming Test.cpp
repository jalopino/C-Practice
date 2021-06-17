//MACHINE PROBLEM #1

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string item = "Duckey Goes to Mars";
	string input;
	int adultsold, childsold, donationpercentage;
	double adultprice, childprice, netsale;
	cout << "Enter movie name: ";
	getline(cin, input);
	if (input == item) {
		cout << "Price of adult tickets: ";
		cin >> adultprice;
		cout << "Price of child tickets: ";
		cin >> childprice;
		cout << "Enter amount of adult tickets sold: ";
		cin >> adultsold;
		cout << "Enter amount of child tickets sold: ";
		cin >> childsold;
		cout << "Percentage of gross amount donation: ";
		cin >> donationpercentage;
		cout << "Movie name: " << item << endl;
		cout << "Number of tickets sold: " << adultsold + childsold << endl;
		cout << "Gross amount: " << (adultprice * adultsold) + (childprice * childsold) << endl;
		cout << "Percentage of gross donation: " << donationpercentage << "%" << endl;
		cout << "Amount donated: " << (donationpercentage * 0.01) * ((adultprice * adultsold) + (childprice * childsold)) << endl;
		cout << "Net sale: " << (adultprice * adultsold) + (childprice * childsold) - ((donationpercentage * 0.01) * ((adultprice * adultsold) + (childprice * childsold))) << endl;
	}
	else cout << "Unavailable movie.";
	system("pause");
}

//MACHINE PROBLEM #2
#include <iostream>

using namespace std;

int main()
{
	int hoursworked, tax;
	double hourlypay, grosspay, netpay;
	cout << "Enter hourly pay rate: ";
	cin >> hourlypay;
	cout << "Enter hours worked: ";
	cin >> hoursworked;
	grosspay = hourlypay * hoursworked;
	cout << "Enter percentage of tax: ";
	cin >> tax;
	netpay = grosspay * (tax * 0.01);
	cout << "Your net pay is: " << netpay << endl;
	system("pause");
}

//MACHINE PROBLEM #3
#include <iostream>

using namespace std;

int main() {
	double a, b;
	cout << "Enter value 1: ";
	cin >> a;
	cout << "Enter value 2: ";
	cin >> b;
	cout << "The sum of the two numbers is: " << a + b << endl;
	cout << "The difference of the two numbers is: " << a - b << endl;
	cout << "The product of the two numbers is: " << a * b << endl;
	cout << "The quotient of the two numbers is: " << a / b << endl;
	system("pause");
}

//MACHINE PROBLEM #4

#include <iostream>

using namespace std;

int main() {
	double prelim, midterm, endterm;
	double prelimpercent = 0.30, midtermpercent = 0.30, endtermpercent = 0.40;
	cout << "Enter prelim grade: ";
	cin >> prelim;
	cout << "Enter midterm grade: ";
	cin >> midterm;
	cout << "Enter endterm grade: ";
	cin >> endterm;
	cout << "The final average is: " << (prelim * prelimpercent) + (midterm * midtermpercent) + (endterm * endtermpercent) << endl;
	system("pause");
}




//MACHINE PROBLEM # 5

#include <iostream>

using namespace std;

int main() {
	double celsius, farenheit;
	cout << "Enter celsius: ";
	cin >> celsius;
	farenheit = (celsius * 1.8) + 32;
	cout << "The equivalent of celsius to farenheit: " << farenheit << endl;
	system("pause");
}

//MACHINE PROBLEM #6
#include <iostream>
# define M_PI           3.14159265358979323846  /* pi */

using namespace std;

int main() {
	double radius;
	cout << "Enter radius: ";
	cin >> radius;
	cout << "the equivalent to diameter is: " << radius * 2 << endl;
	cout << "the equivalent to circumference is: " << (radius * 2) * M_PI << endl;
	system("pause");

}



