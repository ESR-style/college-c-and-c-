#include<stdio.h>
struct  student
{
    char name[10];
    int roll_no;
    float marks;
};


int main()
{
    struct student s1;
    printf("Enter name: \n");
    scanf("%s",s1.name);
    printf("Enter roll number: \n");
    scanf("%d",&s1.roll_no);
    printf("Enter marks: \n");
    scanf("%f",&s1.marks);
    printf("Printing student details \n");
    printf("Name: %s\n",s1.name);
    printf("Roll number: %d\n",s1.roll_no);
    printf("marks : %f",s1.marks);
    return 0;
}