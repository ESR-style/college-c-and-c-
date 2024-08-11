#include<stdio.h>
int stack[100],n,choice,top=-1;
void push()
{
    if(top==n)
    {
        printf("Stack is full\n");
    }
    else
    {
        int val;
        printf("Enter value\n");
        scanf("%d",&val);
        top=top+1;
        stack[top]=val;
    }
}
void pop()
{
    if(top==-1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("Deleted element is %d\n",stack[top]);
        top=top-1;
    }
}
void display()
{
    if(top==-1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        for(int i=top;i>=0;i--)
        {
            printf("%d\t",stack[i]);
        }
    }
}

int main()
{
    printf("Enter the size of stack\n");
    scanf("%d",&n);
    while(1)
    {
        printf("1.Push\n2.Pop\n3.Display\n4.Exit\n");
        printf("Enter your choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:push();
                   break;
            case 2:pop();
                   break;
            case 3:display();
                    break;
            case 4:return 0;
                    break;
        
        }
    }
    
    return 0;
}