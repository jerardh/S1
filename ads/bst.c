#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
// Node structure
struct Node
{
    struct Node *lchild;
    int key;
    struct Node *rchild;
};
struct Node *root = NULL;
void preorder(struct Node *temp);
bool insertValue(int val);
void display();
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
            display();
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
bool deleteValue(int num)
{
    int childcount = 0;
    struct Node *parent;
    struct Node *current;
    if (childcount == 0)
    {
        if (parent->lchild == current)
        {
            parent->lchild = NULL;
        }
        else
        {
            parent->rchild = NULL;
        }
    }
    else if (childcount == 1)
    {
        if (current->lchild != NULL)
        {
            struct Node *child = current->lchild;
            if (parent->lchild == current)
            {
                parent->lchild = child;
            }
            else
            {
                parent->rchild = child;
            }
        }
    }
    else
    {
        // replace by inoreder predecessor or successor
    }
}
int getChildCount(struct Node *node)
{
    if (node->lchild != NULL && node->rchild != NULL)
    {
        return 2;
    }
    else if (node->lchild == NULL && node->rchild == NULL)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
bool insertValue(int num)
{
    struct Node *temp = root;
    struct Node *parent = root;
    bool isPresent = false;
    while (isPresent == false && temp != NULL)
    {
        // iterating while element is not present and current node is not null
        if (temp->key == num)
        {
            // key already present in tree, no need to insert
            isPresent = true;
        }
        else if (num < temp->key)
        {
            // moving to left child
            parent = temp;
            temp = temp->lchild;
        }
        else
        {
            // moving to right child
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
            // tree is empty
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
void preorder(struct Node *node)
{
    if (node == NULL)
    {
        return;
    }
    else
    {
        // traversing in the order node->left child->right child
        printf("\t%d", node->key);
        preorder(node->lchild);
        preorder(node->rchild);
    }
}
void inorder(struct Node *node)
{
    if (node != NULL)
    {
        // traversing in the order left child->node->right child
        inorder(node->lchild);
        printf("\t%d", node->key);
        inorder(node->rchild);
    }
}
void postorder(struct Node *node)
{
    if (node != NULL)
    {
        // traversing in the order left child->right child->node
        postorder(node->lchild);
        postorder(node->rchild);
        printf("%d\t", node->key);
    }
}
void display()
{
    printf("\nInorder traversal\n");
    inorder(root);
    printf("\nPre Order traversal\n");
    preorder(root);
    printf("\nPost Order traversal\n");
    postorder(root);
}