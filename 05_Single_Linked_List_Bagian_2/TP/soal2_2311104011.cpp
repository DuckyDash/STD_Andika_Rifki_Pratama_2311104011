#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

struct List {
    Node* head;
};

void createList_2311104011(List &L) {
    L.head = nullptr;
}

Node* alokasi_2311104011(int x) {
    Node* newNode = new Node;
    newNode->data = x;
    newNode->next = nullptr;
    return newNode;
}

void insertLast_2311104011(List &L, int x) {
    Node* newNode = alokasi_2311104011(x);
    if (L.head == nullptr) {
        L.head = newNode;
    } else {
        Node* temp = L.head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void bubbleSortList_2311104011(List &L) {
    bool swapped;
    if (L.head == nullptr) return;

    do {
        swapped = false;
        Node* current = L.head;
        
        while (current->next != nullptr) {
            if (current->data > current->next->data) {
                int temp = current->data;
                current->data = current->next->data;
                current->next->data = temp;
                swapped = true;
            }
            current = current->next;
        }
    } while (swapped);
}

void printList_2311104011(List L) {
    Node* temp = L.head;
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main() {
    List L;
    createList_2311104011(L);
    int value;

    cout << "Masukkan 5 elemen integer ke dalam list:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Elemen " << i+1 << ": ";
        cin >> value;
        insertLast_2311104011(L, value);
    }

    cout << "List sebelum sorting: ";
    printList_2311104011(L);

    bubbleSortList_2311104011(L);

    cout << "List setelah sorting: ";
    printList_2311104011(L);

    return 0;
}
