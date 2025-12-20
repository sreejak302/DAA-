#include <stdio.h>
int graph[20][20];
int visited[20];
int n;
void dfs(int start)
{
int i;
printf("%d ", start);
visited[start] = 1;
for (i = 0; i < n; i++)
{
if (graph[start][i] == 1 && visited[i] == 0)
{
dfs(i);
}}}
int main()
{
int i, j, start;
printf("Enter number of vertices: ");
scanf("%d", &n);
printf("Enter adjacency matrix:\n");
for (i = 0; i < n; i++)
for (j = 0; j < n; j++)
scanf("%d", &graph[i][j]);
printf("Enter starting vertex: ");
scanf("%d", &start);
printf("DFS traversal: ");
dfs(start);
printf("\n");
return 0;
}
