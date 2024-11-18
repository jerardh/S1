#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *link;
};
struct Node *top = NULL;
void push(int num);
int pop();
void push(int num)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = num;
    newNode->link = top;
    top = newNode;
    printf("\nInserted new element\n");
}
int pop()
{
    if (top == NULL)
    {
        return -1;
    }
    else
    {
        int num = top->data;
        top = top->link;
        return num;
    }
}
void display()
{
    if (top == NULL)
    {
        printf("\nStack is empty\n");
    }
    else
    {
        struct Node *temp = top;
        printf("\nStack elements are\n");
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
    printf("\nStack Operations");
    while (exit == 0)
    {
        printf("\n1.Push\n2.Pop\n3.Display\n4.Exit\nEnter your choice:");
        scanf("%d", &op);
        switch (op)
        {
        case 1:
            printf("\nEnter the number to be pushed:");
            scanf("%d", &num);
            push(num);
            break;
        case 2:
            num = pop();
            if (num == -1)
            {
                printf("\nStack Underflow\n");
            }
            else
            {
                printf("\nPopped value=%d", num);
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