#include <iostream>
#include <vector>

using namespace std;

void inputGraph(vector<vector<int>>& graph, int totalSimpul, int totalSisi) {
    cout << "Masukan pasangan simpul:\n";
    for (int i = 0; i < totalSisi; i++) {
        int simpul1, simpul2;
        cin >> simpul1 >> simpul2;
        graph[simpul1 - 1][simpul2 - 1] = 1;
        graph[simpul2 - 1][simpul1 - 1] = 1;
    }
}

void printAdjMatrix(const vector<vector<int>>& graph) {
    cout << "Adjacency Matrix:\n";
    for (const auto& row : graph) {
        for (int value : row) {
            cout << value << " ";
        }
        cout << endl;
    }
}

int main() {
    int totalSimpul, totalSisi;

    cout << "Masukan jumlah simpul: ";
    cin >> totalSimpul;
    cout << "Masukan jumlah sisi: ";
    cin >> totalSisi;

    vector<vector<int>> graph(totalSimpul, vector<int>(totalSimpul, 0));

    inputGraph(graph, totalSimpul, totalSisi);
    printAdjMatrix(graph);

    return 0;
}
