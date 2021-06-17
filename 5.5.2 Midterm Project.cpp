#include <iostream>
#include <string>
#include <conio.h>
#include <windows.h>


using namespace std;

int main() {
	string user;
	string pass;
	cout << "YeheeY Chat System" << endl;
	cout << "------------------" << endl;
	cout << "Version# 1" << endl;
	cout << "Username: ";
	getline(cin, user);
	cout << "Password: ";
	getline(cin, pass);
	while (pass != "Jalopino") {
		cout << "Wrong password! Enter Again: ";
		getline(cin, pass);
	}
	cout << "Loading";
	Sleep(1000);
	cout << "...";
	Sleep(1000);
	cout << "..." << endl;
	cout << "Welcome " << user << endl;
	cout << "Users online:		Users Offline:" << endl;
	cout << "A.) Ben		" << "	1.) Perla" << endl;
	cout << "B.) Geli		" << "2.) Rey" << endl;
	string chatmate;
	cout << "Please Select Your Chat Mate: ";
	cin >> chatmate;
	while (chatmate == "1" || chatmate == "2") {
		cout << "Sorry this user is not online as of the moment" << endl;
		char decide;
		cout << "Do you want to chat someone else? y/n: ";
		cin >> decide;
		if (decide == 'Y' || decide == 'y') {
			cout << "Please Select Your Chat Mate: ";
			cin >> chatmate;
		}
		else if (decide == 'n' || decide == 'N') {
			cout << "shutting down" << endl;
		} 
	}
	if (chatmate == "A" || chatmate == "a") {
		cout << "Anna: Care to chat" << endl;
		Sleep(500);
		cout << "Anna: Are you single?" << endl;
		Sleep(500);
		cout << "Ben: No I have a GF" << endl;
		Sleep(500);
		cout << "Anna: I dont care" << endl;
		Sleep(500);
		cout << "Ben: What topic would you like us to talk to?";
		int topic;
		Sleep(500);
		cout << "Topics: " << endl;
			cout << "1.) Global Warming" << endl;
			cout << "2.) Horror" << endl;
			cout << "3.) My personal background" << endl;
			cout << "Please select Anna: ";
			cin >> topic;
		switch (topic) {
		case 1:
			break;
		case 2:
			break;
		case 3:
			cout << "Anna: How old are you?" << endl;
			Sleep(500);
			cout << "Ben: 100" << endl;
			Sleep(500);
			cout << "Anna: Ohh!!! Ohh, How come you are still alive?" << endl;
			Sleep(500);
			cout << "Anna: Where do you live?" << endl;
			Sleep(500);
			cout << "Ben: Talisay" << endl;
			Sleep(500);
			cout << "Anna: was was bugsay talisay" << endl;
		}
	}
	system("pause");
	return 0;
}

