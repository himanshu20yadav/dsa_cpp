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
inserAtPosition(head,tail,2, 22);
print(head);
cout<<"head "<<head->data<<endl;
cout<<"tail "<<tail -> data << endl;



return 0;
}