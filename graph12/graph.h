#ifndef GRAPH_H
#define GRAPH_H

#define MAX_VERTICES 100

typedef struct Node {
    int data;
    struct Node* next;
} Node;

typedef struct Graph {
    int numVertices;
    Node* adjLists[MAX_VERTICES];
} Graph;

Graph* createGraph(int vertices);
void addEdge(Graph* graph, int src, int dest);
void printGraph(Graph* graph);

#endif
