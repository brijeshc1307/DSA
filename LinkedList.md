## Linked List

A **Linked List** is a **linear data structure** where elements are stored in **nodes**, and each node points to the next node using a pointer. Unlike arrays, the elements are not stored in contiguous memory locations.
>Linked list is a linear data structure and it is collection of nodes and each node points to the next node using a pointer. A node is store Data, Address of next node. 


Each node contains:

* **Data**: The value stored.
* **Pointer**: A reference to the next node.


```
10 -> 20 -> 30 -> NULL
```
```cpp
#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    
    Node(int data){
        this->data = data;
        this->next=NULL;
    }
    
};

int main() {
    Node* node1 = new Node(10);
    cout<<"Data"<<node1->data<<endl;
    cout<<"Address"<<node1->next<<endl;

}
```
Output
```
Data 10
Address 0x0
```

---

##  Types of Linked List

1. **Singly Linked List**

   * Each node points to the next node.
   * Traversal: Only forward.

2. **Doubly Linked List**

   * Each node points to both previous and next nodes.
   * Traversal: Forward and backward.

3. **Circular Linked List**

   * The last node points back to the first node.
   * Can be singly or doubly circular.

---

##  Real-Life Analogy

> **Train Coaches**
>
> * Each coach (node) has people (data) and a connector to the next coach (pointer).
> * A passenger can walk from one coach to the next but cannot randomly jump to any coach (like arrays).

---

##  Singly Linked List Example in C++
  >Exapmle: 10 -> 12 -> 15 -> NULL
```
#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    
    Node(int data){
        this->data = data;
        this->next=NULL;
    }
    
};

void insertAtTail(Node* &tail, int d){
        // new node create
        Node* temp = new Node(d);
        tail -> next = temp;
        tail = temp;
    }
        
    void print(Node* head) {
        Node* temp= head;
        while (temp != NULL ) {
        cout<<temp->data<<" "; 
        temp = temp->next;
        }
    cout<<endl;

    }

int main() {
	Node* node1 = new Node(10);
	
	Node* head = node1;
    Node* tail = node1;

    print(head);
    
    insertAtTail(tail, 12);
    print(head);
    
    insertAtTail (tail, 15);
    print(head) ;


}
```
Output
```
10 
10 12 
10 12 15 
```
Using Structre
```cpp
#include <iostream>
using namespace std;

// Node definition
struct Node {
    int data;
    Node* next;

    // Constructor
    Node(int val) {
        data = val;
        next = nullptr;
    }
};

// Function to print the list
void printList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL\n";
}

// Insert at end
void insertEnd(Node*& head, int val) {
    Node* newNode = new Node(val);
    if (head == nullptr) {
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp->next != nullptr)
        temp = temp->next;
    temp->next = newNode;
}

int main() {
    Node* head = nullptr;

    insertEnd(head, 10);
    insertEnd(head, 20);
    insertEnd(head, 30);

    printList(head);  // Output: 10 -> 20 -> 30 -> NULL

    return 0;
}
```
---

Here’s a complete overview of the **basic operations in a Singly Linked List** along with C++ code snippets for each.

---

## Singly Linked List Operations

### 1. **Insert Operations**

#### a) Insert at the Beginning/ Head

```cpp
void insertAtHead(Node* &head, int val) {
    Node* temp = new Node(val);
    temp -> next = head;
    head = temp;
}
```

#### b) Insert at the End/ Tail
Using Tail
```cpp
void insertAtTail(Node* &tail, int d){
        // new node create
        Node* temp = new Node(d);
        tail -> next = temp;
        tail = temp;
    }
```

Using Head
```cpp
void insertAtTail(Node* &head, int val) {
    Node* temp = new Node(val);
    if (head == nullptr) {
        head = temp;
        return;
    }
    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = temp;
}
```

#### c) Insert at a Given Position (0-based index)

```cpp
void insertAtPosition(Node* &head, int pos, int val) {
    if (pos == 0) {
        insertAtHead(head, val);
        return;
    }
    Node* newNode = new Node(val);
    Node* temp = head;
    for (int i = 0; i < pos - 1 && temp != nullptr; i++) {
        temp = temp->next;
    }
    if (temp == nullptr) return;
    newNode->next = temp->next;
    temp->next = newNode;
}
```

---

### 2. **Delete Operations**

#### a) Delete at Beginning

```cpp
void deleteAtBeginning(Node* &head) {
    if (head == nullptr) return;
    Node* temp = head;
    head = head->next;
    delete temp;
}
```

#### b) Delete at End

```cpp
void deleteAtEnd(Node* &head) {
    if (head == nullptr) return;
    if (head->next == nullptr) {
        delete head;
        head = nullptr;
        return;
    }
    Node* temp = head;
    while (temp->next->next != nullptr) {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = nullptr;
}
```

#### c) Delete at a Given Position

```cpp
void deleteAtPosition(Node* &head, int pos) {
    if (pos == 0) {
        deleteAtBeginning(head);
        return;
    }
    Node* temp = head;
    for (int i = 0; i < pos - 1 && temp != nullptr; i++) {
        temp = temp->next;
    }
    if (temp == nullptr || temp->next == nullptr) return;
    Node* delNode = temp->next;
    temp->next = temp->next->next;
    delete delNode;
}
```

---

### 3. **Search Operation**

```cpp
bool search(Node* head, int key) {
    Node* temp = head;
    while (temp != nullptr) {
        if (temp->data == key) return true;
        temp = temp->next;
    }
    return false;
}
```

---

### 4. **Display the List**

```cpp
void printList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
```

---

### Node Structure (Common for All Operations)

```cpp
class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};
```

---

### Common Flow in `main()` (C++)

