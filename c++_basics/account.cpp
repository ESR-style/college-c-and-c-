#include<iostream>
#include "account.hpp"
using namespace std;
int main()
{
   Account style_acc;
   style_acc.set_balance(100);
   cout<<"The initial balance is: "<<style_acc.get_balance()<<endl;
   style_acc.set_name("Style");
   cout<<"The account name is: "<<style_acc.get_name()<<endl;
   //Testing the deposit function
   cout<<"Enter the ammount to deposit "<<endl;
   int amt{0};
   cin>>amt;
   if(style_acc.deposit(amt))
   {
     cout<<amt<<" Was deposited"<<endl;
     cout<<"The balance is "<<style_acc.get_balance()<<endl;
   }
     cout<<"Enter the amount to withdraw "<<endl;
     cin>>amt;
   //testing witdraw function
   if(style_acc.withdraw(amt))
   {
     cout<<"The balance is "<<style_acc.get_balance()<<endl;
   }
   else
   {
      cout<<"Insufficient funds"<<endl;
   }

  return 0;

}

