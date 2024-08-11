#include<stdio.h>
#define n 5
int queue[n],front=-1,rear=-1;
void enqueue()
{
    if((rear+1)%n==front)
    {
        printf("Queue is full\n");
    }
    else 
    {
        int x;
        printf("Enter element to insert\n");
        scanf("%d",&x);
     if(rear==-1&&front==-1)
     {
        rear=front=0;
     }
     else
     {
        rear=(rear+1)%n;
     }
     queue[rear]=x;
    }
}
void dequeue()
{
    if(front==-1&&rear==-1)
    {
        printf("Queue is empty\n");
    }
    else if(front==rear)
    {
        front=rear=-1;
    }
    else
    {
        front=(front+1)%n;
    }
}
void display()
{
    if(front==-1&&rear==-1)
    {
        printf("Queue is empty\n");
    }
    else
    {
        int i=front;
        while(i!=rear)
        {
            printf("%d\t",queue[i]);
            i=(i+1)%n;
        }
        printf("%d",queue[rear]);
    }
}
int main()
{
    
    return 0;
}