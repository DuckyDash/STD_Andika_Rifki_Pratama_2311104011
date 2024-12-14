#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Edge {
    string destination;
    int weight;
    Edge* next;
};

struct Node {
    string name;
    Edge* edges;
};

void inputSimpul(vector<Node>& graph, int totalSimpul) {
    for (int i = 0; i < totalSimpul; i++) {
        cout << "Silakan masukan nama simpul " << i + 1 << ": ";
        cin >> graph[i].name;
        graph[i].edges = nullptr;
    }
}

void inputBobot(vector<Node>& graph, int totalSimpul) {
    for (int i = 0; i < totalSimpul; i++) {
        for (int j = 0; j < totalSimpul; j++) {
            int bobot;
            cout << "Masukkan bobot dari " << graph[i].name << " ke " << graph[j].name << ": ";
            cin >> bobot;

            if (bobot != 0) {
                Edge* newEdge = new Edge{graph[j].name, bobot, graph[i].edges};
                graph[i].edges = newEdge;
            }
        }
    }
}

void printGraph(const vector<Node>& graph) {
    cout << "\nGraf dengan Linked List:\n";
    for (const auto& node : graph) {
        cout << node.name << " -> ";
        Edge* edge = node.edges;
        while (edge) {
            cout << edge->destination << "(" << edge->weight << ") ";
            edge = edge->next;
        }
        cout << endl;
    }
}

int main() {
    int totalSimpul;

    cout << "Silakan masukan jumlah simpul: ";
    cin >> totalSimpul;

    vector<Node> graph(totalSimpul);

    inputSimpul(graph, totalSimpul);
    inputBobot(graph, totalSimpul);
    printGraph(graph);

    return 0;
}
