//Constructor is a member function of a class, whose name is the same as the class name.
//It is used to initialize objects of its class.
//Constructor is invoked at the time of object creation. 
//It constructs the values provides data for the object that is why it is known as a constructor
//A constructor gets called automatically when we create the object of the class.
//Constructors can be overloaded.
// defining the constructor within the class
#include <iostream>
using namespace std;
class student {
	int rollno;
	string name;
	

public:
	// constructor
	student()
	{
		cout << "Enter the RollNo:";
		cin >> rollno;
		cout << "Enter the Name:";
		cin >> name;

	}

	void display()
	{
		cout << endl << rollno << "\t" << name ;
	}
};

int main()
{
	student s; // constructor gets called automatically when
			// we create the object of the class
	s.display();
	return 0;
}
