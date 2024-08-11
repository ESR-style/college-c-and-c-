#include<stdio.h>
#include<stdlib.h>
struct  node
{
    int data;
    struct node *next;
}*temp,*head=0;
void insert_at_beg()
{
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node*));
    printf("Enter the data\n");
    scanf("%d",&newnode->data);
    newnode->next=0;
    if(head==0)
    {
        head=newnode;
    }
    else
    {
        temp=head;
        head=newnode;
        newnode->next=temp;
    }
}
void insert_at_end()
{
     struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node*));
    printf("Enter the data\n");
    scanf("%d",&newnode->data);
    newnode->next=0;
    if(head==0)
    {
        head=newnode;
    }
    else
    {
        temp=head;
        while(temp->next!=0)
        {
            temp=temp->next;
        }
        temp->next=newnode;
    }
}
void insert_at_pos()
{
    int pos,i=1;
    printf("Enter position to insert\n");
    scanf("%d",&pos);
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node*));
    printf("Enter the data\n");
    scanf("%d",&newnode->data);
    newnode->next=0;
    if(pos == 1) {
        head = newnode;
    } 
    else {
        temp = head;
        while (i < pos - 1 && temp != 0) {
            temp = temp->next;
            i++;
        }

           newnode->next = temp->next;
           temp->next = newnode;
        }
}
void delete_at_beg()
{  
    if(head == NULL)  
    {  
        printf("\nList is empty\n");  
    }  
    else   
    {  
        temp = head;  
        head = temp->next;  
        free(temp);   
    }  
}
void delete_at_end()
{
    struct node *ptr;
    if(head == NULL)  
    {  
        printf("\nList is empty\n");  
    } 
    else{
        temp=head;
        while(temp->next!=0)
        {
            ptr=temp;
            temp=temp->next;
        }
        ptr->next=0;
        free(temp);
    }
}
void display()
{
    temp=head;
    if(head==0)
    {
        printf("List is empty\n");
    }
    else
    {
        while(temp!=0)
        {
            printf("%d\t",temp->data);
            temp=temp->next;
        }
    }
}
int main()
{
    
    return 0;
}