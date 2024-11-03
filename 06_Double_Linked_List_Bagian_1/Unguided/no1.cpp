#include <iostream>
#include <string>
using namespace std;

struct Node {
    int bookID;
    string bookTitle;
    string bookWriter;
    Node* next;
    Node* prev;

    Node(int id, string title, string writer) {
        bookID = id;
        bookTitle = title;
        bookWriter = writer;
        prev = nullptr;
        next = nullptr;
    }
};

class DLL {
private:
    Node* head;
    Node* tail;

public:
    DLL() {
        head = nullptr;
        tail = nullptr;
    }

    void addBook_2311104011(int bookID, string bookTitle, string bookWriter) {
        Node* newNode = new Node(bookID, bookTitle, bookWriter);
        
        if (tail == nullptr) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
        cout << "Buku ditambahkan " << bookTitle << endl;
    }

    void displayFromStart_2311104011() {
        if (head == nullptr) {
            cout << "Error! Daftar buku kosong." << endl;
            return;
        }

        Node* temp = head;
        cout << "Daftar buku " << endl;
        while (temp != nullptr) {
            cout << "ID: " << temp->bookID << ", Judul: " << temp->bookTitle
                 << ", Penulis: " << temp->bookWriter << endl;
            temp = temp->next;
        }
    }

    void displayFromEnd_2311104011() {
        if (tail == nullptr) {
            cout << "Daftar buku kosong." << endl;
            return;
        }

        Node* temp = tail;
        cout << "Daftar buku (akhir ke awal):" << endl;
        while (temp != nullptr) {
            cout << "ID: " << temp->bookID << ", Judul: " << temp->bookTitle
                 << ", Penulis: " << temp->bookWriter << endl;
            temp = temp->prev;
        }
    }
};

int main() {
    DLL bookList;

    bookList.addBook_2311104011(1, "The Sylvester Ststem", "Shay Cormarck");
    bookList.addBook_2311104011(2, "Mophology Of The Dawn", "Arno Dorian");
    bookList.addBook_2311104011(3, "Birds Among The Pigeons", "Agatha Christie");

    cout << endl;
    bookList.displayFromStart_2311104011();
    cout << endl;
    bookList.displayFromEnd_2311104011();

    return 0;
}
