//A copy constructor is a member function that initializes an object using another object of the same class.

#include <iostream>
#include <string.h>
using namespace std;

class student {
	int rollno;
	string name;
	

public:
	student(int, string);
	student(student& t) // copy constructor
	{
		rollno = t.rollno;
		name = t.name;
	}

	void display();
};

student::student(int no, string n)
{
	rollno = no;
	name = n;
}

void student::display()
{
	cout << endl << rollno << "\t" << name;;
}

int main()
{
	student s(40, "samson");
	s.display();

	student s2(s); // copy constructor called
	s2.display();

	return 0;
}
