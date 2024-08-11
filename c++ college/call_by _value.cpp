#include<iostream>
using namespace std;
void swap(int a,int b)
{
    int t=a;
    a=b;
    b=t;
}
int main()
{
   int a=10,b=20;
   cout<<"values before swap a= "<<a<<"b= "<<b<<endl;
   swap(a,b);
   cout<<"values after function call  a= "<<a<<"b= "<<b<<endl;
   return 0;
}