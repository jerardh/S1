#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int n, adj[20][20], visitedCount = 0, queue[20], front = -1, rear = -1, inDegree[20];
void main()
{
    printf("\nEnter the number of nodes:");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        inDegree[i] = 0;
    }
    printf("\nEnter the adjacency matrix");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("\na[%d][%d]", i, j);
            scanf("%d", &adj[i][j]);
            if (adj[i][j] == 1)
            {
                inDegree[j]++;
            }
        }
    }
    printf("\nIndegrees\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d--->%d", i, inDegree[i]);
    }
}
void enqueue(int vertex)
{
    if (front == -1)
    {
        front++;
    }
    rear++;
    queue[rear] = vertex;
}
int dequeue()
{
}