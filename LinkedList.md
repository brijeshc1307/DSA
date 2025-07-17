## Linked List

A **Linked List** is a **linear data structure** where elements are stored in **nodes**, and each node points to the next node using a pointer. Unlike arrays, the elements are not stored in contiguous memory locations.
>Linked list is a linear data structure and it is collection of nodes and each node points to the next node using a pointer. A node is store Data, Address of next node. 


Each node contains:

* **Data**: The value stored.
* **Pointer**: A reference to the next node.

Note:
* head: Points to the first node in the linked list.
* head->next: Points to the second node.
* head->next->next: Points to the third node.



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
Output
```
head 10
tail 22
present at 22
Cycle is present 
present at 22
loop starts at 12
present at 22
10 12 15 22 
```

---

##  Doubly Linked List 
Using class
```cpp
class Node {
public:
    int data;
    Node* prev;
    Node* next;

    Node(int val) {
        data = val;
        prev = nullptr;
        next = nullptr;
    }
};
```
Using structure
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

## Code for Doubly Linked List

```cpp
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* prev;
    Node* next;

    Node(int val) {
        data = val;
        prev = nullptr;
        next = nullptr;
    }
};

class DoublyLinkedList {
private:
    Node* head;
    Node* tail;

public:
    DoublyLinkedList() {
        head = nullptr;
        tail = nullptr;
    }

    // 1. Insert at beginning
    void insertAtBeginning(int val) {
        Node* newNode = new Node(val);
        if (!head) {
            head = tail = newNode;
        } else {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }

    // 2. Insert at end
    void insertAtEnd(int val) {
        Node* newNode = new Node(val);
        if (!tail) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    // 3. Insert at a given position (1-based index)
    void insertAtPosition(int pos, int val) {
        if (pos <= 1) {
            insertAtBeginning(val);
            return;
        }

        Node* temp = head;
        int count = 1;

        while (temp && count < pos - 1) {
            temp = temp->next;
            count++;
        }

        if (!temp || !temp->next) {
            insertAtEnd(val);
            return;
        }

        Node* newNode = new Node(val);
        newNode->next = temp->next;
        newNode->prev = temp;
        temp->next->prev = newNode;
        temp->next = newNode;
    }

    // 4. Delete from beginning
    void deleteAtBeginning() {
        if (!head) return;
        Node* temp = head;
        if (head == tail) {
            head = tail = nullptr;
        } else {
            head = head->next;
            head->prev = nullptr;
        }
        delete temp;
    }

    // 5. Delete from end
    void deleteAtEnd() {
        if (!tail) return;
        Node* temp = tail;
        if (head == tail) {
            head = tail = nullptr;
        } else {
            tail = tail->prev;
            tail->next = nullptr;
        }
        delete temp;
    }

    // 6. Delete at a given position (1-based index)
    void deleteAtPosition(int pos) {
        if (!head) return;
        if (pos == 1) {
            deleteAtBeginning();
            return;
        }

        Node* temp = head;
        int count = 1;

        while (temp && count < pos) {
            temp = temp->next;
            count++;
        }

        if (!temp) return;

        if (temp == tail) {
            deleteAtEnd();
            return;
        }

        temp->prev->next = temp->next;
        temp->next->prev = temp->prev;
        delete temp;
    }

    // 7. Search a value
    bool search(int key) {
        Node* temp = head;
        while (temp) {
            if (temp->data == key) return true;
            temp = temp->next;
        }
        return false;
    }

    // 8. Print list forward
    void printForward() {
        Node* temp = head;
        while (temp) {
            cout << temp->data << " <-> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    // 9. Print list backward
    void printBackward() {
        Node* temp = tail;
        while (temp) {
            cout << temp->data << " <-> ";
            temp = temp->prev;
        }
        cout << "NULL" << endl;
    }

    // Destructor
    ~DoublyLinkedList() {
        while (head) {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
    }
};
```

---

### Sample Usage:

```cpp
int main() {
    DoublyLinkedList dll;

    dll.insertAtEnd(10);
    dll.insertAtBeginning(5);
    dll.insertAtEnd(20);
    dll.insertAtPosition(2, 15);

    cout << "Forward: ";
    dll.printForward();

    cout << "Backward: ";
    dll.printBackward();

    dll.deleteAtPosition(2);
    dll.printForward();

    cout << (dll.search(20) ? "Found" : "Not Found") << endl;

    return 0;
}
```

---

### Output

```
Forward: 5 <-> 15 <-> 10 <-> 20 <-> NULL
Backward: 20 <-> 10 <-> 15 <-> 5 <-> NULL
Forward: 5 <-> 10 <-> 20 <-> NULL
Found
```
---

