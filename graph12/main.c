#include <stdio.h>
#include "graph.h"

int main() {
    int vertices = 6;
    Graph* graph = createGraph(vertices);

    addEdge(graph, 0, 1);
    addEdge(graph, 0, 2);
    addEdge(graph, 1, 3);
    addEdge(graph, 2, 4);
    addEdge(graph, 2, 5);

    printf("Graph:\n");
    printGraph(graph);

    // Implement BFS algorithm here

    return 0;
}
