#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node* prev;

    Node(int val) {
        data = val;
        next = nullptr;
        prev = nullptr;
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

        tambahAkhir_2311104011(9);
        tambahAkhir_2311104011(82);
        tambahAkhir_2311104011(11);
    }

    void tambahAwal_2311104011(int data) {
        Node* newNode = new Node(data);
        if (head == nullptr) {
            head = tail = newNode;
        } else {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }

    void tambahAkhir_2311104011(int data) {
        Node* newNode = new Node(data);
        if (tail == nullptr) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    void hapusAwal_2311104011() {
        if (head == nullptr) {
            cout << "LIST KOSONG" << endl;
            return;
        }
        Node* temp = head;
        if (head == tail) {
            head = tail = nullptr;
        } else {
            head = head->next;
            head->prev = nullptr;
        }
        delete temp;
        cout << "Elemen pertama berhasil dihapus." << endl;
    }

    void hapusAkhir_2311104011() {
        if (tail == nullptr) {
            cout << "List Kosong" << endl;
            return;
        }
        Node* temp = tail;
        if (head == tail) {
            head = tail = nullptr;
        } else {
            tail = tail->prev;
            tail->next = nullptr;
        }
        delete temp;
        cout << "Elemen berhasil dihapus." << endl;
    }

    void showDariAwal_2311104011() {
        Node* temp = head;
        if (temp == nullptr) {
            cout << "LIST KOSONG" << endl;
            return;
        }
        while (temp != nullptr) {
            cout << temp->data;
            if (temp->next != nullptr) cout << " <-> ";
            temp = temp->next;
        }
        cout << endl;
    }

    void showDariAkhir_2311104011() {
        Node* temp = tail;
        if (temp == nullptr) {
            cout << "List Kosong" << endl;
            return;
        }
        while (temp != nullptr) {
            cout << temp->data;
            if (temp->prev != nullptr) cout << " <-> ";
            temp = temp->prev;
        }
        cout << endl;
    }
};

int main() {
    DLL list;
    int pilihan, nilai;

    while (true) {
        cout << "\n== MENU ==" << endl;
        cout << "1. Tambah di Awal" << endl;
        cout << "2. Tambah di Akhir" << endl;
        cout << "3. Hapus dari Awal" << endl;
        cout << "4. Hapus dari Akhir" << endl;
        cout << "5. Tampilkan dari Akhir" << endl;
        cout << "6. Keluar" << endl;
        cout << "== List saat ini ==" << endl;
        list.showDariAwal_2311104011();
        cout << "Pilih opsi: ";
        cin >> pilihan;


        switch (pilihan) {
            case 1:
                cout << "Masukkan nilai untuk ditambah di awal: ";
                cin >> nilai;
                list.tambahAwal_2311104011(nilai);
                break;
            case 2:
                cout << "Masukkan nilai untuk ditambah di akhir: ";
                cin >> nilai;
                list.tambahAkhir_2311104011(nilai);
                break;
            case 3:
                list.hapusAwal_2311104011();
                break;
            case 4:
                list.hapusAkhir_2311104011();
                break;
            case 5:
                cout << "List dari Akhir: ";
                list.showDariAkhir_2311104011();
                break;
            case 6:
                cout << "Bye." << endl;
                return 0;
            default:
                cout << "Opsi tidak valid, coba lagi." << endl;
                break;
        }
    }

    return 0;
}
