#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *prev;
    struct node *next;
} *temp, *head = 0, *tail = 0;

void insert() {
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter the data\n");
    scanf("%d", &newnode->data);
    newnode->prev = 0;
    newnode->next = 0;
    if (head == 0) {
        head = tail = newnode;
    } else {
        tail->next = newnode;
        newnode->prev = tail;
        tail = newnode;
    }
}

void delete() {
    if (head == 0) {
        printf("\nList is empty\n");
    } else {
        if (head == tail) { 
            free(head);
            head = tail = 0;
        } else {
            temp = tail;
            tail = tail->prev;
            tail->next = 0;
            free(temp);
        }
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

int main() {
    int choice;
    do {
        printf("Enter your choice\n");
        printf("1. Insert\n2. Delete\n3. Display\n4. Exit\n");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                insert();
                break;
            case 2:
                delete();
                break;
            case 3:
                display();
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
