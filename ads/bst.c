#include <stdio.h>
#include <stdbool.h>
#include<stdlib.h>
struct Node
{
    struct Node *lchild;
    int key;
    struct Node *rchild;
};
struct Node *root = NULL;
void inorder(struct Node *temp);
bool insertValue(int val);
int choice, value;
bool res;
int exitflag = 0;
void main()
{

    while (exitflag == 0)
    {
        printf("\n1.Insertion\n2.Deletion\n3.Display\n4.Exit\nEnter your choice:");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("\nEnter the value to be inserted:");
            scanf("%d", &value);
            if (insertValue(value))
            {
                printf("\nInsertion succesful");
            }
            else
            {
                printf("\nElement already exists");
            }
           
            break;
        case 3:
            inorder(root);
            break;
        case 4:
            exitflag = 1;
            break;
        default:
            printf("\nEnter a valid choice");
            break;
        }
    }
}
bool insertValue(int num)
{
    struct Node *temp = root;
    struct Node *parent = root;
    bool isPresent = false;
    while (isPresent == false && temp != NULL)
    {
        if (temp->key == num)
        {
            isPresent = true;
        }
        else if (num < temp->key)
        {
            parent = temp;
            temp = temp->lchild;
        }
        else
        {
            parent = temp;
            temp = temp->rchild;
        }
    }
    if (isPresent)
    {
        // element is already present
        return false;
    }
    else
    {
        // creating new node
        struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
        newNode->key = num;
        newNode->lchild = NULL;
        newNode->rchild = NULL;
        if (root == NULL)
        {
            root = newNode;
            return true;
        }
        else
        {
            // linking new node with parent
            if (num < parent->key)
            {
                parent->lchild = newNode;
            }
            else
            {
                parent->rchild = newNode;
            }
            return true;
        }
    }
   
}
void inorder(struct Node *node)
{
    if (node == NULL)
    {
        return;
    }
    else
    {
        printf("\t%d", node->key);
        inorder(node->lchild);
        inorder(root->rchild);
    }
}