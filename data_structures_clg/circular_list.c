#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
} *temp, *head = 0, *tail = 0;

void insert() {
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter the data\n");
    scanf("%d", &newnode->data);
    if (head == 0) {
        head = tail = newnode;
        newnode->next = head;
    } else {
        tail->next = newnode;
        tail = newnode;
        tail->next = head;
    }
}

void delete() {
    struct node *ptr;
    if (head == 0) {
        printf("\nList is empty\n");
    } else if (head == tail) { 
        free(head);
        head = tail = 0;
    } else {
        temp = head;
        while (temp->next != head) {
            ptr = temp;
            temp = temp->next;
        }
        ptr->next = head;
        tail = ptr;
        free(temp);
    }
}

void display() {
    if (head == 0) {
        printf("List is empty\n");
    } else {
        temp = head;
        do {
            printf("%d\t", temp->data);
            temp = temp->next;
        } while (temp != head);
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
