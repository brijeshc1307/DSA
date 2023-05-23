#include <iostream>
#include <limits.h>
using namespace std;

class Node{
  public:
    int data;
    Node* next;
  // Coustructer
  Node(int data){
    this->data = data;
    this->next = NULL;
  }
};
void InsertAtHead(Node* &head, int d){
  // Create new node
  Node* temp = new Node(d);
  temp->next=head;
  head=temp;
}

void print(Node* &head){
  Node* temp = head;
  while(temp != NULL){
    cout<<temp->data<<" ";
    temp=temp->next;
  }
    cout<<endl;
}

int main() {
    // Create new node
    Node* node1 = new Node(10); 
    cout<<node1->data<<endl;
    cout<<node1->next<<endl;
  // head pointed to node1
  Node* head = node1;
  print(head);
  InsertAtHead(head, 12);
  InsertAtHead(head, 13);
  InsertAtHead(head, 17);
  print(head);
    return 0;
}
