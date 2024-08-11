#include<iostream>
using namespace std;
int main()
{
   int a,i=1;
   cout<<"Enter the range: "<<endl;
   cin>>a;
   do
   {
     if(i%2==0)
       cout<<i<<" "<<endl;
     i++;
   } while (i<a);
   

    return 0;
}