#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    //constructor
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
    //destructor
    ~Node(){
        int value = this ->data;
        //memory free
        if(this->next!=NULL){
            delete next;
            this ->next = NULL;
        }
        cout<<"meemory is free for node with data "<<value << endl;
    }

};
void InsertAtHead(Node* &head,int d){
    Node* temp = new Node(d);
    temp -> next = head;
    head=temp;
}
void InsertAtTail(Node* &tail,int d){
    Node* temp= new Node(d);
    tail->next=temp;
    tail =tail->next;//temp
    
}
void print(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;

    }
    cout<<endl;
    

}
void insertAtPosition(Node* &tail,Node* & head,int position,int d){
    if(position == 1){
        InsertAtHead(head,d);
        return;
    }
    Node* temp = head;
    int cnt =1;


    while(cnt < position-1){
        temp = temp->next;
        cnt++;

    }
    //inseting at last position 
    if(temp->next == NULL){
        InsertAtTail(tail,d);
        return ;
    }

    //creating a node for d
    Node* nodeToInsert= new Node(d);
    nodeToInsert->next=temp->next;
    temp->next=nodeToInsert ;

}
void deleteNode(int position,Node* &head){
    if(position == 1){
        Node* temp = head;
        head=head->next;
        //memory free start node
        temp -> next = NULL;
        delete temp;
    }
    else{
         Node* curr = head;
         Node* prev = NULL;
         int cnt = 1;
         while(cnt < position){
            prev = curr;
            curr = curr -> next;

            cnt++;

         }
         prev->next = curr->next;
         curr-> next =NULL;
         delete curr;
    }
}

int main(){
//created a new node
Node*node1 = new Node(10);
//cout<<node1->data<<endl;
//cout<<node1->next<<endl;
//head pointer to node1
Node* head = node1;
Node* tail = node1;
print(head);
//InsertAtHead(head,12);
InsertAtTail(tail,12);
print(head);
InsertAtTail(tail,15);
print(head);
insertAtPosition(tail,head,4,22);
print(head);
cout<<"head "<<head -> data<<endl;
cout<<"tail "<<head -> data<<endl;

deleteNode(1,head);
print(head);
return 0;

}