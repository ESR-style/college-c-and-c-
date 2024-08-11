#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Player{
    //Attributes
  public:  
    string name;
    int health;
    int xp;


    //Methods;
    void talk(string say_something){cout<<name<<" says "<<say_something<<endl;}
    bool is_dead();

};
class Account
{
   //attributes
  public: 
   string name;
   double balance;


   //methods 
   bool deposit(double bal) {
    balance += bal;
    cout << "Deposited " << bal << endl;
    return true;
  };
   bool withdraw(double bal) {balance -= bal;cout<<"withdrawn "<<bal<<endl;return true;}


};
int main()
{
    Player style;
    Player lucky;

    Account style_account;
    style_account.balance = 1000;
    style_account.name="Style";

    style_account.deposit(1000);
    cout<<"Style account balance is: "<<style_account.balance<<endl;
    style_account.withdraw(500);
    cout<<"Style account balance is: "<<style_account.balance<<endl;

    
    

    //for style
    style.name = "Style";
    style.health = 100;
    style.xp =20;

    style.talk("Hello there!");
    



    

    Player *enemy{nullptr};
    enemy = new Player;

    enemy->health=100;
    enemy->name="Boss";
    enemy->xp=500;

    enemy->talk("I will kill you and send you to hell\n");


    delete enemy;

    return 0;
}