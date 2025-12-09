//Given an undirected graph, find the number of connected components. Provide both
//DFS/BFS implementations and disjoint-set (union-find) approach.
//Input: n (nodes), m (edges), then m pairs for edges.


#include <stdio.h>

#define MAX 1001

int visited[MAX];
int adj[MAX][MAX];
int degree[MAX];

void dfs(int u) {
    visited[u] = 1;
    for (int i = 0; i < degree[u]; i++) {
        int v = adj[u][i];
        if (!visited[v]) dfs(v);
    }
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    for (int i = 0; i < m; i++) {
        int u, v;
        scanf("%d %d", &u, &v);
        adj[u][degree[u]++] = v;
        adj[v][degree[v]++] = u;
    }

    int components = 0;
    for (int i = 1; i <= n; i++) {
        if (!visited[i]) {
            dfs(i);
            components++;
        }
    }

    printf("%d\n", components);
    return 0;
}
