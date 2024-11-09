#include <iostream>
using namespace std;

struct Node {
    string data;
    int NIM;
    Node* next;
};

Node* front = nullptr;

bool isEmpty() {
    return front == nullptr;
}

void enqueueAntrian(string data, int NIM) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->NIM = NIM;
    newNode->next = nullptr;

    if (isEmpty() || front->NIM > NIM) {
        newNode->next = front;
        front = newNode;
    } else {
        Node* now = front;
        while (now->next != nullptr && now->next->NIM < NIM) {
            now = now->next;
        }
        newNode->next = now->next;
        now->next = newNode;
    }
}

void dequeueAntrian() {
    if (isEmpty()) {
        cout << "Antrian kosong!" << endl;
    } else {
        Node* current = front;
        front = front->next;
        delete current;
    }
}

int countQueue() {
    int count = 0;
    Node* temp = front;
    while (temp != nullptr) {
        count++;
        temp = temp->next;
    }
    return count;
}

void clearQueue() {
    while (!isEmpty()) {
        dequeueAntrian();
    }
}

void viewQueue() {
    cout << "Data antrian:" << endl;
    Node* temp = front;
    int position = 1;
    while (temp != nullptr) {
        cout << position << ". " << temp->data << endl;
        temp = temp->next;
        position++;
    }
    if (position == 1) {
        cout << "Antrian kosong!" << endl;
    }
}


void sortQueue(){
    if (isEmpty()){
        cout << "Antrian kosong!" << endl;
        return;
    }
        Node* current = front;
        while (current != nullptr) {
            Node* lowest = current;
            Node* nextNode = current-> next;
            while (nextNode != nullptr) { 
                if (nextNode->NIM < lowest->NIM){
                    lowest = nextNode;
                } 
                nextNode = nextNode-> next;
            }
        
    if (lowest != current){
        swap(lowest->NIM, current-> NIM);
        swap(lowest->data, current-> data);
    
    } current = current->next;
    }
}

int main() {
    int total;
    cout << "Masukan jumlah mahasiswa : ";
    cin >> total;

    for (int i = 0; i < total; i++){
        string nama;
        int NIM;
        cout << "Masukan nama mahasiswa : " << endl;
        cin >> nama;
        cout << "Masukan NIM mahasiswa : " << endl;
        cin >> NIM;
        enqueueAntrian(nama, NIM);
    }
    cout <<"\nData before sorted" << endl;
    viewQueue();
        cout <<"\nData after sorted" << endl;
    sortQueue();
    viewQueue();
}
