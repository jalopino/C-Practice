#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <Windows.h>

using namespace std;

//Added ctime and cstdlib library for random generated numbers.

//Variable Declarations
bool game;
int answer;
bool correct;
bool wrong;
int corAnswer;
int score = 0;
string reply;
string start;
string rank;
string name;
string grade;
int lives;

void instructions() {
	cout << "Read Instructions Below! :" << endl;
	Sleep(1000);
	cout << "Answer the following math problems!" << endl;
	Sleep(500);
	cout << "You will have three lives!" << endl;
	Sleep(500);
	cout << "For every correct answer 200 points will be given to you." << endl;
	Sleep(500);
	cout << "However if the answer is wrong 50 points will be deducted. Your life will also be deducted." << endl;
	Sleep(500);
	cout << "As levels progress, questions will be harder." << endl;
	Sleep(500);
	cout << "Have fun!" << endl;
	Sleep(500);

}

void restart() {
	while (true) {
		if (lives <= 0) {
			cout << "Do you want to play again? Y/N" << endl;
		}
		else {
			cout << "Continue to the next level? Y/N" << endl;
		}
		cin >> reply;
		if (reply == "y" || reply == "Y") {
			game = true;
			system("cls");
			break;
		}
		else if (reply == "n" || reply == "N") {
			game = false;
			break;
		}
		else {
			system("cls");
			cout << "Invalid Reply!" << endl;
		}
	}
}

void questions() {
	// To add another level *add another for loop
	// This is level 1 *a for loop with 5 questions..
	for (int i = 0; i < 5; i++) {
		cout << "Math Game!    ";
		cout << "Player :     " << name << endl;
		if (lives <= 0) {
			break;
			cout << "You ran out of lives!" << endl;
		}
		if (score > 0) {
			cout << "Score: " << score << endl;
			cout << "Lives Left: " << lives << endl;
		}
		cout << "Question Number " << i + 1 << endl;
		correct = false;
		//Random number generator
		int first = rand() % 100;
		int second = rand() % 100;
		int third = rand() % 100;
		while (true) {
			wrong = false;
			switch (i) {
			case 0:
				cout << first << " + " << second << " = " << " ? " << endl;
				corAnswer = first + second;
				cout << "Answer: ";
				cin >> answer;
				if (answer == corAnswer) {
					correct = true;
				}
				else {
					// Added this to prevent crashes from string inputs
					cin.clear();
					cin.ignore(10, '\n');
					system("cls");
					cout << "Wrong Answer!" << endl;
				}
				break;

			case 1:
				cout << first + 100 << " - " << second << " = " << " ? " << endl;
				corAnswer = (first + 100) - second;
				cout << "Answer: ";
				cin >> answer;
				if (answer == corAnswer) {
					correct = true;
				}
				else {
					cin.clear();
					cin.ignore(10, '\n');
					system("cls");
					cout << "Wrong Answer!" << endl;
				}
				break;
			case 2:
				cout << first << " x " << second << " = " << " ? " << endl;
				corAnswer = first * second;
				cout << "Answer: ";
				cin >> answer;
				if (answer == corAnswer) {
					correct = true;
				}
				else {
					cin.clear();
					cin.ignore(10, '\n');
					system("cls");
					cout << "Wrong Answer!" << endl;
				}
				break;
			case 3:
				cout << first * 2 << " / " << 2 << " = " << " ? " << endl;
				corAnswer = (first * 2) / 2;
				cout << "Answer: ";
				cin >> answer;
				if (answer == corAnswer) {
					correct = true;
				}
				else {
					cin.clear();
					cin.ignore(10, '\n');
					system("cls");
					cout << "Wrong Answer!" << endl;
				}
				break;
			case 4:
				cout << first << " + " << second << " x " << third << " = " << " ? " << endl;
				corAnswer = first + second * third;
				cout << "Answer: ";
				cin >> answer;
				if (answer == corAnswer) {
					correct = true;
				}
				else {
					cin.clear();
					cin.ignore(10, '\n');
					system("cls");
					cout << "Wrong Answer!" << endl;
				}
				break;
			}

			if (correct) {
				//Scoring system changed 100 to 200
				score = score + 200;
				system("cls");
				cout << "Correct Answer" << endl;
				break;
			}
			else if (!correct && (score > 0)) {
				score = score - 50;
				cout << "Score: " << score << endl;
				lives = lives - 1;
				cout << "Lives Left: " << lives << endl;
				if (lives <= 0) {
					break;
				}
			}
		}
	}

	//Ranking function 
	string rank;
	if (score >= 500 && score < 1000) {
		rank = "Amateur";
	}
	else if (score >= 1000 && score < 1500) {
		rank = "Qualified";
	}
	else if (score >= 1500 && score < 2000) {
		rank = "Adept";
	}
	else if (score >= 2000 && score < 2500) {
		rank = "Experienced";
	}
	else if (score >= 2500 && score < 3000) {
		rank = "Impressive";
	}
	else if (score >= 3000 && score < 3500) {
		rank = "Pro";
	}
	else if (score >= 3500 && score < 4000) {
		rank = "Master";
	}
	else if (score >= 4500) {
		rank = "Legendary";
	}
	else
		rank = "Noob";
	// Add more rankings
	system("cls");
	if (lives <= 0) {
		cout << "You Lost! Better Luck Next Time!" << endl;
	}
	else {
		cout << "Congratulations You Won!" << endl;
	}
	cout << "Total Score: " << score << endl;
	cout << "Your Rank is: " << rank << endl;
	cout << " "<< endl;
	cout << " " << endl;
	cout << "Rank from Highest to lowest: "<< endl << "Legendary" << endl << "Master" << endl << "Pro" << endl << "Impressive" << endl << "Experienced" << endl << "Adept" << endl << "Qualified" << endl << "Amateur" << endl << "Noob" << endl;
}

int main() {
	system("color 0A");
	cout << "Enter Player Name : ";
	cin >> name;
	cout << "Enter Year Level: ";
	cin >> grade;
	system("cls");
	instructions();
	while (true) {
		cout << "Start Game? Y for YES / N for NO" << endl;
		cin >> start; {

			if (start == "y" || start == "Y") {
				system("cls");
				break;
			}
			else if (start == "n" || start == "N") {
				return 0;
			}
			else {
				system("cls");
				cout << "Invalid Reply!" << endl;
			}
		}
	}
	while (true) {
		//random seed generator
		srand((unsigned)time(0));
		game = true;
		lives = 3;
		// Questions and Scoring
		questions();
		//Restart Option
		restart();

		if (game == false) {
			break;
		}
	}
	return 0;
}































