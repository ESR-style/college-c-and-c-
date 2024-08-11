#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of elements"<<endl;
    cin>>n;
    int arr[n],sum=0;
    cout<<"Enter elements into the array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    float average=static_cast<double>(sum)/n;
    cout<<"average: "<<average<<endl;
    return 0;
}