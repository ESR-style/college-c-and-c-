#include<iostream>
using namespace std;
class MyClass
{
    private:
        static int count;
    public:
        MyClass(){count++;}
        static int getcount(){return count;}

};
int MyClass::count=0;
int main()
{
    MyClass obj1,obj2,obj3;
    cout<<"Objects created : "<<MyClass::getcount()<<endl; 
    return 0;
}