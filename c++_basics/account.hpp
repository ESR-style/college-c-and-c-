#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_

#include <string>

class Account
{
private:
    // Attributes
    double balance;
    std::string name;

public:
    // Methods
    // To set the initial balance
    void set_balance(double bal) { balance = bal; }
    double get_balance() { return balance; }
    // For setting account name
    void set_name(std::string n);
    std::string get_name();
    // For deposit and withdraw
    bool deposit(double amount);
    bool withdraw(double amount);
};

// Defining the methods
void Account::set_name(std::string n)
{
    name = n;
}

std::string Account::get_name()
{
    return name;
}
bool Account::deposit(double amount)
{
    balance+=amount;
    return true;
}

bool Account::withdraw(double amount)
{
    if(amount > balance){return false;}
    else{balance-=amount; return true;}

}
#endif
