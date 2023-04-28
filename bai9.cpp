#include <iostream>
using namespace std;

#define MAX 100 // k�ch thu?c c?a h�ng d?i

class Queue {
private:
    int front, rear; // ch? s? ph�a tru?c v� ph�a sau c?a h�ng d?i
    int arr[MAX]; // m?ng luu tr? c�c ph?n t? h�ng d?i
public:
    Queue() { // constructor, kh?i t?o h�ng d?i r?ng
        front = -1;
        rear = -1;
    }

    bool isFull() { // ki?m tra h�ng d?i d� d?y chua
        return rear == MAX - 1;
    }

    bool isEmpty() { // ki?m tra h�ng d?i c� r?ng kh�ng
        return front == -1 || front > rear;
    }

    void enqueue(int x) { // th�m ph?n t? v�o cu?i h�ng d?i
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

    void dequeue() { // lo?i b? ph?n t? ? d?u h�ng d?i
        if (isEmpty()) {
            cout << "Hang doi rong!";
            return;
        }
        int x = arr[front++];
        cout << "Da xoa phan tu " << x << " khoi hang doi." << endl;
    }

    void display() { // hi?n th? c�c ph?n t? trong h�ng d?i
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
    q.enqueue(55); // th�m ph?n t? 55 v�o h�ng d?i
    q.dequeue(); // lo?i b? ph?n t? d?u ti�n (23) trong h�ng d?i
    q.display(); // hi?n th? c�c ph?n t? c�n l?i trong h�ng d?i
    return 0;
}