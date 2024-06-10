#include <iostream>
using namespace std;

#define MAX 10

struct Product {
    public:
    int product_id;
    string product_name;
    float product_price;
    float gst;
};

int n;
Product list[MAX];
int count = 0;

void insert_at(int id, string name, float price, float gst);
void delete_at(int id);
void search(int id);
void display();

int main() {
    n = 5;
    insert_at(2323, "Colgate", 56, 2);
    insert_at(5263, "Soap", 45, 1);
    insert_at(9865, "Oil", 256, 5);
    insert_at(2145, "Ghee", 1245, 5);
    insert_at(2212, "Protein", 2000, 10);
    delete_at(9865);
    insert_at(9865, "Oil", 256, 5);
    search(5263);
    display();
    return 0;
}

void insert_at(int id, string name, float price, float gst) {
    if (count < n) {
        list[count].product_id = id;
        list[count].product_name = name;
        list[count].product_price = price;
        list[count].gst = gst;
        count++;
        cout << "Product added successfully!" << endl;
    } else {
        cout << "List is Full!" << endl;
    }
}

void delete_at(int id) {
    int index;
    for (int i = 0; i < n; i++) {
        if (list[i].product_id == id) {
            index = i;
            cout << "Product was removed!" << endl;
        }
    }

        for (int i = index; i < n; i++) {
            list[i] = list[i + 1];
        }
        count--;
}

void search(int id) {
    for (int i = 0; i < n; i++) {
        if (list[i].product_id == id) {
            cout << "Product found at index " << i + 1 << endl;
            return;
        }
    }
    cout << "Product not found!" << endl;
}

void display() {
    cout << "Product ID\tProduct Name\tProduct Price\tGST" << endl;
    for (int i = 0; i < count; i++) {
        cout << list[i].product_id << "\t\t" << list[i].product_name << "\t\t" << list[i].product_price << "\t\t" << list[i].gst << endl;
    }
}

