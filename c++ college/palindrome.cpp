#include<iostream>
using namespace std;
int main()
{
   int n,rem,rev=0;
   cout<<"Enter a number: "<<endl;
   cin>>n;
   int n1 = n;
   while(n != 0)
   {
      rem = n%10;
      rev = rev*10 + rem;
      n = n/10;
   }
   if(n1 == rev)
      cout<<"The given number is a palindrome number"<<endl;
   else
      cout<<"The given number is not a palindrome number"<<endl;

    return 0;
}