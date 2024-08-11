#include<iostream>
using namespace std;
class Student
{
  private:
    string name;
    int rollNo;
  public:
     Student(string n,int r):name{n},rollNo{r} {} 
     void getData(){
        cout<<"Name: "<<name<<endl;
        cout<<"Roll Number: "<<rollNo<<endl;
     }
};
int main()
{
    Student s1{"Samarth",54};
    s1.getData();
    return 0;
}