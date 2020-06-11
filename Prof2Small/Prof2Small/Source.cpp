#include <iostream>
#include <iomanip>
#include <string>
//Sounds
#include <Windows.h>
#include <MMSystem.h>
//Randoms 
#include <random>
#include <cstdlib>
#include <ctime>
//Dynamic Arrays
#include <vector>
// Sleep Function
#include <time.h>
//Sorting Vectors
#include <algorithm> 

using namespace std;
int AvgHomework(vector<int>);
int main() {
	int Mid1 = 0, Mid2 = 0, Final = 0, TestScores = 0, Total = 0;
	string letterGrade = "";
	bool loop = true;
	vector<int> WorkScores;
	cout << "1st Midterm Score:  " << endl;
	cin >> Mid1;
	while (cin.fail())
	{
		cout << "Error: Data not readable. Try again." << endl;
		cin.clear();
		string garbage;
		cin >> garbage;
		cout << "1st Midterm Score:  " << endl;
		cin >> Mid1;
	}

	cout << "2nd Midterm Score:  " << endl;
	cin >> Mid2;
	while (cin.fail())
	{
		cout << "Error: Data not readable. Try again." << endl;
		cin.clear();
		string garbage;
		cin >> garbage;
		cout << "2nd Midterm Score:  " << endl;
		cin >> Mid2;
	}

	cout << "Finals Score:  " << endl;
	cin >> Final;
	while (cin.fail())
	{
		cout << "Error: Data not readable. Try again." << endl;
		cin.clear();
		string garbage;
		cin >> garbage;
		cout << "Finals Score:  " << endl;
		cin >> Final;
	}

	while (loop) {
		int HWscore;
		cout << "Enter in the score for the Homework Assignment." << endl;
		cin >> HWscore;
		while (cin.fail())
		{
			cout << "Error: Data not readable. Try again." << endl;
			cin.clear();
			string garbage;
			cin >> garbage;
		}
		WorkScores.push_back(HWscore);
		cout << "Type 'y' for another, and 'n' to quit." << endl;
		string another;
		cin >> another;
		if (another == "y") {}
		else
			loop = false;
	}

	cout << "Average Homework Score = " << AvgHomework(WorkScores) << endl;
	TestScores = (Mid1 + Mid2 + Final);

	cout << "Total Test Score = " << TestScores << endl;
	Total = TestScores + AvgHomework(WorkScores);

	cout << "Total Score = " << Total << endl;
	if (Total >= 381)
		letterGrade = "A";
	else if (Total >= 361)
		letterGrade = "A-";
	else if (Total >= 341)
		letterGrade = "B+";
	else if (Total >= 321)
		letterGrade = "B";
	else if (Total >= 301)
		letterGrade = "B-";
	else if (Total >= 281)
		letterGrade = "C+";
	else if (Total >= 261)
		letterGrade = "C";
	else if (Total >= 241)
		letterGrade = "C-";
	else if (Total >= 221)
		letterGrade = "D+";
	else if (Total >= 201)
		letterGrade = "D";
	else if (Total >= 181)
		letterGrade = "D-";
	else if (Total < 181)
		letterGrade = "F";
	cout << "Letter Grade: " << letterGrade << endl;
	
	system("PAUSE");
	return 0;
}

int AvgHomework(vector<int>Scores) {
	int TotalHomework = 0;
	for (int i = 0; i < Scores.size(); i++) {
		TotalHomework += Scores[i];
	}
	int HomeworkAvg = TotalHomework / Scores.size();
	return HomeworkAvg;
}
