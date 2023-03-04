#include <iostream>

using namespace std;

class Node {
public:
    int value;
    Node* next;
    Node* prev;

    Node(int value) {
        this->value = value;
        this->next = nullptr;
        this->prev = nullptr;
    }
};

class DoublyLinkedList {
private:
    Node* head;
    Node* tail;
    int size;

public:
    DoublyLinkedList() {
        this->head = nullptr;
        this->tail = nullptr;
        this->size = 0;
    }

    void insertHead(int value) {
        Node* newNode = new Node(value);
        if (this->size == 0) {
            this->head = newNode;
            this->tail = newNode;
        }
        else {
            newNode->next = this->head;
            this->head->prev = newNode;
            this->head = newNode;
        }
        this->size++;
    }

    void insertTail(int value) {
        Node* newNode = new Node(value);
        if (this->size == 0) {
            this->head = newNode;
            this->tail = newNode;
        }
        else {
            newNode->prev = this->tail;
            this->tail->next = newNode;
            this->tail = newNode;
        }
        this->size++;
    }

    void insertMid(int value) {
        Node* newNode = new Node(value);
        if (this->size == 0) {
            this->head = newNode;
            this->tail = newNode;
        }
        else if (this->size == 1) {
            newNode->next = this->head->next;
            this->head->next = newNode;
            newNode->prev = this->head;
            this->tail = newNode->next;
        }
        else {
            int mid = this->size / 2;
            Node* curr = this->head;
            for (int i = 0; i < mid; i++) {
                curr = curr->next;
            }
            newNode->next = curr->next;
            newNode->prev = curr;
            curr->next->prev = newNode;
            curr->next = newNode;
        }
        this->size++;
    }

    void printList() {
        Node* curr = this->head;
        while (curr != nullptr) {
            cout << curr->value << " ";
            curr = curr->next;
        }
        cout << endl;
    }
};

int main() {
    DoublyLinkedList list;
    list.insertHead(3);
    list.insertHead(2);
    list.insertHead(1);
    list.insertTail(4);
    list.insertMid(2);
    list.printList();
    return 0;
}

