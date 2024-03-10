#include <iostream>
using namespace std;

int main()
{
	double math, eng, comp, phy,obt_marks, total_marks, avg_marks;
	int total_marks = 400;
	cout << "enter obtained marks of Math's: ";
	cin >> math;
	cout << "enter obtained marks of English: ";
	cin >> eng;
	cout << "enter obtained marks of Computer: ";
	cin >> comp;
	cout << "enter obtained marks of Physics: ";
	cin >> phy;
	
	obt_marks = math + eng + comp + phy;
	avg_marks = (obt_marks / total_marks) * 100;

	cout << "obtained marks: " << obt_marks << endl;
	cout << "total marks :" << total_marks << endl;
	cout << "average marks :" << avg_marks << endl;
	if (avg_marks >= 80)
	{
		cout << "grade A+" << endl;
	}
	else
	if (avg_marks >= 70 && avg_marks<=79)
	{
		cout << "grade A" << endl;
	}
	else
	if (avg_marks >= 60 && avg_marks <= 69)
	{
		cout << "grade B" << endl;
	}
	else
	if(avg_marks >= 50 && avg_marks <= 59)
	{
		cout << "grade C" << endl;
	}
	else
	if (avg_marks < 50)
	{
		cout << "fail!" << endl;
	}
	return 0;

}