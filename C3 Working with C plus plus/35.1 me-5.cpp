#include <iostream>

using namespace std;

const int MAX_SIZE = 100;

class Queue {
    private:
        int arr[MAX_SIZE];
        int frontIdx, backIdx;

    public:
        Queue() {
            frontIdx = 0;
            backIdx = -1;
        }

        bool isEmpty() {
            return backIdx < frontIdx;
        }

        bool isFull() {
            return backIdx == MAX_SIZE - 1;
        }

        void enqueue(int val) {
            if (isFull()) {
                cout << "Queue overflow error." << endl;
                return;
            }
            arr[++backIdx] = val;
        }

        void dequeue() {
            if (isEmpty()) {
                cout << "Queue underflow error." << endl;
                return;
            }
            frontIdx++;
        }

        int front() {
            if (isEmpty()) {
                cout << "Queue is empty." << endl;
                return -1;
            }
            return arr[frontIdx];
        }
};

int main() {
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    cout << q.front() << endl;
    q.dequeue();
    cout << q.front() << endl;
    q.dequeue();
    cout << q.front() << endl;
    q.dequeue();
    cout << q.front() << endl;
    q.dequeue();
    cout << q.front() << endl;
    q.dequeue();
    return 0;
}

