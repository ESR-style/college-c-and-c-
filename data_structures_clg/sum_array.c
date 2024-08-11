#include<stdio.h>

int main()
{
    int arr[5],sum=0;
    for(int i=0;i<5;i++)
    {
        printf("Enter element: %d\n",i+1);
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    printf("Sum: %d",sum);
    return 0;
}