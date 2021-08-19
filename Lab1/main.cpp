#include<iostream>
#include "LinkedList.h"
#include "Stack.h"
#include "Queue.h"
using namespace std;

int main()
{
    LinkedList* a = new LinkedList();
    Node* temp=nullptr;
        
    cout<<"LinkedList functions"<<endl;
    cout<<"Empty: "<< a->isEmpty()<<endl;

    cout<<"Adding 1 to head"<<endl;
    a->addToHead(1);
    a->traverse();

    cout<<"Adding 2 and 3 to tail"<<endl;
    a->addToTail(2);
    a->traverse();
    a->addToTail(3);
    a->traverse();

    cout<<"Adding 5 to head"<<endl;
    a->addToHead(5);
    a->traverse();
     
    cout<<"Removing 5 from head"<<endl;
    a->removeFromHead();
    a->traverse();

    cout<<"Removing 2 from list"<<endl;
    a->remove(2);
    a->traverse();

    cout<<"Retrieving 1"<<endl;
    temp=a->retrieve(1, temp);
    cout<<temp->info<<endl;

    cout<<"Adding 6 after 1"<<endl;
    a->add(6, temp);
    a->traverse();
        
    cout<<"Searching for 3"<<endl;
    cout<<a->search(3)<<endl;
        
    cout<<"Traverse"<<endl;
    a->traverse();
    cout<<endl;

    cout<<"Stack implementation using Linked List"<<endl;
    StackList* s = new StackList();
    
    cout<<"Is Empty: "<<s->isEmpty()<<endl;

    cout<<"Pushing 1,2,3,4"<<endl;
    s->push(1);
    s->push(2);
    s->push(3);
    s->push(4);
    s->print();
    
    cout<<"Pop 2 times"<<endl;
    s->pop();
    s->pop();
    s->print();
    cout<<endl;

    cout<<"Queue implementation using Linked List"<<endl;
    QueueList* q = new QueueList();

    cout<<"Is Empty: "<<q->isEmpty()<<endl;

    cout<<"Enqueue 1,2,3,4"<<endl;
    q->enqueue(1);
    q->enqueue(2);
    q->enqueue(3);
    q->enqueue(4);
    q->print();
    
    cout<<"Dequeue 2 times"<<endl;
    q->dequeue();
    q->dequeue();
    q->print();
}