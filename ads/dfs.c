#include <stdio.h>
#include <stdbool.h>
int adj[20][20], stack[20], top = -1, n, i, j, start, visited[20];
void push(int node);
void dfs(int start);
int pop();
void main()
{
    printf("\nEnter number of nodes:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("\nA[%d][%d]:", i, j);
            scanf("%d", &adj[i][j]);
        }
    }
    printf("\nEnter starting node:");
    scanf("%d", &start);
    printf("\nDFS Visited Order\n");
    dfs(start);
}
void dfs(int node)
{
    //pushing node to stack
    push(node);
    //visiting the node
    visited[node] = 1;
    printf(" %d", node);
    for (int i = 0; i < n; i++)
    {
        if (adj[node][i] == 1 && visited[i] != 1)
        {
            //calling dfs recursively on each children
            dfs(i);
        }
    }
}
void push(int node)
{
    if (top < n)
    {
        top++;
        stack[top] = node;
    }
}
int pop()
{
    int node = stack[top];
    top--;
    return node;
}
