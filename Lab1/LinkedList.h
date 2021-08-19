#pragma once

class Node {
public:
    int info;
    Node *next;
    Node() : next(nullptr){} 
    Node(int info, Node *next) : info(info), next(next) {}
};

class LinkedList {
private:
    Node *HEAD;
    Node *TAIL;

public:
    LinkedList();
    
    bool isEmpty();
    void addToHead(int data);
    void addToTail(int data);
    void add(int data, Node *predecessor);
    void removeFromHead();
    void remove(int data);
    Node* retrieve(int data, Node *outputNodePointer);
    bool search(int data);
    void traverse();
};