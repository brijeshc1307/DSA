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
  // destructer
  ~Node(){
    int value = this -> data;
      // memory free
    if(this->next != NULL) {
      delete next;
      this->next = NULL;
    }
    cout<<"memory free for "<<value<<endl;
  }
};
void InsertAtHead(Node* &head, int d){
  // Create new node
  Node* temp = new Node(d);
  temp->next=head;
  head=temp;
}

void InsertAtTail(Node* &tail, int d){
  // Create new node
  Node* temp = new Node(d);
  tail->next=temp;
  tail=tail->next;   // tail=temp;// bhi kar sakte h
}

void InsertAtPosition(Node* &head, Node* &tail, int position, int d){
  if(position==1){
    InsertAtHead(head,d);
    return;
  }
  
  Node* temp= head;
  int cnt=1;
  while(cnt<position-1){
    temp=temp->next;
    cnt++;
  }
  if(temp->next==NULL){
    InsertAtTail(tail,d);
    return;
  }
  // Create new node d
  Node* nodetoinsert = new Node(d);
  nodetoinsert->next=temp->next;
  temp->next=nodetoinsert;
}

void print(Node* &head){
  Node* temp = head;
  while(temp != NULL){
    cout<<temp->data<<" ";
    temp=temp->next;
  }
    cout<<endl;
}

void DeletePosition(int position, Node* &head){
 // Deleting first node or start node
  if(position==1){
    Node* temp = head;
    head = head->next;
    // delete memoery nodes
    temp->next=NULL;
    delete temp;
  }
  else{
  Node* curr = head;
  Node* pre = NULL;
  int cnt=1;
  while(cnt<position){
      pre=curr;
      curr=curr->next;
    cnt++;
    }
    pre->next=curr->next;
    curr->next=NULL;
    delete curr;
  }
}

int main() {
    // Create new node
    Node* node1 = new Node(10); 
    cout<<node1->data<<endl;
    cout<<node1->next<<endl;
  // head pointed to node1
  Node* head = node1;
  Node* tail = node1;

  
  print(head);
  InsertAtHead(head, 12);
  InsertAtHead(head, 13);
  InsertAtHead(head, 17);
  print(head);
  InsertAtTail(tail, 20);
  InsertAtTail(tail, 30);
  InsertAtTail(tail, 40);
  print(head);
  InsertAtPosition(head,tail, 8, 100);
  print(head);

  DeletePosition(3,head);
  print(head);
  cout<<head->data<<endl;
  cout<<tail->data<<endl;
    return 0;
}
