#include<stdio.h>

int main()
{
    int arr[5],n,n1;
    printf("Enter elements into the array\n");
    for(int i=0;i<5;i++)
    {
        printf("Enter element %d",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Enter number you want to replace\n");
    scanf("%d",&n);
    printf("Enter new element\n");
    scanf("%d",&n1);
    for(int i=0;i<5;i++)
    {
        if(arr[i]==n)
        {
            arr[i]=n1;
        }
    }
    return 0;
}