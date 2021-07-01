#ifndef STACK_H
#define STACK_H
#define MAXS 5  //size of stack is 5

template<class T>
class Stack{
    private:
        int first=-1;
        T a[MAXS];
    
    public:
        Stack();
        
        void push(T data);
        void pop();
        bool isEmpty();
        bool isFull();
        void top();
};

#endif