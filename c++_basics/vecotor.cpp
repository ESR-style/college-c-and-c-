#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <int> v {1,2,3};
    cout<<v.at(0)<<endl;
    v.resize(5);
    cout<<"new value"<<endl;
    cin>>v.at(4);
    cout<<"size of vector is"<<v.size()<<endl;
    
    int score {0};
    cout<<"Enter the new score"<<endl;
    cin>>score;
    v.push_back(score);
    cout<<v.at(5)<<endl;
    cout<<v.at(4)<<endl;
    return 0;
    
}