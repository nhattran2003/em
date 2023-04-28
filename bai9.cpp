#include <iostream>
using namespace std;

#define MAX 100 // kích thu?c c?a hàng d?i

class Queue {
private:
    int front, rear; // ch? s? phía tru?c và phía sau c?a hàng d?i
    int arr[MAX]; // m?ng luu tr? các ph?n t? hàng d?i
public:
    Queue() { // constructor, kh?i t?o hàng d?i r?ng
        front = -1;
        rear = -1;
    }

    bool isFull() { // ki?m tra hàng d?i dã d?y chua
        return rear == MAX - 1;
    }

    bool isEmpty() { // ki?m tra hàng d?i có r?ng không
        return front == -1 || front > rear;
    }

    void enqueue(int x) { // thêm ph?n t? vào cu?i hàng d?i
        if (isFull()) {
            cout << "Hang doi da day!";
            return;
        }
        if (front == -1) {
            front = 0;
        }
        arr[++rear] = x;
        cout << "Da them phan tu " << x << " vao hang doi." << endl;
    }

    void dequeue() { // lo?i b? ph?n t? ? d?u hàng d?i
        if (isEmpty()) {
            cout << "Hang doi rong!";
            return;
        }
        int x = arr[front++];
        cout << "Da xoa phan tu " << x << " khoi hang doi." << endl;
    }

    void display() { // hi?n th? các ph?n t? trong hàng d?i
        if (isEmpty()) {
            cout << "Hang doi rong!";
            return;
        }
        cout << "Cac phan tu trong hang doi la: ";
        for (int i = front; i <= rear; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Queue q;
    int arr[6] = {41, 23, 4, 14, 56, 1};
    for (int i = 0; i < 6; i++) {
        q.enqueue(arr[i]);
    }
    q.enqueue(55); // thêm ph?n t? 55 vào hàng d?i
    q.dequeue(); // lo?i b? ph?n t? d?u tiên (23) trong hàng d?i
    q.display(); // hi?n th? các ph?n t? còn l?i trong hàng d?i
    return 0;
}