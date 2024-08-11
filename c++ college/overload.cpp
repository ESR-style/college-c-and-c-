#include<iostream>
#include<string>
using namespace std;
class Mystring{
    private:
        string str;
    public:
        Mystring(string s):str{s}{}
        Mystring operator+(Mystring obj)
        {
            return Mystring(str+obj.str);
        }
        string display()
        {
            return str;
        }

};
int main()
{
    Mystring s1("Hello");
    Mystring s2(" World");
    Mystring s3=s1+s2;
    cout<<"Str3:"<<s3.display();
    return 0;
}