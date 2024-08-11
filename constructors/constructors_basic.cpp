//no argument constructor
#include<iostream>
#include<string>
using namespace std;
class Player
{
    private:
        string name;
        int level;
    public:
    //default constructor
        Player()
        {
            name="none";level=0;
        }
    //parameterized constructor
    //overloaded
        Player(string name_value)
        {
            name=name_value;
        }
    
        Player(string name_value,int level_value)
        {
            name=name_value;
            level=level_value;
        }
        void setname(string n){name=n;};
        string get_name(){return name;}
        int get_level(){return level;}
};
int main()
{
    Player p1("samson");
    Player p2;
    Player p3("samarth",54);
    // p1.setname("Samson");
    cout << "Player Name: " << p1.get_name() << endl;
    cout<< "Level: " <<p1.get_level() <<endl;
    cout<<"p3 level :"<<p3.get_level();
    cout<<"P3 name:"<<p3.get_name();

    return 0;
}