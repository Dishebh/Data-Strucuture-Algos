#include <bits/stdc++.h>
using namespace std;

struct Student
{
	int rollNo;
	string Branch;
};

int main ()
{

	Student Naveen;

	cin >> Naveen.rollNo;
	cin >> Naveen.Branch;

	cout << Naveen.rollNo << " " << Naveen.Branch;
 
	return 0;
}