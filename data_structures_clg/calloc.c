#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,*ptr;
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int));
    if(ptr==NULL)
    {
        printf("Memory not allocated\n");
        return 0;
    }
    printf("memory succefully allocated\n");
    for(int i=0;i<n;i++)
    {
        ptr[i]=i;
    }
    printf("Printing elements\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",ptr[i]);
    }
    return 0;
}