#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
int adj[20][20], n, vertex, visited[20], mst[20][20], cost = 0;
struct Edge
{
    int u;
    int v;
    int cost;
};
void kruskal(int start);
void main()
{
    for(int i=0;i<n;i++){
        visited[i]=0;
    }
    printf("\nEnter the number of nodes:");
    scanf("%d", &n);
    printf("\nEnter the adjacency matrix:");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("\nA[%d][%d]:", i, j);
            scanf("%d", &adj[i][j]);
        }
    }
    while (true)
    {
        printf("\nEnter the starting vertex:");
        scanf("%d", &vertex);
        if (vertex >= 0 || vertex < n)
        {
            break;
        }
        else
        {
            printf("\nInvalid choice..\n");
        }
    }
    kruskal(vertex);
    printf("\nMST Nodes and Edges\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (mst[i][j] != 0)
            {
                printf("\n%d-%d->Cost=%d", i, j, mst[i][j]);
            }
        }
    }
}
void kruskal(int start)
{
    int visitedVertexCount = 0;
    struct Edge *minEdge = (struct Edge *)malloc(sizeof(struct Edge));
    minEdge->cost=__INT_MAX__;
    visited[start] = 1;
    visitedVertexCount++;
    while (visitedVertexCount < n)
    {
        for (int i = 0; i < n; i++)
        {
            if (visited[i] == 1)
            {
                for (int j = 0; j < n; j++)
                {
                    if (adj[i][j] != 0 && visited[j] ==0  && adj[i][j] < minEdge->cost)
                    {
                        minEdge->u = i;
                        minEdge->v = j;
                        minEdge->cost = adj[i][j];
                    }
                }
            }
        }
        printf("\nAdded Edge->%d-%d", minEdge->u, minEdge->v);
        visited[minEdge->v] = 1;
        printf("\nVisted %d",minEdge->v);
        cost += minEdge->cost;
        visitedVertexCount++;
        adj[minEdge->u][minEdge->v] = __INT_MAX__;
        mst[minEdge->u][minEdge->v] = minEdge->cost;
        minEdge->cost = __INT_MAX__;
        break;
    }
}