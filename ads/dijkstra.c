#include <stdio.h>
#include <limits.h>
#include <stdbool.h>
#include <stdlib.h>
int adj[20][20], n, source, distance[20];
bool visited[20];
void dijkstra();
int getMinVertex();
void main()
{
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
    for (int i = 0; i < n; i++)
    {
        visited[i] = false;
        distance[i] = INT_MAX;
    }
    printf("\nEnter the source node:");
    scanf("%d", &source);
    if (source < 0 || source > n - 1)
    {
        printf("\nInvalid source node");
        exit(0);
    }
    // Assigning distance of source node as 0
    distance[source] = 0;
    dijkstra();
}
void dijkstra()
{
    while (true)
    {
        int minVertex = getMinVertex();
        if (minVertex == -1)
        {
            break;
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                if (adj[minVertex][i] != 0)
                {
                    // updating with shortest distance
                    if (distance[minVertex] + adj[minVertex][i] < distance[i])
                    {
                        distance[i] = distance[minVertex] + adj[minVertex][i];
                    }
                }
            }
            // marking minVertex as visited
            visited[minVertex] = true;
        }
    }
    printf("\nMinimum distance from source vertex %d to all other vertices", source);
    for (int i = 0; i < n; i++)
    {
        printf("\n%d-->%d = %d ", source, i, distance[i]);
    }
}
int getMinVertex()
{
    // finding vertex v such that v is unvisited and has minimum distance
    int minDistance = INT_MAX;
    int minVertex = -1;
    for (int i = 0; i < n; i++)
    {
        if (!visited[i] && distance[i] < minDistance)
        {
            minVertex = i;
            minDistance = distance[i];
        }
    }
    return minVertex;
}