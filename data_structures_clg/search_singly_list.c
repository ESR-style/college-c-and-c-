#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
} *temp, *head = 0;

void insert() {
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter the data\n");
    scanf("%d", &newnode->data);
    newnode->next = 0;
    if (head == 0) {
        head = newnode;
    } else {
        temp = head;
        while (temp->next != 0) {
            temp = temp->next;
        }
        temp->next = newnode;
    }
}

void display() {
    temp = head;
    if (head == 0) {
        printf("List is empty\n");
    } else {
        while (temp != 0) {
            printf("%d\t", temp->data);
            temp = temp->next;
        }
        printf("\n");
    }
}

void search() {
    int value, found = 0;
    printf("Enter the value to search\n");
    scanf("%d", &value);
    temp = head;
    while (temp != 0) {
        if (temp->data == value) {
            printf("Element %d is found in the list\n", value);
            found = 1;
            break;
        }
        temp = temp->next;
    }
    if (found==0) {
        printf("Element %d is not found in the list\n", value);
    }
}
int main() {
    int choice;
    do {
        printf("Enter your choice\n");
        printf("1. Insert\n2.Display\n3. Search\n4. Exit\n");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                insert();
                break;
            case 2:
                display();
                break;
            case 3:
                search();
                break;
            case 4:
                printf("Program exited\n");
                break;
            default:
                printf("Invalid choice\n");
                break;
        }
    } while (choice != 4);
    return 0;
}
