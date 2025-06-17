## Stack

A **Stack** is a **linear data structure** that follows the **LIFO** (Last In, First Out) principle.
This means the last element added is the first one to be removed.

### 🔑 Core Operations:

* `push()` → Add item to top
* `pop()` → Remove item from top
* `top()` or `peek()` → View top item
* `isEmpty()` → Check if stack is empty
* `size()` → Number of elements in stack

---

## 🔹 Types of Stack (Implementation-wise)

| Type                        | Description                                  |
| --------------------------- | -------------------------------------------- |
| **Array-based Stack**       | Uses a static or dynamic array to store data |
| **Linked List-based Stack** | Uses nodes and pointers (dynamic memory)     |
| **Stack using STL**         | Uses `std::stack` from C++ Standard Library  |

---

## 🔹 Real-Life Example

> **Stack of Plates** 🍽️
>
> * Plates are added (pushed) on top
> * You remove the top plate first (pop)
> * You can only access the top one

---

## 🔹 Stack using Array (C++)

```cpp
#include <iostream>
using namespace std;

#define MAX 1000

class Stack {
    int top;
    int arr[MAX];

public:
    Stack() { top = -1; }

    bool push(int x) {
        if (top >= (MAX - 1)) {
            cout << "Stack Overflow\n";
            return false;
        }
        arr[++top] = x;
        return true;
    }

    int pop() {
        if (top < 0) {
            cout << "Stack Underflow\n";
            return -1;
        }
        return arr[top--];
    }

    int peek() {
        if (top < 0) {
            cout << "Stack is Empty\n";
            return -1;
        }
        return arr[top];
    }

    bool isEmpty() {
        return (top < 0);
    }
};

int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout << "Top: " << s.peek() << endl;  // Output: 30
    cout << "Popped: " << s.pop() << endl; // Output: 30
    cout << "Top now: " << s.peek() << endl; // Output: 20
    return 0;
}
```

---

## 🔹 Stack using Linked List

```cpp
struct Node {
    int data;
    Node* next;
};

class Stack {
    Node* top;

public:
    Stack() { top = nullptr; }

    void push(int x) {
        Node* temp = new Node();
        temp->data = x;
        temp->next = top;
        top = temp;
    }

    int pop() {
        if (!top) {
            cout << "Stack Underflow\n";
            return -1;
        }
        int x = top->data;
        Node* temp = top;
        top = top->next;
        delete temp;
        return x;
    }

    int peek() {
        return top ? top->data : -1;
    }

    bool isEmpty() {
        return top == nullptr;
    }
};
```

---

## 🔹 Stack using STL

```cpp
#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> s;
    s.push(5);
    s.push(10);
    s.push(15);

    cout << "Top: " << s.top() << endl;  // Output: 15
    s.pop();
    cout << "Now Top: " << s.top() << endl;  // Output: 10

    return 0;
}
```

---

## 🔹 Summary

| Property      | Stack                      |
| ------------- | -------------------------- |
| Access        | LIFO (Last In, First Out)  |
| Insert/Remove | Only from the top          |
| Real Use      | Undo feature, backtracking |
| C++ Support   | Array, Linked List, STL    |

---

---

## Queue

A **Queue** is a **linear data structure** that follows the **FIFO** (First In, First Out) principle.
The element inserted **first** is removed **first**.

### 🔑 Core Operations:

* `enqueue()` → Add element at the rear (tail)
* `dequeue()` → Remove element from the front (head)
* `front()` → Access front element
* `isEmpty()` → Check if empty
* `size()` → Total elements

---

## 🔹 Real-Life Example

> **Queue at Ticket Counter 🎫**
>
> * First person to enter the line gets the ticket first
> * New people join at the end (rear)
> * Only front person is served (FIFO)

---

## 🔹 Types of Queue

| Type               | Description                                                      |
| ------------------ | ---------------------------------------------------------------- |
| **Simple Queue**   | Standard FIFO behavior                                           |
| **Circular Queue** | Last position connects back to first to form a circle            |
| **Deque**          | Double Ended Queue; insertion and deletion possible at both ends |
| **Priority Queue** | Elements served based on priority, not arrival order             |

---

## 🔹 Simple Queue Using Array (C++)

```cpp
#include <iostream>
#define SIZE 100
using namespace std;

class Queue {
    int arr[SIZE];
    int front, rear;

public:
    Queue() {
        front = 0;
        rear = -1;
    }

    void enqueue(int val) {
        if (rear == SIZE - 1) {
            cout << "Queue Overflow\n";
            return;
        }
        arr[++rear] = val;
    }

    void dequeue() {
        if (front > rear) {
            cout << "Queue Underflow\n";
            return;
        }
        front++;
    }

    int getFront() {
        if (front > rear) return -1;
        return arr[front];
    }

    bool isEmpty() {
        return front > rear;
    }
};

int main() {
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    cout << "Front: " << q.getFront() << endl; // 10
    q.dequeue();
    cout << "New Front: " << q.getFront() << endl; // 20
    return 0;
}
```

---

## 🔹 Circular Queue (Brief Idea)

Avoid wasting space in array by wrapping rear to front when space is available.

```cpp
rear = (rear + 1) % size;
front = (front + 1) % size;
```

---

## 🔹 Queue using STL

```cpp
#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;

    q.push(1);
    q.push(2);
    q.push(3);

    cout << "Front: " << q.front() << endl; // 1
    q.pop();
    cout << "Now Front: " << q.front() << endl; // 2
}
```

---

## 🔹 Priority Queue using STL

```cpp
#include <queue>
#include <iostream>
using namespace std;

int main() {
    priority_queue<int> pq; // max-heap by default
    pq.push(50);
    pq.push(30);
    pq.push(40);

    cout << "Top Priority: " << pq.top() << endl; // 50
}
```

To create **min-heap**, use:

```cpp
priority_queue<int, vector<int>, greater<int>> pq;
```

---

## 🔹 Summary

| Feature     | Queue                                  |
| ----------- | -------------------------------------- |
| Access      | FIFO                                   |
| Insert      | Rear                                   |
| Remove      | Front                                  |
| Real Use    | Print Queue, Call Queue, OS Scheduling |
| C++ Support | Array, Linked List, STL                |

---




