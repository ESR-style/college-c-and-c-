#include<iostream>
using namespace std;
int main()
{
   int n;
   cout<<"Enter the number of elements: "<<endl;
   cin>>n;
   int a[n];
   int sum=0;
   for(int i=0;i<n;i++)
   {
     cout<<"Enter number "<<i+1<<":"<<endl;
     cin>>a[i];
     sum+=a[i];
   }
   cout<<"Sum of numbers is : "<<sum<<endl;



    return 0;
}