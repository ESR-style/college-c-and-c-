#include<iostream>
using namespace std;
int main()
{ 
   int range,even=0,odd=0;
   cout<<"Enter the range"<<endl;
   cin>>range;
   for(int i{0};i<range;i++)
   {
    if(i%2==0)
       even+=i;
    else
       odd+=i;
   }
    cout<<"Sum of even: "<<even<<endl;
    cout<<"Sum of odd : "<<odd<<endl;
    return 0;
}