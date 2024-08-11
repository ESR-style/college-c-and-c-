#include <stdio.h>
#include <stdlib.h>

struct node {
    struct node *left, *right;
    int data;
};

struct node* insert() {
    int x;
    struct node *newnode;
    printf("\nEnter the data. (Enter -1 for no node)\n");
    scanf("%d", &x);
    if (x == -1) {
        return 0;
    }
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = x;
    printf("Enter left child of %d\n", x);
    newnode->left = insert();
    printf("Enter right child of %d\n", x);
    newnode->right = insert();
    return newnode;
}

void postorder(struct node *root) {
    if (root == 0) {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    printf("%d\t", root->data);
   
}

int main() {
    struct node *root = 0;
    root = insert();
    printf("\npostorder Traversal:\n");
    postorder(root);
    return 0;
}
