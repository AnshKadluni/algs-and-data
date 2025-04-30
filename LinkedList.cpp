#include "LinkedList.h"
#include <iostream>
#include <limits>

LinkedList::LinkedList() {
    head = nullptr;
};

LinkedList::LinkedList(int* array, int len) {
    head = new Node();
    Node* curr = head;
    for (int i = 0; i < len-1; i++) {
        curr->setData(array[i]);
        Node* temp = new Node();
        curr->setLink(temp);
        curr = curr->getLink();
    }
    curr->setData(array[len-1]);
};

LinkedList::~LinkedList() {
    delete head;
};

void LinkedList::insertPosition(int pos, int newNum) {
    if (pos < 1) {
        Node* newNode = new Node(newNum, head);
        return;
    }

    Node* curr = head;
    int i = 1;

    while (curr->getLink() != nullptr) {
        i++;
        if (i == pos) break;
        curr = curr->getLink();
    }

    Node* newNode = new Node(newNum, curr->getLink());
    curr->setLink(newNode);

};

bool LinkedList::deletePosition(int pos) {
    if (pos < 1) return false;

    Node* curr = head;
    int i = 1;

    while (curr->getLink() != nullptr) {
        i++;
        if (i == pos) break;
        curr = curr->getLink();
    }

    if (curr == nullptr) return false;

    curr->setLink(curr->getLink()->getLink());
    return true;
};

int LinkedList::get(int pos) {
    Node* curr = head;
    int i = 1;

    while (curr != nullptr) {
        if (i == pos) break;
        curr = curr->getLink();
        i++;
    }

    if (i < pos) {
        return std::numeric_limits<int>::max();
    }

    return curr->getData();

};

int LinkedList::search(int target) {
    Node* curr = head;
    int i = 1;

    while (curr != nullptr) {
        if (curr->getData() == target) break;
        curr = curr->getLink();
        i++;
    }

    if (curr != nullptr) {
        return i;
    }

    return -1;
};

void LinkedList::printList() {
    Node* curr = head;

    while (curr != nullptr) {
        std::cout << curr->getData() << ' ';
        curr = curr->getLink();
    }
    std::cout << std::endl;
};