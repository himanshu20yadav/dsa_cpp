#include<iostream>
using namespace std;

class circularQueue{
    int *arr;
    int front;
    int rear;
    int size;

    public:

    circularQueue(int n){
        size = n;
        arr = new int[size];
        front = rear = -1;
    }

    bool enqueue(int value){
        //to check whther queue is full
        if((front == 0 && rear == size-1 )||(rear == (front-1)%(size-1))){
           // cout<<"Queue is full";
            return false;
        }
        else if(front == -1)//first element to push
        {
            front = rear =0;
          
        }
        else if(rear == size-1 && front != 0){
            rear = 0;//to maintain cyclic nature
        }
        else{//normal flow
            rear++;
            
        }
        //push inside the queue
          arr[rear]= value;
          return true;
    }
int dequeue(){
    if(front == -1){//to check queue is empty
        //cout << "Queue is Empty "<< endl;
        return -1;
    }
    int ans = arr[front];
    arr[front]= -1;
    if(front == rear){
        front = rear = -1;
    }
    else if(front == size -1){
        front = 0; //to maintain cyclic nature
    }
    else{
        front++;
    }
    return ans;
}
};