#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *left, *right;
};

struct node* insert(struct node *root, int data) {
    if (root == 0) {
        struct node *newnode = (struct node*)malloc(sizeof(struct node));
        newnode->data = data;
        newnode->left = newnode->right = 0;
        return newnode;
    }
    if (data < root->data) {
        root->left = insert(root->left, data);
    } else if (data > root->data) {
        root->right = insert(root->right, data);
    }
    return root;
}

struct node* search(struct node *root, int data) {
    if (root == 0 || root->data == data) {
        return root;
    }
    if (data < root->data) {
        return search(root->left, data);
    }
    return search(root->right, data);
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
    int data;

    printf("Enter data.(-1 to stop)\n");
    while (1) {
        printf("Enter data: ");
        scanf("%d", &data);
        if (data == -1) {
            break;
        }
        root = insert(root, data);
    }

    printf("Postorder traversal of the tree:\n");
    postorder(root);
    printf("\n");

    printf("Enter data to search: ");
    scanf("%d", &data);
    struct node* result = search(root, data);
    if (result != 0) {
        printf("Data %d found in the tree.\n", data);
    } else {
        printf("Data %d not found in the tree.\n", data);
    }

    return 0;
}
