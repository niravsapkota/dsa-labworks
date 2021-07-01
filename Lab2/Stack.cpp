#include <iostream>
#include"Stack.h"

template<class T> Stack<T>::Stack(){}

template<class T> bool Stack<T>::isEmpty(){
    return(first<0);
}

template<class T> bool Stack<T>::isFull(){
    return(first>=MAXS-1);
}

template<class T> void Stack<T>::push(T data){
    if(isFull()){
        std::cout<<"Stack Overflow.\n";
    }
    else{
        a[++first]=data;
        std::cout<<data<<" is added to the Stack.\n";
    }
}

template<class T> void Stack<T>::pop(){
    if (isEmpty()){
       std::cout<<"Stack Underflow.\n"; 
    }
    else{
        std::cout<<a[first]<<" is popped from the Stack.\n";
        first--;
    }
}

template<class T> void Stack<T>::top(){
    if (first<0){
       std::cout<<"Stack Underflow.\n"; 
    }
    else{
        std::cout<<"The top element is "<<a[first]<<".\n";
    }
}
