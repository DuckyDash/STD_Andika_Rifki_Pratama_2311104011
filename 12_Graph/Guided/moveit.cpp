#include <iostream>
#include <queue>
using namespace std;

struct ElmNode;

struct ElmEdge {
    ElmNode *Node;
    ElmEdge *Next;
};

struct ElmNode {
    char info;
    bool visited;
    ElmEdge *firstEdge;
    ElmNode *Next;
};

struct Graph {
    ElmNode *first;
};

void CreateGraph(Graph *G) {
    G->first = NULL;
}

void InsertNode(Graph *G, char X) {
    ElmNode *newNode = new ElmNode;
    newNode->info = X;
    newNode->visited = false;
    newNode->firstEdge = NULL;
    newNode->Next = NULL;

    if (G->first == NULL) {
        G->first = newNode;
    } else {
        ElmNode *temp = G->first;
        while (temp->Next != NULL) {
            temp = temp->Next;
        }
        temp->Next = newNode;
    }
}

void ConnectNode(ElmNode* N1, ElmNode* N2) {
    ElmEdge* newEdge = new ElmEdge;
    newEdge->Node = N2;
    newEdge->Next = NULL;

    if (N1->firstEdge == NULL) {
        N1->firstEdge = newEdge;
    } else {
        ElmEdge* temp = N1->firstEdge;
        while (temp->Next != NULL) {
            temp = temp->Next;
        }
        temp->Next = newEdge;
    }
}

void ResetVisited(Graph &G) {
    ElmNode *temp = G.first;
    while (temp != NULL) {
        temp->visited = false;
        temp = temp->Next;
    }
}

void PrintDFS(Graph G, ElmNode *N) {
    if (N == NULL) return;

    N->visited = true;
    cout << N->info << " ";
    ElmEdge *temp = N->firstEdge;
    while (temp != NULL) {
        if (!temp->Node->visited) {
            PrintDFS(G, temp->Node);
        }
        temp = temp->Next;
    }
}

void PrintBFS(Graph G, ElmNode *N) {
    if (N == NULL) return;

    queue<ElmNode*> Q;
    Q.push(N);
    N->visited = true;

    while (!Q.empty()) {
        ElmNode *temp = Q.front();
        Q.pop();
        cout << temp->info << " ";

        ElmEdge *edge = temp->firstEdge;
        while (edge != NULL) {
            if (!edge->Node->visited) {
                edge->Node->visited = true;
                Q.push(edge->Node);
            }
            edge = edge->Next;
        }
    }
}

int main() {
    Graph G;
    CreateGraph(&G);

    InsertNode(&G, 'A');
    InsertNode(&G, 'B');
    InsertNode(&G, 'C');
    InsertNode(&G, 'D');
    InsertNode(&G, 'E');
    InsertNode(&G, 'F');
    InsertNode(&G, 'G');
    InsertNode(&G, 'H');

    ElmNode* A = G.first;
    ElmNode* B = A->Next;
    ElmNode* C = B->Next;
    ElmNode* D = C->Next;
    ElmNode* E = D->Next;
    ElmNode* F = E->Next;
    ElmNode* G1 = F->Next;
    ElmNode* H = G1->Next;

    ConnectNode(A, B);
    ConnectNode(A, C);
    ConnectNode(B, D);
    ConnectNode(B, E);
    ConnectNode(C, F);
    ConnectNode(C, G1);

    cout << "DFS Traversal: ";
    ResetVisited(G);
    PrintDFS(G, A);
    cout << endl;

    cout << "BFS Traversal: ";
    ResetVisited(G);
    PrintBFS(G, A);
    cout << endl;

    return 0;
}
