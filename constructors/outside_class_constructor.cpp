// defining the constructor outside the class
#include <iostream>
using namespace std;
class student {
	int rollno;
	string name;

public:
	// constructor declaration only
	student();
	void display();
};

// outside definition of constructor
student::student()
{
	cout << "Enter the RollNo:";
	cin >> rollno;
	cout << "Enter the Name:";
	cin >> name;
	
}

void student::display()
{
	cout << endl << rollno << "\t" << name ;
}

int main()
{
	student s;
	s.display();
	return 0;
}
