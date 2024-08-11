#include<iostream>
using namespace std;
class mean
{
    private:
        float a,b,c;
    public:
        mean(float x,float y,float z):a{x},b{y},c{z}{}
        friend float calculate(mean d);
};
float calculate(mean d){
    return (d.a+d.b+d.c)/3;
}
int main()
{
    mean data(23,54,11);
    cout<<"mean is: "<<calculate(data);
    return 0;
}