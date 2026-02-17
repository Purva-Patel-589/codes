#include <stdio.h>
#define MAX 100

typedef struct {
    int u, v, w;
} Edge;

int find(int parent[], int i) {
    while (parent[i] != i)
        i = parent[i];
    return i;
}

void unionSets(int parent[], int u, int v) {
    int a = find(parent, u);
    int b = find(parent, v);
    parent[a] = b;
}

void kruskal(int n, int m, Edge edges[]) {
    Edge temp;
    int parent[MAX], total = 0;

    for (int i = 0; i < m - 1; i++)
        for (int j = 0; j < m - i - 1; j++)
            if (edges[j].w > edges[j + 1].w) {
                temp = edges[j];
                edges[j] = edges[j + 1];
                edges[j + 1] = temp;
            }

    for (int i = 0; i < n; i++)
        parent[i] = i;

    printf("Edge \tWeight\n");
    for (int i = 0, count = 0; count < n - 1 && i < m; i++) {
        int u = edges[i].u, v = edges[i].v, w = edges[i].w;
        int setU = find(parent, u), setV = find(parent, v);
        if (setU != setV) {
            printf("%d - %d \t%d\n", u, v, w);
            total += w;
            unionSets(parent, setU, setV);
            count++;
        }
    }
    printf("Total Weight of MST: %d\n", total);
}

int main() {
    int n, m;
    Edge edges[MAX];
    printf("Enter number of vertices: ");
    scanf("%d", &n);
    printf("Enter number of edges: ");
    scanf("%d", &m);
    printf("Enter edges (u v w):\n");
    for (int i = 0; i < m; i++)
        scanf("%d %d %d", &edges[i].u, &edges[i].v, &edges[i].w);
    kruskal(n, m, edges);
    return 0;
}