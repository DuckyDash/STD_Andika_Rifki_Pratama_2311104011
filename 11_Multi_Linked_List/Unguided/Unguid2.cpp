#include <iostream>
#include <string>
using namespace std;

struct Book {
    string bookTitle;
    string returnDate;
    Book* next;

    Book(string title, string date) : bookTitle(title), returnDate(date), next(nullptr) {}
};

struct Member {
    string memberName;
    string memberID;
    Book* bookHead;
    Member* next;

    Member(string name, string id) : memberName(name), memberID(id), bookHead(nullptr), next(nullptr) {}
};

class LibraryManagement_2311104011 {
private:
    Member* head;

public:
    LibraryManagement_2311104011() : head(nullptr) {}

    void addMember_2311104011(string name, string id) {
        Member* newMember = new Member(name, id);
        newMember->next = head;
        head = newMember;
    }

    void addBook_2311104011(string memberID, string bookTitle, string returnDate) {
        Member* current = head;
        while (current && current->memberID != memberID) {
            current = current->next;
        }
        if (current) {
            Book* newBook = new Book(bookTitle, returnDate);
            newBook->next = current->bookHead;
            current->bookHead = newBook;
        }
    }

    void deleteMember_2311104011(string memberID) {
        Member* prev = nullptr;
        Member* current = head;
        while (current && current->memberID != memberID) {
            prev = current;
            current = current->next;
        }
        if (current) {
            if (prev) {
                prev->next = current->next;
            } else {
                head = current->next;
            }
            Book* book = current->bookHead;
            while (book) {
                Book* temp = book;
                book = book->next;
                delete temp;
            }
            delete current;
        }
    }

    void displayData_2311104011() {
        Member* current = head;
        while (current) {
            cout << current->memberName << " (ID: " << current->memberID << ")\n";
            Book* book = current->bookHead;
            while (book) {
                cout << "  - " << book->bookTitle << ": " << book->returnDate << "\n";
                book = book->next;
            }
            current = current->next;
        }
    }
};

int main() {
    LibraryManagement_2311104011 library;

    library.addMember_2311104011("Rani", "A001");
    library.addMember_2311104011("Dito", "A002");
    library.addMember_2311104011("Vina", "A003");

    library.addBook_2311104011("A001", "Pemrograman C++", "01/12/2024");
    library.addBook_2311104011("A002", "Algoritma Pemrograman", "15/12/2024");
    library.addBook_2311104011("A001", "Struktur Data", "10/12/2024");

    library.deleteMember_2311104011("A002");

    cout << "Library Members and Borrowed Books:\n";
    library.displayData_2311104011();

    return 0;
}
