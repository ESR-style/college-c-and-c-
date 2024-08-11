#include<iostream>
using namespace std;
int max(int  a, int b);
int min(int a , int b);
int main()
{
   int a,b;
   cout << "Enter two numbers"<<endl;
   cin>>a>>b;
   cout<<"Maximum: "<<max(a,b)<<endl;
   cout<<"Minimum: "<<min(a,b)<<endl;
   return 0;
}
int max(int  a, int b)
{
    return  (a > b)? a : b ;
}
int min(int a , int b )
{
    return   (a < b) ? a:b;
}
