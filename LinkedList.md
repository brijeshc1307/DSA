## Linked List

A **Linked List** is a **linear data structure** where elements are stored in **nodes**, and each node points to the next node using a pointer. Unlike arrays, the elements are not stored in contiguous memory locations.

Each node contains:

* **Data**: The value stored.
* **Pointer**: A reference to the next node.

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
