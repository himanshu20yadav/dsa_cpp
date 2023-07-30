#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* link;
    Node(int n){
        this->data=n;
        this->link=NULL;
    }

};

class Stack{
    Node* top;
    public:
    Stack(){
        top=NULL;
    }
    void push(int data){
        Node* temp = new Node(data);
        if(!temp){
            cout<<"\n stack overflow";
            exit(1);
        }
        temp->data=data;
        temp->link=top;
        top=temp;
    }

    bool isempty(){
        return top==NULL;

    }
    int peek(){
        if(! isempty()){
            return  top->data;}
        else{
                exit(1);
            }
        }
    
    void pop(){
        Node*temp;
        if(top==NULL){
            cout<<"\n stack Underflow"<<endl;
            exit(1);
        }
        else{
            temp = top;
            top = top->link;
            free(temp);

        }
    }

    void display(){
        Node* temp;

        if(top==NULL){
            cout<<"\n stack Underflow";
            exit(1);
        }
        else{
            temp =top;
            while(temp!=NULL){
                cout<<temp->data;
                temp =temp->link;
                if(temp!=NULL){
                    cout<< " -> " ;
                }
            }
        }
    }
};

int main(){
    Stack s;
    s.push(11);
    s.push(22);
    s.push(33);
    s.push(44);
    s.display();

    cout<<"\n Top element is "<<s.peek()<<endl;
    s.pop();
    s.pop();
    s.display();

    cout<<"n Top element is "<<s. peek()<<endl;
    return 0;

}