#include<stdio.h>
#define n 5
int queue[n],rear=-1,front=-1;
void enqueue()
{
    if(rear==n-1)
    {
        printf("Queue is full\n");
    }
    else {
        int x;
        printf("Enter value\n");
        scanf("%d",&x);
        if(front==-1&&rear==-1)
        {
            front=rear=0;
        }
        else
        {
            rear++;
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
        front++;
    }
}
int main()
{
    
    return 0;
}