#include <iostream>
#include <fstream>
#include <vector>
#include <ctime>
#include <string>

using namespace std;

string name;

int main() {
	cout << "Enter Name plox: ";
	cin >> name; 
	srand(time(0));
	int randnumber = rand() % 100 + 1;
	int number;
	cout << "Welcome to Guessing Game" << endl;
	vector<int> Guess;
	cout << randnumber << endl;
	while (true) {
		cout << "Guess the number!" << endl;
		cin >> number;
		if (number > randnumber) {
			cout << "Lower!" << endl;
			Guess.push_back(number);
		}
		if (number < randnumber) {
			cout << "Higher!" << endl;
			Guess.push_back(number);
		}
		if (number == randnumber) {
			cout << "Correct Answer!" << endl;
			Guess.push_back(number);
			break;
		}
	}
	int score;
	int bestscore;
	string curbest;
	score = Guess.size();

	ifstream input("highscore.txt");
	input >> bestscore;

	if (score > bestscore) {
		getline(input, name);
		getline(input, name);
		cout << "Current Highscore: " << bestscore << " " << name << endl;
	}

	if (score <= bestscore) {
		ofstream clear("highscore.txt");
		clear << "";
		ofstream output("highscore.txt", ios::app);
		output << score << endl;
		output << name << endl;
		cout << "Current Highscore: " << score << " " << name << endl;
	} 

	system("pause");
	return 0;
}