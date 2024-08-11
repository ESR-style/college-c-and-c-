#include<iostream>
using namespace std;
int main()
{
    int neumerator,denominator;
    cout<<"Enter neumerator and denominator"<<endl;
    cin>>neumerator>>denominator;
    try{
        if(denominator==0)
        {
            throw "Erorr by division by 0";
        }
        int result=neumerator/denominator;
        cout<<"Result: "<<result;
    }
    catch(const char *msg)
    {
        cerr<<"Error: "<<msg;
    }
    return 0;
}