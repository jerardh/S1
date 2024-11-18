#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *link;
};
struct Node *front = NULL;
struct Node *rear = NULL;
void enqueue(int num);
int dequeue();
void display();
void enqueue(int num)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = num;
    newNode->link = NULL;
    if (front == NULL && rear == NULL)
    {
        front = newNode;
        rear = newNode;
    }
    else
    {
        rear->link = newNode;
        rear = newNode;
    }
    printf("\nAdded new element\n");
}
int dequeue()
{
    if (front == NULL)
    {
        return -1;
    }
    else
    {
        int num = front->data;
        if (front == rear)
        {
            front = NULL;
            rear = NULL;
        }
        else
        {
            front = front->link;
        }
        return num;
    }
}
void display()
{
    if (front == NULL)
    {
        printf("\nQueue is empty\n");
    }
    else
    {
        struct Node *temp = front;
        printf("\nQueue elements are\n");
        while (temp != NULL)
        {
            printf("%d\t", temp->data);
            temp = temp->link;
        }
    }
}
void main()
{
    int op, num, exit = 0;
    printf("\nQueue Operations");
    while (exit == 0)
    {
        printf("\n1.Insertion\n2.Deletion\n3.Display\n4.Exit\nEnter your choice:");
        scanf("%d", &op);
        switch (op)
        {
        case 1:
            printf("\nEnter the number to be inserted:");
            scanf("%d", &num);
            enqueue(num);
            break;
        case 2:
            num = dequeue();
            if (num == -1)
            {
                printf("\nQueue is empty \n");
            }
            else
            {
                printf("\nDeleted value=%d", num);
            }
            break;
        case 3:
            display();
            break;
        case 4:
            exit = 1;
            break;
        default:
            printf("\nEnter a valid choice\n");
            break;
        }
    }
}
