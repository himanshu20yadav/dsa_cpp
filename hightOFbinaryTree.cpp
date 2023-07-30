#include<iostream>
using namespace std;


struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};

class Solution{
    public:
    //Function to find the height of a binary tree.
    int height(struct Node* node){
        // code here 
        if(node == NULL){
            return 0;
        }
        
        int left = height(node->left);
        int right = height(node->right);
        
        return max(left,right)+1;
        
    }
};

int main(){
    
    Node* node = new Node(15);
    node->left = new Node(10);
    node->right = new Node(20);
    node->left->left = new Node(8);
    node->left->right = new Node(12);
    node->right->left = new Node(16);
    node->right->right = new Node(25);
    Solution ob;
    cout << "The height of the binary tree is " <<ob.height(node);
 
    return 0;
}

   



