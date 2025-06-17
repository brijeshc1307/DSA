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

Would you like to see **stack-based applications** like **Balanced Parentheses** or **Expression Evaluation**?
