#include<stdio.h>
int main()
{
    int n;
    printf("Enter number of elements to the array\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements of the array\n");
    for(int i=0;i<n;i++)
    {
        printf("Enter element %d:\n",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Printing array elements\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
}