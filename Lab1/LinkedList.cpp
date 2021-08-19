#include "LinkedList.h"
#include <iostream>

LinkedList::LinkedList(){
    HEAD = nullptr;
    TAIL = nullptr;
}

bool LinkedList::isEmpty(){
    if(HEAD==nullptr){
        return true;
    }
    else{
        return false;
    }
}

void LinkedList::addToHead(int data){
    Node* newNode = new Node(data, HEAD);
    HEAD = newNode;
    if (TAIL==nullptr){
        TAIL = HEAD;
    }
}

void LinkedList::addToTail(int data){
    Node* newNode = new Node();
    if(this->isEmpty()){
        newNode->info = data;
        newNode->next = nullptr;
        TAIL = newNode;
        HEAD = TAIL;
    }
    else {
        newNode->info = data;
        newNode->next = nullptr;
        TAIL->next = newNode;
        TAIL = TAIL->next;
    }
}

void LinkedList::add(int data, Node *predecessor){
    Node* newNode = new Node;
    newNode->info = data;
    newNode->next = predecessor->next;
    predecessor->next = newNode;
}

void LinkedList::removeFromHead(){
    if(!this->isEmpty()){
        Node* NodeToDelete = new Node();
        NodeToDelete = HEAD;
        HEAD = NodeToDelete->next;
        delete NodeToDelete;
        if(HEAD==nullptr){
            TAIL=nullptr;
        }
    }
}

void LinkedList::remove(int data){
    if(!this->isEmpty())
    {
        if(HEAD->info==data){
            removeFromHead();
        }
        else{
            Node *temp = new Node(); 
            temp = HEAD->next;
            Node *prev= new Node();
            prev = HEAD;
        
            while(temp!=nullptr){
                if(temp->info==data){
                    break;
                }
                else{
                    prev = prev->next;
                    temp = temp->next;
                }
            }
        
            if(temp!=nullptr){
                prev->next = temp->next;
                delete temp;
            }
                if(prev->next==nullptr){
                TAIL = prev;
                }
        }
    }
}


Node* LinkedList::retrieve(int data, Node *outputNodePointer){
    Node *p = HEAD;
    while(p!=nullptr){
        if(p->info==data)
        {
            outputNodePointer = p;
            return outputNodePointer;
        }
        p = p->next;
    }
    return nullptr;
}

bool LinkedList::search(int data){
    Node *temp = new Node();
    temp = HEAD;
    while(temp!=nullptr){
        if(temp->info==data)
            return true;
        temp = temp->next;
    }
    return false;
}
 
void LinkedList::traverse(){
    Node *newNode = HEAD;
    while(newNode!=nullptr){
        std::cout<<newNode->info<<" ";
        newNode = newNode->next;
    }
    std::cout<<"\n";
}