```cpp
#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* prev;
    Node* next;

    //constructor
    Node(int d ) {
        this-> data = d;
        this->prev = NULL;
        this->next = NULL;
    }

    ~Node() {
        int val = this -> data;
        if(next != NULL) {
            delete next;
            next = NULL;
        }
        cout << "memory free for node with data "<< val << endl;
    }
};

//traversing a linked list
void print(Node* head) {
    Node* temp  = head ;

    while(temp != NULL) {
        cout << temp -> data << " ";
        temp  = temp -> next;
    }
    cout << endl;
}

//gives length of Linked List
int getLength(Node* head) {
    int len = 0;
    Node* temp  = head ;

    while(temp != NULL) {
        len++;
        temp  = temp -> next;
    }

    return len;
}
void insertAtHead(Node* &tail, Node* &head, int d) {

    //empty list
    if(head == NULL) {
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else{
        Node* temp = new Node(d);
        temp -> next = head;
        head -> prev = temp;
        head = temp;
    }

}


void insertAtTail(Node* &tail,Node* &head, int d) {
    if(tail == NULL) {
        Node* temp = new Node(d);
        tail = temp;
        head = temp;
    }
    else{
        Node* temp = new Node(d);
        tail -> next  = temp;
        temp -> prev = tail;
        tail = temp;
    }

}

void insertAtPosition(Node* & tail, Node* &head, int position, int d) {
    
    //insert at Start
    if(position == 1) {
        insertAtHead(tail,head, d);
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
        insertAtTail(tail,head,d);
        return ;
    }

    //creating a node for d
    Node* nodeToInsert = new Node(d);

    nodeToInsert ->next = temp -> next;
    temp -> next -> prev = nodeToInsert;
    temp -> next = nodeToInsert;
    nodeToInsert -> prev = temp;
}

void deleteNode(int position, Node* & head) { 

    //deleting first or start node
    if(position == 1) {
        Node* temp = head;
        temp -> next -> prev = NULL;
        head = temp ->next;
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

        curr -> prev = NULL;
        prev -> next = curr -> next;
        curr -> next = NULL;

        delete curr;

    }
}

int main() {


    Node* head = NULL;
    Node* tail = NULL;

    print(head);
    //cout << getLength(head) << endl;

    insertAtHead(tail,head, 11);
    print(head);
    cout << "head  " << head -> data << endl;
    cout << "tail  " << tail -> data << endl;

    insertAtHead(tail,head, 13);
    print(head);
    cout << "head  " << head -> data << endl;
    cout << "tail  " << tail -> data << endl;

    insertAtHead(tail,head, 8);
    print(head);
    cout << "head  " << head -> data << endl;
    cout << "tail  " << tail -> data << endl;

    insertAtTail(tail,head, 25);
    print(head);
    cout << "head  " << head -> data << endl;
    cout << "tail  " << tail -> data << endl;

    insertAtPosition(tail, head, 2, 100);
    print(head);
    cout << "head  " << head -> data << endl;
    cout << "tail  " << tail -> data << endl;

    insertAtPosition(tail, head, 1, 101);
    print(head);

    cout << "head  " << head -> data << endl;
    cout << "tail  " << tail -> data << endl;

    insertAtPosition(tail, head, 7, 102);
    print(head);
    cout << "head  " << head -> data << endl;
    cout << "tail  " << tail -> data << endl;

    deleteNode(7, head);
    print(head);
    cout << "head  " << head -> data << endl;
    cout << "tail  " << tail -> data << endl;


    return 0;
}
```
Output
```
11 
head  11
tail  11
13 11 
head  13
tail  11
8 13 11 
head  8
tail  11
```

---

##  Circular Linked List (Concept)

```cpp
// Last node’s next points to head
last->next = head;
```
```cpp
#include<iostream>
#include<map>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    //constrcutor
    Node(int d) {
        this->data = d;
        this->next = NULL;
    }

    ~Node() {
        int value = this->data;
        if(this->next != NULL) {
            delete next;
            next = NULL;
        }
        cout << " memory is free for node with data " << value << endl;
    }

};

void insertNode(Node* &tail, int element, int d) {
    

    //empty list
    if(tail == NULL) {
        Node* newNode = new Node(d);
        tail = newNode;
        newNode -> next = newNode;
    }
    else{
        //non-empty list
        //assuming that the element is present in the list

        Node* curr = tail;

        while(curr->data != element) {
            curr = curr -> next;
        }
        
        //element found -> curr is representing element wala node
        Node* temp = new Node(d);
        temp -> next = curr -> next;
        curr -> next = temp;

    }

}    

void print(Node* tail) {

    Node* temp = tail;

    //empty list
    if(tail == NULL) {
        cout << "List is Empty "<< endl;
        return ;
    }

    do {
        cout << tail -> data << " ";
        tail = tail -> next;
    } while(tail != temp);

    cout << endl;
} 

void deleteNode(Node* &tail, int value) {

    //empty list
    if(tail == NULL) {
        cout << " List is empty, please check again" << endl;
        return;
    }
    else{
        //non-empty

        //assuming that "value" is present in the Linked List
        Node* prev = tail;
        Node* curr = prev -> next;

        while(curr -> data != value) {
            prev = curr;
            curr = curr -> next;
        }

        prev -> next = curr -> next;

        //1 Node Linked List
        if(curr == prev) {
            tail = NULL;
        }

        //>=2 Node linked list
        else if(tail == curr ) {
            tail = prev;
        }

        curr -> next = NULL;
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
            return true;
        }

        visited[temp] = true;
        temp = temp -> next;

    }
    return false;

}


int main() {

    Node* tail = NULL;

   // insertNode(tail, 5, 3);
    //print(tail);

  //  insertNode(tail, 3, 5);
   // print(tail);

/*
    insertNode(tail, 5, 7);
    print(tail);

    insertNode(tail, 7, 9);
    print(tail);

    insertNode(tail, 5, 6);
    print(tail);
    
    insertNode(tail, 9, 10);
    print(tail);

    insertNode(tail, 3, 4);
    print(tail);
   

    deleteNode(tail, 5);
    print(tail);
     */

    if(isCircularList(tail)) {
        cout << " Linked List is Circular in nature" << endl;
    }
    else{
        cout << "Linked List is not Circular " << endl;
    }

    return 0;
}
```
Output
```
Linked List is Circular in nature
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
