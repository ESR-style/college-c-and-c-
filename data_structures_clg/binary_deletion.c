#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *left, *right;
};

struct node *insert() {
    int x;
    struct node *newnode;

    printf("Enter data(-1 for no data):\n");
    scanf("%d", &x);
    if (x == -1) {
        return 0;
    }

    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = x;
    printf("Enter left child of %d:\n", x);
    newnode->left = insert();
    printf("Enter right child of %d:\n", x);
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

struct node *deleteTree(struct node *root) {
    if (root == 0) {
        return 0;
    }

    deleteTree(root->left);
    deleteTree(root->right);
    free(root);

    return 0; 
}

int main() {
    struct node *root = 0;
    int choice;

    while (1) {
        printf("\nEnter your choice:\n");
        printf("1. Insert\n2. Delete Tree\n3. Display (Postorder)\n4. Exit\n");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            root = insert();
            break;
        case 2:
            root = deleteTree(root); 
            printf("Tree deleted successfully.\n");
            break;
        case 3:
            if (root != 0) {
                postorder(root);
            } else {
                printf("Tree is empty.\n");
            }
            break;
        case 4:
            printf("Program exited.\n");
            return 0;
        default:
            printf("Invalid choice. Please try again.\n");
            break;
        }
    }

    return 0;
}
