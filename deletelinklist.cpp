#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    //constructor
    Node(int data){
        this->data=data;
        this->next = NULL;
    }
    ~Node(){
        int value = this ->data;
        //memory free
        if(this -> next != NULL){
            delete next;
            this->next =NULL;
        }
        cout<<"memory is free for node with data"<<value<<endl;
    }

    };

void InsertAttail(Node* &tail ,int d){
    //new node create
    Node* temp = new Node(d);
    tail->next = temp;
    tail = temp;
}
void insertAtHead(Node* &head ,int d){
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}
void print (Node*&head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp-> data<<" ";
        temp = temp ->next;

    }
    cout<<endl;
}
 void inserAtPosition(Node* &head,Node* &tail,int position,int d){
    
    if(position == 1){
        //starting pos
        insertAtHead(head,d);
        return ;
    }
    Node* temp = head;
    int cnt = 1;
    while(cnt < position-1){
        temp = temp->next;
        cnt++;
    }
    if(temp ->next==NULL){
        InsertAttail(tail,d);
        return;
    }
    
    //creating a node for d
    Node* nodetoinsert = new Node(d);
    nodetoinsert -> next = temp ->next;
    temp -> next = nodetoinsert;
}
void deletetoNode(int position,Node* &head){
    //deleting first or start node
    if(position ==1){
        Node* temp = head;
        head = head -> next;
        //memory free start node
        temp->next =NULL;
        delete temp;
    }
    else{
        //deleting any middle node or last node
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while (cnt < position){
            prev = curr;
            curr = curr -> next;
            cnt++;

        }
        prev->next= curr->next;
        curr ->next = NULL;
        delete curr;
    }
    
    }


int main(){

Node* node1 = new Node(10);
//cout << node1->data<<endl;
//cout << node1->next<<endl;
//head pointed to node1
Node* head = node1;
Node* tail = node1;
print(head);

InsertAttail(tail,12);
print(head);
InsertAttail(tail,15);
print(head);
inserAtPosition(head,tail,4, 22);
print(head);
cout<<"head "<<head->data<<endl;
cout<<"tail "<<tail -> data << endl;

deletetoNode(4,head);
print(head);

return 0;
}