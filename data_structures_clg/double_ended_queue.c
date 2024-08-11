#include<stdio.h>
#define n 5
int queue[n],front=-1,rear=-1;
void insert_rear()
{
    if(rear==n-1)
    {
        printf("Queue is full\n");
        return;
    }
    if(front==-1)
    {
        front++;
    }
    printf("Enter data to insert\n");
    int x;
    scanf("%d",&x);
    queue[++rear]=x;
}
void delete_front()
{
    if(front==-1)
    {
        printf("Queue is empty\n");
        return;
    }
    if(front==rear)
    {
        front=rear=-1;
    }
    else
    {
        front++;
    }
}
void delete_rear()
{
    if(front==-1)
    {
        printf("Queue is empty\n");
        return;
    }
    if(front==rear)
    {
        front=rear=-1;
    }
    else
    {
        rear--;
    }
}
void insert_front()
{
    if(front==0)
    {
        printf("Front at begining insertion not possible\n");
        return;
    }
    if(front==-1)
    {
        front++;
        rear++;
    }
    else
    {
        front--;
    }
    printf("Enter data to insert\n");
    int x;
    scanf("%d",&x);
    queue[front]=x;
}
void display()
{
    if(front==-1)
    {
        printf("Queue is empty\n");
        return;
    }
    for(int i=front;i<=rear;i++)
    {
        printf("%d\t",queue[i]);
    }
}
int main()
{
    int choice;
    while(1)
    {
        printf("Enter your choice\n");
        printf("1.insert_front\n2.insert_rear\n3.delete_front\n4.delete_rear\n5.display\n6.exit");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:insert_front();
            break;
        case 2:insert_rear();
            break;
        case 3:delete_front();
            break;
        case 4:delete_rear();
            break;
        case 5:display();
            break;
        case 6:return 0;
        
        default:
            break;
        }
    }
}