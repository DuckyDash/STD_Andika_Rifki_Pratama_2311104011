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

Node* allocate_2311104011(int x) {
    Node* newNode = new Node;
    newNode->data = x;
    newNode->next = nullptr;
    return newNode;
}

void insertLast_2311104011(List &L, int x) {
    Node* newNode = allocate_2311104011(x);
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

void searchElm_2311104011(List L, int target) {
    Node* current = L.head;
    int position = 1;
    bool found = false;

    while (current != nullptr) {
        if (current->data == target) {
            found = true;
            cout << "Elemen " << target << " ditemukan di alamat " << current << " pada posisi ke-" << position << endl;
            break;
        }
        current = current->next;
        position++;
    }

    if (!found) {
        cout << "Elemen " << target << " tidak ditemukan dalam list." << endl;
    }
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
    int value, searchValue;

    cout << "Masukkan 6 elemen integer ke dalam list:" << endl;
    for (int i = 0; i < 6; i++) {
        cout << "Elemen " << i+1 << ": ";
        cin >> value;
        insertLast_2311104011(L, value);
    }

    cout << "Isi list: ";
    printList_2311104011(L);

    cout << "Masukkan nilai yang ingin dicari: ";
    cin >> searchValue;

    searchElm_2311104011(L, searchValue);

    return 0;
}