```cpp
int main() {
    Node* head = nullptr;

    insertAtEnd(head, 10);
    insertAtBeginning(head, 5);
    insertAtEnd(head, 20);
    insertAtPosition(head, 1, 15);

    printList(head);

    deleteAtPosition(head, 2);
    printList(head);

    cout << (search(head, 15) ? "Found" : "Not Found") << endl;

    return 0;
}
```

---
---

##  Doubly Linked List (Structure Only)

```cpp
struct DNode {
    int data;
    DNode* prev;
    DNode* next;

    DNode(int val) {
        data = val;
        prev = next = nullptr;
    }
};
```

---

##  Circular Linked List (Concept)

```cpp
// Last node’s next points to head
last->next = head;
```

---
---
```cpp
#include<iostream>
#include<map>
using namespace std;

class Node {

    public:
    int data;
    Node* next;

    //constructor
    Node(int data) {
        this -> data = data;
        this -> next = NULL;
    }

    //destructor
    ~Node() {
        int value = this -> data;
        //memory free
        if(this->next != NULL) {
            delete next;
            this->next = NULL;
        }
        cout << " memory is free for node with data " << value << endl;
    }

};

void insertAtHead(Node* &head, int d) {

    // new node create
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}

void insertAtTail(Node* &tail, int d) {
     // new node create
    Node* temp = new Node(d);
    tail -> next = temp;
    tail  = temp;
}

void print(Node* &head) {

    if(head == NULL) {
        cout << "List is empty "<< endl;
        return ;
    }
    Node* temp = head;

    while(temp != NULL ) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

void insertAtPosition(Node* &tail, Node* & head, int position, int d) {


    //insert at Start
    if(position == 1) {
        insertAtHead(head, d);
        return;
    }

    Node* temp  = head;
    int cnt = 1;

    while(cnt < position-1) {
        temp = temp->next;
        cnt++;
    }

    //inserting at Last Position
    if(temp -> next == NULL) {
        insertAtTail(tail,d);
        return ;
    }

    //creating a node for d
    Node* nodeToInsert = new Node(d);

    nodeToInsert -> next = temp -> next;

    temp -> next = nodeToInsert;
}

void deleteNode(int position, Node* & head) { 

    //deleting first or start node
    if(position == 1) {
        Node* temp = head;
        head = head -> next;
        //memory free start ndoe
        temp -> next = NULL;
        delete temp;
    }
    else
    {
        //deleting any middle node or last node
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt < position) {
            prev = curr;
            curr = curr -> next;
            cnt++;
        }

        prev -> next = curr -> next;
        curr -> next  = NULL;
        delete curr;

    }
}

bool isCircularList(Node* head) {
    //empty list
    if(head == NULL) {
        return true;
    }

    Node* temp = head -> next;
    while(temp != NULL && temp != head ) {
        temp = temp -> next;
    }

    if(temp == head ) {
        return true;
    }

    return false;
}


bool detectLoop(Node* head) {

    if(head == NULL)
        return false;

    map<Node*, bool> visited;

    Node* temp = head;

    while(temp !=NULL) {

        //cycle is present
        if(visited[temp] == true) {
            cout << "Present on element " << temp->data << endl;
            return true;
        }

        visited[temp] = true;
        temp = temp -> next;

    }
    return false;

}

Node* floydDetectLoop(Node* head) {

    if(head == NULL)
        return NULL;

    Node* slow = head;
    Node* fast = head;

    while(slow != NULL && fast !=NULL) {
        
        fast = fast -> next;
        if(fast != NULL) {
            fast = fast -> next;
        }

        slow = slow -> next;

        if(slow == fast) {
            cout << "present at " << slow -> data << endl;
            return slow;
        }
    }

    return NULL;

}

Node* getStartingNode(Node* head) {

    if(head == NULL) 
        return NULL;

    Node* intersection = floydDetectLoop(head);
    Node* slow = head;

    while(slow != intersection) {
        slow = slow -> next;
        intersection = intersection -> next;
    }  

    return slow;

}

void removeLoop(Node* head) {

    if( head == NULL)
        return;

    Node* startOfLoop = getStartingNode(head);
    Node* temp = startOfLoop;

    while(temp -> next != startOfLoop) {
        temp = temp -> next;
    } 

    temp -> next = NULL;

}


int main() {
    
    //created a new node
    Node* node1 = new Node(10);
    //cout << node1 -> data << endl;
   // cout << node1 -> next << endl;
    
    //head pointed to node1
    Node* head = node1; 
    Node* tail = node1;
    //print(head);

    insertAtTail(tail, 12);

    //print(head);
    
    insertAtTail(tail, 15);
    //print(head);

    insertAtPosition(tail,head, 4, 22);
    //print(head);    

    //cout << "head " << head -> data << endl;
    //cout << "tail " << tail -> data << endl;

    //deleteNode(4, head);
    

    tail -> next = head ->next;

    cout << "head " << head -> data << endl;
    cout << "tail " << tail -> data << endl;
    //print(head);

    if(floydDetectLoop(head) != NULL) {
        cout << "Cycle is present " << endl;
    }
    else
    {
        cout << "no cycle" << endl;
    }

    Node* loop = getStartingNode(head);

    cout << "loop starts at " << loop -> data  << endl;

    removeLoop(head);
    print(head);

    /*
    print(head);

    if(isCircularList(head)) {
        cout << " Linked List is Circular in nature" << endl;
    }
    else{
        cout << "Linked List is not Circular " << endl;
    }
    */


    return 0;
}
```

---

##  Advantages of Linked List

* Dynamic size (no need to define size beforehand)
* Easy insertion/deletion (no shifting)

---

##  Disadvantages

* No random access (unlike arrays)
* Extra memory for pointers
* Sequential access only (except in doubly linked list)

---

Would you like examples of **insertion, deletion, or search** operations too?
