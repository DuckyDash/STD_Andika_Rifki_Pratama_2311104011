#include <iostream>
using namespace std;

// BINARY TREE

struct Pohon
{
    char data;
    Pohon *left, *right, *parent;
};

Pohon *root, *baru;

void init()
{
    root = NULL;
}

bool isEmpty()
{
    return root == NULL;
}

void buatNode(char data)
{
    if (isEmpty())
    {
        root = new Pohon{data, NULL, NULL, NULL};
        cout << "\nNode " << data << " berhasil dibuat jadi root" << endl;
    }
    else
    {
        cout << "\nPohon sudah dibuat." << endl;
    }
}

// Tambah kiri
Pohon *insertLeft(char data, Pohon *node)
{
    if (isEmpty())
    {
        cout << "\nBuat tree dulu." << endl;
        return NULL;
    }

    if (node->left != NULL)
    {
        cout << "\nNode " << node->data << " sudah ada child kiri." << endl;
        return NULL;
    }

    baru = new Pohon{data, NULL, NULL, node};
    node->left = baru;
    cout << "\nNode " << data << " berhasil ditambahkan ke child kiri " << node->data << endl;
    return baru;
}

// Tambah kanan
Pohon *insertRight(char data, Pohon *node)
{
    if (isEmpty())
    {
        cout << "\nBuat tree dulu!" << endl;
        return NULL;
    }

    if (node->right != NULL)
    {
        cout << "\nNode " << node->data << " sudah ada child kanan." << endl;
        return NULL;
    }

    baru = new Pohon{data, NULL, NULL, node};
    node->right = baru;
    cout << "\nNode " << data << " berhasil ditambahkan ke child kanan " << node->data << endl;
    return baru;
}

// Update Tree
void update(char data, Pohon *node)
{
    if (isEmpty())
    {
        cout << "\nBuat tree dulu!" << endl;
        return;
    }

    if (!node)
    {
        cout << "\nNode yang ingin diganti tidak ada." << endl;
        return;
    }

    char temp = node->data;
    node->data = data;
    cout << "\nNode " << temp << " berhasil diubah jadi " << data << endl;
}

// Show alldata
void retrieve(Pohon *node)
{
    if (isEmpty())
    {
        cout << "\nBuat tree dulu." << endl;
        return;
    }

    if (!node)
    {
        cout << "\nNode yang ditunjuk tidak ada." << endl;
        return;
    }
    cout << "\nData node: " << node->data << endl;
}

// Search Data
void find(Pohon *node)
{
    if (isEmpty())
    {
        cout << "\nBuat tree dulu." << endl;
        return;
    }

    if (!node)
    {
        cout << "\nNode yang ditunjuk tidak ada." << endl;
        return;
    }

    cout << "\nData Node : " << node->data << endl;
    cout << "Root : " << root->data << endl;
    cout << "Parent : " << (node->parent ? node->parent->data : '(Tidak ada parent)') << endl;

    if (node->parent)
    {
        if (node->parent->left == node && node->parent->right)
            cout << "Sibling : " << node->parent->right->data << endl;
        else if (node->parent->right == node && node->parent->left)
            cout << "Sibling : " << node->parent->left->data << endl;
        else
            cout << "Sibling : (Tidak ada sibling)" << endl;
    }
}

void inputNode()
{
    char data, parentData;
    int choice;
    Pohon *current = root;

    if (isEmpty())
    {
        cout << "Masukkan nama node untuk dijadikan root: ";
        cin >> data;
        buatNode(data);
    }

    do
    {
        cout << "\n== Pilihan Input Node == " << endl;
        cout << "1. Tambah Child Kiri" << endl;
        cout << "2. Tambah Child Kanan" << endl;
        cout << "3. Update Node" << endl;
        cout << "4. Retrieve Node" << endl;
        cout << "5. Find Node" << endl;
        cout << "6. Keluar" << endl;
        cout << "Pilih: ";
        cin >> choice;

        if (choice == 1 || choice == 2 || choice == 3 || choice == 4 || choice == 5)
        {
            cout << "Masukkan data node parent: ";
            cin >> parentData;

            // Cari node parent berdasarkan data
            // Function untuk mencari node belum tersedia, tambahkan sendiri jika perlu
            if (parentData == root->data)
                current = root;
            else if (root->left && root->left->data == parentData)
                current = root->left;
            else if (root->right && root->right->data == parentData)
                current = root->right;
            else
                cout << "Parent node tidak ditemukan!" << endl;

            if (!current) continue;
        }

        switch (choice)
        {
        case 1:
            cout << "Masukkan data untuk child kiri: ";
            cin >> data;
            insertLeft(data, current);
            break;
        case 2:
            cout << "Masukkan data untuk child kanan: ";
            cin >> data;
            insertRight(data, current);
            break;
        case 3:
            cout << "Masukkan data baru untuk update node: ";
            cin >> data;
            update(data, current);
            break;
        case 4:
            retrieve(current);
            break;
        case 5:
            find(current);
            break;
        case 6:
            cout << "Keluar." << endl;
            break;
        default:
            cout << "Pilihan tidak valid!" << endl;
        }

    } while (choice != 6);
}


// Main
int main()
{
    init();
    inputNode();
    return 0;
}