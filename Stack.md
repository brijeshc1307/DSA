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
## Queue using STL

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
## Simple Queue Using Array (C++)

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
OR
```cpp
class Queue {
    
    int* arr;
    int qfront;
    int rear; 
    int size;
    
public:
    Queue() {
        size = 100001;
        arr = new int[size];
        qfront = 0;
        rear = 0;
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        if(qfront == rear) {
            return true;
        }
        else
        {
            return false;
        }
    }

    void enqueue(int data) {
        if(rear == size)
            cout << "Queue is Full" << endl;
        else
        {
            arr[rear] = data;
            rear++;
        }
    }

    int dequeue() {
        if(qfront == rear) {
            return -1;
        }
        else
        {	int ans = arr[qfront];
            arr[qfront] = -1;
            qfront++;
            if(qfront==rear){
                qfront = 0;
                rear = 0;
            }
         return ans;
        }
    }

    int front() {
        if(qfront == rear) {
            return -1;
        }
        else
        {
            return arr[qfront];
        }
    }
};
```

---

## Circular Queue (Brief Idea)

Avoid wasting space in array by wrapping rear to front when space is available.

```cpp
rear = (rear + 1) % size;
front = (front + 1) % size;
```
Circular Queue Using Array
```cpp
class CircularQueue{
    int *arr;
    int front;
    int rear;
    int size;
    
    public:
    // Initialize your data structure.
    CircularQueue(int n){
        size = n;
        arr = new int[size];
        front = rear = -1;
    }

    // Enqueues 'X' into the queue. Returns true if it gets pushed into the stack, and false otherwise.
    bool enqueue(int value){
        //to check whther queue is full
        if( (front == 0 && rear == size-1) || (rear == (front-1)%(size-1) ) ) {
            //cout << "Queue is Full";
            return false;
        }
        else if(front == -1) //first element to push
        {
			front = rear = 0;
            
        }
        else if(rear == size-1 && front != 0) {
            rear = 0; //to maintain cyclic nature
        }
        else
        {//normal flow
            rear++;
        }
        //push inside the queue
        arr[rear] = value;
        
        return true;
    }

    // Dequeues top element from queue. Returns -1 if the stack is empty, otherwise returns the popped element.
    int dequeue(){
        if(front == -1){//to check queue is empty
            //cout << "Queue is Empty " << endl;
            return -1;
        }
        int ans = arr[front];
        arr[front] = -1;
        if(front == rear) { //single element is present
            front = rear = -1;
        }
        else if(front == size - 1) {
            front = 0; //to maintain cyclic nature
        }
        else
        {//normal flow
            front++;
        }
        return ans;
    }
};
```

---

## Dqueue or Doubly ended Queue (Brief Idea)

Avoid wasting space in array by wrapping rear to front when space is available.

```cpp
class Deque
{	
    int *arr;
    int front;
    int rear;
    int size;
public:
    // Initialize your data structure.
    Deque(int n)
    {
        size = n;
        arr = new int[n];
        front = -1;
        rear = -1;
    }

    // Pushes 'X' in the front of the deque. Returns true if it gets pushed into the deque, and false otherwise.
    bool pushFront(int x)
    {
        //check full or not
        if( isFull() ) {
            return false;
        }
        else if(isEmpty()) {
            front  = rear = 0;
        }
        else if(front == 0 && rear != size-1) {
            front = size-1;
        } 
        else
        {
            front--;
        }
        arr[front] = x;
        return true;
    }

    // Pushes 'X' in the back of the deque. Returns true if it gets pushed into the deque, and false otherwise.
    bool pushRear(int x)
    {
        if( isFull() ) {
            return false;
        }
        else if(isEmpty()) {
            front  = rear = 0;
        }
        else if(rear == size-1 && front != 0) {
            rear = 0;
        } 
        else
        {
             rear++;
        }
        arr[rear] = x;
        return true;
    }

    // Pops an element from the front of the deque. Returns -1 if the deque is empty, otherwise returns the popped element.
    int popFront()
    {
        if(isEmpty()){//to check queue is empty
            //cout << "Queue is Empty " << endl;
            return -1;
        }
        
        int ans = arr[front];
        arr[front] = -1;
        
        if(front == rear) { //single element is present
            front = rear = -1;
        }
        else if(front == size - 1) {
            front = 0; //to maintain cyclic nature
        }
        else
        {//normal flow
            front++;
        }
        return ans;
    }

    // Pops an element from the back of the deque. Returns -1 if the deque is empty, otherwise returns the popped element.
    int popRear()
    {
         if(isEmpty()){//to check queue is empty
            //cout << "Queue is Empty " << endl;
            return -1;
        }
        
        int ans = arr[rear];
        arr[rear] = -1;
        
        if(front == rear) { //single element is present
            front = rear = -1;
        }
        else if(rear == 0) {
            rear = size-1; //to maintain cyclic nature
        }
        else
        {//normal flow
            rear--;
        }
        return ans;
    }

    // Returns the first element of the deque. If the deque is empty, it returns -1.
    int getFront()
    {
        if(isEmpty()){
            return -1;
        }
        return arr[front];
    }

    // Returns the last element of the deque. If the deque is empty, it returns -1.
    int getRear()
    {
       if(isEmpty()){
            return -1;
        }
        return arr[rear];
    }

    // Returns true if the deque is empty. Otherwise returns false.
    bool isEmpty()
    {
        if(front == -1)
            return true;
        else
            return false;
    }

    // Returns true if the deque is full. Otherwise returns false.
    bool isFull()
    {
		if( (front == 0 && rear == size-1) || (front != 0 && rear == (front-1)%(size-1) ) ) {
            return true;
        }
        else
        {
            return false;
        }
    }
};
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




