#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *right,*left;
};
struct node *insert()
{
    int x;
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter data (-1 for no data)\n");
    scanf("%d",&x);
    if(x==-1)
    {
        return 0;
    }
    newnode->data=x;
    printf("Enter left child of %d",x);
    newnode->left=insert();
    printf("Enter right child of %d",x);
    newnode->right=insert();
    return newnode;
}
void inorder(struct node *root)
{
    if(root==0)
    {
        return;
    }
    inorder(root->left);
    printf("%d\t",root->data);
    inorder(root->right);
}
int main()
{
    struct node *root;
    root=insert();
    printf("Postorder traversal\n");
    inorder(root);
    return 0;
}