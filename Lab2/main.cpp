#include"Stack.cpp"
#include"Queue.cpp"
#include<iostream>
using namespace std;

//size for both stack and queue is set to 5

int main(){
    Stack<double> s;
    
    cout<<"Stack implementation for double:\n";
    
    cout<<"Checking the Stack:\n";
    if(s.isEmpty()){
        cout<<"The stack is empty.\n";
    }
    else{
        cout<<"The stack is not empty.\n";
    }
    
    cout<<"Trying top on the empty stack:\n";
    s.top();
    
    cout<<"Other operations:\n";
    s.push(1.21);
    s.push(1.22);
    s.push(1.23);
    s.push(1.24);
    s.push(1.25);
    
    cout<<"Checking if the stack is full:\n";
    if(s.isFull()){
        cout<<"The stack is full.\n";
    }
    else{
        cout<<"The stack is not full.\n";
    }

    cout<<"Adding element to a full stack: \n";
    s.push(1.26);

    s.top();
    s.pop();
    s.top();
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    
    if(s.isEmpty()){
        cout<<"The stack is empty.\n";
    }
    else{
        cout<<"The stack is not empty.\n";
    }
    

    Queue<float> q;
    cout<<"\nQueue implementation for float:\n";

    cout<<"Checking the queue: \n";
    if(q.isEmpty()){
        cout<<"The queue is empty.\n";
    }
    else{
        cout<<"The queue is not empty.\n";
    }

    cout<<"Trying front and back on the empty queue:\n";
    q.front();
    q.back();
    cout<<"Other operations: \n";
    q.enqueue(6.1);
    q.enqueue(6.2);
    q.enqueue(6.3);
    q.enqueue(6.4);
    q.enqueue(6.5);
    
    cout<<"Checking if the queue is full:\n";
    if(q.isFull()){
        cout<<"The queue is full.\n";
    }
    else{
        cout<<"The queue is not full.\n";
    }

    cout<<"Adding element to a full queue:\n";
    q.enqueue(6.6);

    q.front();
    q.back();
    q.dequeue();
    q.dequeue();
    q.front();
    q.back();
    q.dequeue();
    q.dequeue();
    q.dequeue();

    if(q.isEmpty()){
        cout<<"The queue is empty.\n";
    }
    else{
        cout<<"The queue is not empty.\n";
    }

    return 0;
}