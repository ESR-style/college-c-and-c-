#include<iostream>
#include<vector>
using namespace std;
int main()
{
     vector <int> numbers{};
     char selection{};
     do
     {
        cout<<"P-print numbers"<<endl;
        cout<<"A-add numbers"<<endl;
        cout<<"M-display mean of numbers"<<endl;
        cout<<"S- display smallest of the numbers"<<endl;
        cout<<"L-display largest number"<<endl;
        cout<<"Q-quit"<<endl;
        cin>>selection;


        if(selection=='P'||selection=='p')
        {
            if(numbers.size()==0)
            {
                cout<<"list is empty"<<endl;
            }
            else
            {
                cout<<"[";

                for(auto num:numbers)
                cout<<num<<" ";
 
                cout<<"]"<<endl;
            }
        }
        else if(selection=='a'||selection=='A')
        {
            int num_to_add{};
            cout<<"Enter the element to add"<<endl;
            cin>>num_to_add;
            numbers.push_back(num_to_add);
            cout<<num_to_add<<" was added"<<endl;
        }
        else if(selection=='m'||selection=='M')
        {
            float mean{};
            for(auto num:numbers)
            {
                mean=mean+num;
            }
            cout<<"MEAN: "<<mean/numbers.size()<<endl;
        }
     }while(selection!= 'q' && selection != 'Q');







    return 0;
}
