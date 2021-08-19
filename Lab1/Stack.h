#include"LinkedList.h"

class StackList{
    private:
    LinkedList list;
    
    public:
    bool isEmpty(){
        return list.isEmpty(); 
    }
    
    void push(int data){
        list.addToHead(data);
    }
    
    void pop(){
        list.removeFromHead();
    }

    // For output demonstration
    void print(){
        list.traverse();
    }
};