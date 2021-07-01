#include<iostream>
#include"Queue.h"

template<class X> Queue<X>::Queue(){}

template<class X> bool Queue<X>::isEmpty(){
    return(top<0);
}

template<class X> bool Queue<X>::isFull(){
    return(rear>=MAXQ-1);
}

template<class X> void Queue<X>::enqueue(X data){
    if(isFull()){
        std::cout<<"Queue Overflow.\n";
    }
    else {
        if(top==-1){
            top++;
        }
        a[++rear]=data;
        std::cout<<data<<" is added to the queue.\n";
    }
}

template<class X> void Queue<X>::dequeue(){
    if(isEmpty()){
        std::cout<<"Queue Underflow.\n";
    }
    else{
        std::cout<<a[top]<<" is removed from the queue.\n";
        int i;
        for(i=0; i<=rear; i++){
            a[i]=a[i+1];
        }
        rear--;
        if(rear==-1){
            top=-1;
        }
    }
}

template<class X> void Queue<X>::front(){
    if(isEmpty()){
        std::cout<<"Queue Underflow.\n";
    }
    else{
        std::cout<<"The front element is "<<a[top]<<".\n";
    }
}

template<class X> void Queue<X>::back(){
    if(isEmpty()){
        std::cout<<"Queue Underflow.\n";
    }
    else{
        std::cout<<"The rear element is "<<a[rear]<<".\n";
    }
}