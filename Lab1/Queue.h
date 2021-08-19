#include"LinkedList.h"

class QueueList{
    private:
    LinkedList list;

    public:
    bool isEmpty(){
        return list.isEmpty();
    }

    void enqueue(int data){
        list.addToTail(data);
    }

    void dequeue(){
        list.removeFromHead();
    }

    // For output demonstration
    void print(){
        list.traverse();
    }
};