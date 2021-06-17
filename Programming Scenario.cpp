#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>


using namespace std;

//Added ctime and cstdlib library for random generated numbers.

//Variable Declarations
bool game;
int answer;
bool correct;
int corAnswer;
int score = 0;
string reply;
string start;
string name;

void registration() {
	while (true) {
		cout << "Start Game? y/n: ";
		cin >> start;
		if (start == "y") {
			system("cls");
			game = true;
			break;
		}
		else if (start == "n") {
			game = false;
			break;
		}
		else {
			system("cls");
			cout << "Invalid Reply!" << endl;
		}
	}
	if (game) {
		cout << "Input player name: ";
		cin >> name;
		system("cls");
		cout << "Welcome " << name << endl;
	}
	else
		cout << "Shutting Down!";
}

void restart() {
	while (true) {
		cout << "Do you want to play again? y/n" << endl;
		cin >> reply;
		if (reply == "y") {
			game = true;
			system("cls");
			break;
		}
		else if (reply == "n") {
			game = false;
			break;
		}
		else {
			system("cls");
			cout << "Invalid Reply!" << endl;
		}
	}
}

void instructions() {
	cout << "Answer the following math problems!" << endl;
	cout << "For every correct answer 100 points will be given to you." << endl;
	cout << "However if the answer is wrong 50 points will be deducted." << endl;
	cout << "As levels progress, questions will be harder." << endl;
	cout << "Have fun!" << endl;
	system("pause");
	system("cls");
}

// To add another level *copy and paste this function
// This is level 1 *a for loop with 5 questions..
void level1() {
	for (int i = 0; i < 5; i++) {
		if (score > 0) {
			cout << "Score: " << score << endl;
		}
		cout << "Level 1" << endl;
		cout << "Question Number " << i + 1 << endl;
		correct = false;
		//Random number generator
		int first = rand() % 100 + 1;
		int second = rand() % 100 + 1;
		int third = rand() % 100 + 1;
		while (true) {
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
					cin.clear(); // Added this to prevent crashes from string inputs
					cin.ignore(10, '\n'); //----------------------------------------
					system("cls");
					cout << "Wrong Answer!" << endl;
					cout << "Question Number " << i + 1 << endl;
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
					cout << "Question Number " << i + 1 << endl;
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
					cout << "Question Number " << i + 1 << endl;
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
					cout << "Question Number " << i + 1 << endl;
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
					cout << "Question Number " << i + 1 << endl;
				}
				break;
			}

			if (correct) {
				//Scoring system
				score = score + 100;
				system("cls");
				cout << "Correct Answer" << endl;
				break;
			}
			else if (!correct && (score > 0)) {
				score = score - 50;
				cout << "Score: " << score << endl;
			}
		}
	}
}

void level2() {
	for (int i = 0; i < 5; i++) {
		if (score > 0) {
			cout << "Score: " << score << endl;
		}
		cout << "Level 2" << endl;
		cout << "Question Number " << i + 1 << endl;
		correct = false;
		//Random number generator
		int first = rand() % 200 + 100;
		int second = rand() % 200 + 100;
		int third = rand() % 200 + 100;
		while (true) {
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
					cin.clear(); // Added this to prevent crashes from string inputs
					cin.ignore(10, '\n'); //----------------------------------------
					system("cls");
					cout << "Wrong Answer!" << endl;
					cout << "Question Number " << i + 1 << endl;
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
					cout << "Question Number " << i + 1 << endl;
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
					cout << "Question Number " << i + 1 << endl;
				}
				break;
			case 3:
				cout << first * 4 << " / " << 4 << " = " << " ? " << endl;
				corAnswer = (first * 4) / 4;
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
					cout << "Question Number " << i + 1 << endl;
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
					cout << "Question Number " << i + 1 << endl;
				}
				break;
			}

			if (correct) {
				//Scoring system
				score = score + 100;
				system("cls");
				cout << "Correct Answer" << endl;
				break;
			}
			else if (!correct && (score > 0)) {
				score = score - 50;
				cout << "Score: " << score << endl;
			}
		}
	}
}

void questions() {
	level1();
	level2();

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
	else if (score >= 3000 && score < 3500) {
		rank = "Impressive";
	}
	else
		rank = "Noob";
	//--------------------------

	system("cls");
	cout << "Congratulations "<< name << " You Won!" << endl;
	cout << "Total Score: " << score << endl;
	cout << "Your Rank is: " << rank << endl;
}

//Main function of the game
int main() {

	registration();
	if (game == false) 
		return 0;
	instructions();
	//Body (Main Loop Of The Game)
	while (true) {

		srand((unsigned)time(0)); //random seed generator
		cout << "Math Game!" << endl;
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