#include<stdio.h>
void swap(int *x,int *y)
{
    int t;
    t=*x;
    *x=*y;
    *y=t;
}
int main()
{
    int a=10,b=20;
    printf("Values before swap a=%d\tb=%d\n",a,b);
    swap(&a,&b);
    printf("Values after swap a=%d\tb=%d",a,b);
    


    return 0;
}