#include <iostream>
#include <string>


using namespace std;

int main()
{
	string name;
	string subject;
	cout << "National High School Grading System" << endl;
	cout << "Enter Student Name: ";
	cin >> name;
	cout << "Enter Subject Name: ";
	cin >> subject;
	// Quiz
	double rawScore, totalItem, quizPercent;
	cout << "Quiz" << endl;
	cout << "Enter raw score: ";
	cin >> rawScore;
	cout << "Enter total item: ";
	cin >> totalItem;
	cout << "Quiz Equivalent: " << rawScore << "/" << totalItem << endl;
	double quizEquivalent = (rawScore / totalItem) * 100;
	cout << "Enter quiz percent: ";
	cin >> quizPercent;
	cout << "Quiz ans: " << quizEquivalent * (quizPercent / 100) << endl;
	cout << "------------------------------------" << endl;
	// Assignment
	cout << "Assignment" << endl;
	double equivalent, percentage;
	cout << "Enter assignment equivalent (E.G. Enter the equivalent of 75/75 which is 100): ";
	cin >> equivalent;
	cout << "Enter assignment percentage: ";
	cin >> percentage;
	cout << "Assignment Ans: " << equivalent * (percentage / 100) << endl;
	cout << "------------------------------------" << endl;
	// Exam
	double rawscoreexam, totalitemexam, examequivalent, exampercent;
	cout << "Exam" << endl;
	cout << "Enter rawscore: ";
	cin >> rawscoreexam;
	cout << "Enter total item: ";
	cin >> totalitemexam;
	cout << "Exam equivalent: " << rawscoreexam << "/" << totalitemexam << endl;
	examequivalent = (rawscoreexam / totalitemexam) * 100;
	cout << "Enter exam percentage: ";
	cin >> exampercent;
	cout << "Exam Ans: " << examequivalent * (exampercent / 100) << endl;;
	cout << "------------------------------------" << endl;
	cout << "Name: " << name << " " << "Subject: " << subject << endl;
	// Final Grade
	int finalGrade = (quizEquivalent * (quizPercent / 100)) + (equivalent * (percentage / 100)) + (examequivalent * (exampercent / 100));
	cout << "Final grade: " << finalGrade << endl;
	// Remark System
	if (finalGrade >= 100) {
		cout << "Overflow" << endl;
	}
	else if ((finalGrade >= 95) && (finalGrade <= 100)) {
		cout << "Remark: Excellent" << endl;
	}
	else if ((finalGrade >= 90) && (finalGrade <= 94)) {
		cout << "Remark: Very Good" << endl;
	}
	else if ((finalGrade >= 85) && (finalGrade <= 89)) {
		cout << "Remark: Good" << endl;
	}
	else if ((finalGrade >= 80) && (finalGrade <= 84)) {
		cout << "Remark: Satisfactory" << endl;
	}
	else if ((finalGrade >= 75) && (finalGrade <= 89)) {
		cout << "Remark: Needs Improvement" << endl;
	}
	else if ((finalGrade >= 60) && (finalGrade <= 74)) {
		cout << "Remark: Failed" << endl;
	}
	else if (finalGrade <= 59) {
		cout << "Not a valid grade" << endl;
	}
	else
		cout << "No remarks" << endl;

	system("pause");
	return 0;
}