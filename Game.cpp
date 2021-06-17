#include <Windows.h>
#include <iostream>
#include <conio.h>

using namespace std;

//Variables
bool gameOver; 
const int width = 20;
const int height = 20;
int x, y, fruitx, fruity, score;
int tailx[100], taily[100];
enum Direction { STOP = 0 , LEFT, RIGHT, UP, DOWN};
Direction dir;

void setup() {
	gameOver = false;
	dir = STOP;
	x = width / 2;
	y = height / 2;
	fruitx = rand() % width;
	fruity = rand() % height;
	score = 0;
}

void logic() {
	int prevx = tailx[0];
	int prevy = taily[0];
	int prev2x, prev2y;
	tailx[0] = x;
	taily[0] = y;
	
	for (int i = 1; i < score; i++) {
		prev2x = tailx[i];
		prev2y = taily[i];
		tailx[i] = prevx;
		taily[i] = prevy;
		prevx = prev2x;
		prevy = prev2y;
	}

	switch (dir) {
	case LEFT:
		x--;
		break;
	case RIGHT:
		x++;
		break;
	case UP:
		y--;
		break;
	case DOWN:
		y++;
		break;
	default:
		break;
	}
}

void input() {
	if (_kbhit())
	{
		int input = _getch();
		switch (input) {
		case 'w':
			dir = UP;
			break;
		case 'a':
			dir = LEFT;
			break;
		case 's':
			dir = DOWN;
			break;
		case 'd':
			dir = RIGHT;
			break;
		case 'x':
			gameOver = true;
			break;
		default:
			break;
		}
	}
	if (x > 20 || x < 0 || y > 20 || y < 0)
		gameOver = true;
	for (int i = 0; i < score; i++) {
		if (tailx[i] == x && taily[i] == y)
			gameOver = true;
	}

	if (x == fruitx && y == fruity) {
		score++;
		fruitx = rand() % width;
		fruity = rand() % height;
	}
}

void draw() {
	system("cls");
	for (int i = 0; i < width + 2; i++) {
		cout << "#";
	}
	cout << endl;

	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width; j++) {
			if (j == 0) {
				cout << "#";
			}



			if (i == y && j == x) {
				cout << "O";
			}
			else if (i == fruity && j == fruitx)
				cout << "F";
			else {
				bool print = false;
				for (int k = 0; k < score; k++) {
					if (tailx[k] == j && taily[k] == i) {
						cout << "O";
						print = true;
					}
				}
				if (!print)
					cout << " ";
			}

			if (j == width - 1) {
				cout << "#";
			}
				
		}
		cout << endl;
	}

	for (int i = 0; i < width + 2; i++) {
		cout << "#";
	}
	cout << endl;
	cout << endl;

	cout << "Score: " << score * 10 << endl;
}


int main() {
	setup();
	while (!gameOver) {
		draw();
		input();
		logic();
	}
	system("cls");
	cout << "Game Over!" << endl;
	cout << "Try again? y/n" << endl;
	char input;
	while (gameOver) {
		cin >> input;
		if (input == 'y') {
			main();
			break;
		}
		if (input == 'n')
			return 0;
		else
			cout << "Wrong Input!" << endl;
	}
	system("pause");
	return 0;
}
 

