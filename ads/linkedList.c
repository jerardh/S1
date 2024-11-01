#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *link;
};
struct Node *head = NULL;
int choice, num;
void display();
void insert(int num);
void insert_beg(int num);
void insert_end(int num);
int delete_beg();
void insert(int num)
{
    int choice;
    printf("\n1.Insertion at beginning\n2.Insertion at end\n");
    printf("\nEnter your choice:");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        insert_beg(num);
        break;
    case 2:
        insert_end(num);
        break;
    default:
        printf("\nEnter a valid choice");
        break;
    }
}
void display()
{
    if (head == NULL)
    {
        printf("\nList is empty");
    }
    else
    {
        struct Node *temp = head;
        printf("\nList Elements are\n");
        while (temp != NULL)
        {
            printf("%d\t", temp->data);
            temp = temp->link;
        }
    }
}
void insert_end(int num)
{
    struct Node *temp = head;
    struct Node *prev;
    if(head==NULL){
        insert_beg(num);
    }
    else{
        while (temp != NULL)
    {
        prev = temp;
        temp = temp->link;
    }
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = num;
    newNode->link = NULL;
    prev->link = newNode;
    printf("\nElement added at end\n");
    }
}
void insert_beg(int num)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = num;
    newNode->link = head;
    head = newNode;
    printf("Inserted new element successfully");
}
int delete_beg()
{
    if (head == NULL)
    {
        return -1;
    }
    else
    {
        int num = head->data;
        head = head->link;
        return num;
    }
}
void main()
{
    printf("Linked List Operations\n");
    bool flag = true;
    while (flag)
    {
        printf("\n1.Insertion\n2.Deletion\n3.Display\n4.Exit\nChoose your option:\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("\nEnter the value to be inserted:");
            scanf("%d", &num);
            insert(num);
            break;
        case 2:
            num = delete_beg();
            if (num == -1)
            {
                printf("\nList is empty");
            }
            else
            {
                printf("\nDeleted element =%d", num);
            }
            break;
        case 3:
            display();
            break;
        case 4:
            flag = false;
            break;
        default:
            printf("\nEnter a valid choice");
            break;
        }
    }
}