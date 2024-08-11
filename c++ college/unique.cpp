#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cout<<"Enter a number"<<endl;
    cin>>s;
    int count[10]={0},flag=1;
    for(size_t i=0;i<s.size();i++)
    {
        switch(s[i])
        {
            case '0':count[0]++;
            break;
            case '1':count[1]++;
            break;
            case '2':count[2]++;
            break;
            case '3':count[3]++;
            break;
            case '4':count[4]++;
            break;
            case '5':count[5]++;
            break;
            case '6':count[6]++;
            break;
            case '7':count[7]++;
            break;
            case '8':count[8]++;
            break;
            case '9':count[9]++;
            break;
            default:
            break;
        }
    }
    for(int i=0;i<10;i++)
    {
        if(count[i]>1)
        {
            flag=0;
            break;
        }
    }
    if(flag)
    {
        cout<<"Number is unique"<<endl;
    }
    else
    {
        cout<<"Number is not unique"<<endl;
    }
}