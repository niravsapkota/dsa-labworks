#ifndef QUEUE_H
#define QUEUE_H
#define MAXQ 5  //size of queue is 5

template<class X>
class Queue{
    private:
        int top=-1;
        int rear=-1;
        X a[MAXQ];
    
    public:
        Queue();

        void enqueue(X data);
        void dequeue();
        bool isEmpty();
        bool isFull();
        void front();
        void back();
};
#endif