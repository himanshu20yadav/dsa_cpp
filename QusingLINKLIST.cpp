#include<iostream>
using namespace std;

class Node
{
public:
  int data;
  Node *next;
};

void enqueue (Node ** head, int data)
{

  Node *new_node = new Node ();

  // assign data value
  new_node->data = data;
  // change the next node of this new_node 
  // to current head of Linked List
  new_node->next = *head;

  //changing the new head to this newly entered node
  *head = new_node;

}

void dequeue (Node ** head)
{
  Node *temp = *head;

  // if there are no nodes in Linked List can't delete
  if (*head == NULL)
    {
      cout << ("Linked List Empty, nothing to delete");
      return;
    }

  // move head to next node
  *head = (*head)->next;
  //cout<< ("Deleted: %d\n", temp->data);
  delete (temp);
}

void display (Node * node)
{

  //as linked list will end when Node is Null
  while (node != NULL)
    {
      cout << node->data << " ";
      node = node->next;
    }
  cout << endl;
}

int main ()
{

  Node *head = NULL;

  enqueue (&head, 10);
  enqueue (&head, 11);
  enqueue (&head, 12);
  enqueue (&head, 13);
  enqueue (&head, 14);
  enqueue (&head, 15);
  enqueue (&head, 16);
  enqueue (&head, 17);
  enqueue (&head, 18);
  cout << "Queue before deletion: ";
  display (head);
  dequeue (&head);
  cout << endl << "Queue after deletion: ";
  display (head);
  return 0;
}