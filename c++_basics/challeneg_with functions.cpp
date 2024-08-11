#include<iostream>
#include<vector>
using namespace std;
void display_menu();
void print_elements(const vector<int>& v);
char get_selection();
void mean(vector<int> &v);
void smallest(vector<int>& v);
void largest(vector<int>& v);
void add_element(vector<int> &v);
void quit();
void display_list(vector <int> &v);
double calculate_mean(const vector<int>& v) ;

int main()
{
   vector <int> v;
   char selection {};
   do
   {
    display_menu();
    selection=get_selection();
    switch (selection){
        case 'P':
            print_elements(v);
            break;
        case 'A':
            add_element(v);
            break;
        case 'M':
            mean(v);
            break;
        case 'S':
            smallest(v);
            break;
        case 'L':
            largest(v);
            break;
        case 'Q':
            quit();
            break;
       default: 
           cout<<"Invalid selection"<<endl;
                
                
    }
    
   }while(selection!='Q');
   


    return 0;
}
void display_menu()
{
    cout<<"P-print numbers"<<endl;
    cout<<"A-add numbers"<<endl;
    cout<<"M-display mean of numbers"<<endl;
    cout<<"S- display smallest of the numbers"<<endl;
    cout<<"L-display largest number"<<endl;
    cout<<"Q-quit"<<endl;
}
void print_elements(vector<int> &v)
{
    if(v.size()==0)
        cout<<"The list is empty."<<endl;
    else
      display_list(v);
    
}
char get_selection()
{
    char selection;
    cin>>selection;
    return toupper(selection);
}
void display_list(vector <int> &v)
{
    cout<<"[";
    for(auto i:v)
      cout<<i<<" ";
      cout<<"]";
    cout<<endl;
}
void add_element(vector<int> &v)
{
    int  num;
    cout<<"Enter the element to add: "<<endl;
    cin>>num;
    v.push_back(num);
    cout<<num<<" was added"<<endl;
}
void mean(const vector<int> &v)
{ 
    if(v.size()==0)
       cout<<"List is empty";
    else
       cout<<"Mean is "<<calculate_mean(v)<<endl;
}
double calculate_mean(const vector<int>& v) 
{
    int total{};
    for(auto i:v)
      total+=i;
    return static_cast<double>(total)/v.size();
}
void largest(vector<int>& v)
{
    if(v.size()==0)
       cout<<"List is empty";

}