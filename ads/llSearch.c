#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *link;
};
void main()
{
    int n, num, key;
    printf("\nEnter the number of nodes:");
    scanf("%d", &n);
    struct Node *head;
    struct Node *newNode;
    struct Node *prev = head;
    for (int i = 0; i < n; i++)
    {
        printf("\nEnter the value of node %d:", i + 1);
        scanf("%d", &num);
        newNode = (struct Node *)malloc(sizeof(struct Node));
        newNode->data = num;
        if (i == 0)
        {
            head = newNode;
        }
        else
        {
            prev->link = newNode;
        }
        prev = newNode;
    }
    newNode->link = NULL;
    printf("\nEnter the key to be searched:");
    scanf("%d", &key);
    struct Node *temp = head;
    int pos = 0;
    bool flag = false;
    while (temp != NULL)
    {
        if (temp->data == key)
        {
            flag = true;
            break;
        }
        else
        {
            temp = temp->link;
            pos++;
        }
    }
    if (flag)
    {
        printf("\nKey found at position %d", pos + 1);
    }
    else
    {
        printf("\nKey not present");
    }
}