#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

void print(Node*&head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"";
        temp=temp->next;

    }cout<<endl;


    
}
    find_mid(Node* &head,int d){
    int count=0;
    Node* curr = head;
    if(curr==NULL){
          return -1;
    }
    while(curr!=NULL){
        count++;
        curr= curr->next;
    }
    Node* temp= head;
    int x=0;
    if(x!=count/2){
        temp=temp->next;
        x++;
    }
    return temp->data; 


}

int main(){
    Node*node1 = new Node(10);
    Node*head = node1;
    find_mid(head,11);
    find_mid(head,13);
    find_mid(head,14);
    find_mid(head,17);
    
    
    
    
    

}

