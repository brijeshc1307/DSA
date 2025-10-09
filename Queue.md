## Queue

A **Queue** is a **linear data structure** that follows the **FIFO** (First In, First Out) principle.
The element inserted **first** is removed **first**.

### Core Operations:

* `enqueue()` → Add element at the rear (tail)
* `dequeue()` → Remove element from the front (head)
* `front()` → Access front element
* `isEmpty()` → Check if empty
* `size()` → Total elements

---

## Real-Life Example

> **Queue at Ticket Counter **
>
> * First person to enter the line gets the ticket first
> * New people join at the end (rear)
> * Only front person is served (FIFO)

---

## Types of Queue

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

## Priority Queue using STL

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

## Summary

| Feature     | Queue                                  |
| ----------- | -------------------------------------- |
| Access      | FIFO                                   |
| Insert      | Rear                                   |
| Remove      | Front                                  |
| Real Use    | Print Queue, Call Queue, OS Scheduling |
| C++ Support | Array, Linked List, STL                |

---

Perfect — let’s dive deep into **Queues** and their real-world importance, along with advanced concepts and applications like **Circular Queue**, **Deque**, **BFS**, **Sliding Window Maximum**, **LRU Cache**, and **Rotten Oranges (Matrix BFS)**.

---

## 🧩 **1. Definition: What is a Queue?**

A **Queue** is a **linear data structure** that follows the **FIFO (First In, First Out)** principle — the element inserted first is the one that gets removed first.

**Analogy:**
Think of a **queue at a movie ticket counter** — the person who comes first gets the ticket first.

```
Front -> [1, 2, 3, 4] <- Rear
```

When you enqueue (insert), you add at the rear.
When you dequeue (remove), you remove from the front.

---

## ⚙️ **2. Internal Working**

* **Front Pointer** → Points to the first element (for removal).
* **Rear Pointer** → Points to the position where the next element will be added.
* When using an array:

  * `enqueue`: `arr[rear] = value; rear++`
  * `dequeue`: `front++`
* When using a linked list:

  * Nodes are dynamically allocated and connected through pointers.

---

## 🧱 **3. Types / Categories of Queues**

| Type                           | Description                                                 |
| ------------------------------ | ----------------------------------------------------------- |
| **Simple Queue**               | Basic FIFO structure.                                       |
| **Circular Queue**             | Connects the end to the front to utilize space efficiently. |
| **Deque (Double Ended Queue)** | Elements can be added/removed from both ends.               |
| **Priority Queue**             | Elements are served based on priority, not order.           |

---

## 🌀 **4. Circular Queue Implementation**

### 🔍 Definition:

A **Circular Queue** is a queue where the **last position connects back to the first**, forming a circle.
It solves the **“queue overflow despite free space”** issue that happens in a simple linear array queue.

### ⚙️ Internal Working:

* The `rear` pointer wraps around using modulo operation:

  ```cpp
  rear = (rear + 1) % size;
  ```
* Similarly for front:

  ```cpp
  front = (front + 1) % size;
  ```
* The queue is **full** if `(rear + 1) % size == front`
* The queue is **empty** if `front == -1`

### 💻 Code Example:

```cpp
#include <iostream>
using namespace std;

class CircularQueue {
    int *arr;
    int front, rear, size;
public:
    CircularQueue(int n) {
        size = n;
        arr = new int[n];
        front = rear = -1;
    }

    bool enqueue(int val) {
        if ((rear + 1) % size == front) return false; // Full
        if (front == -1) front = 0;
        rear = (rear + 1) % size;
        arr[rear] = val;
        return true;
    }

    bool dequeue() {
        if (front == -1) return false; // Empty
        if (front == rear) front = rear = -1;
        else front = (front + 1) % size;
        return true;
    }

    void display() {
        if (front == -1) return;
        int i = front;
        while (true) {
            cout << arr[i] << " ";
            if (i == rear) break;
            i = (i + 1) % size;
        }
        cout << endl;
    }
};
```

### 🎯 Real-Life Analogy:

Imagine a **roundabout** — cars move in a circular path and exit from any point.
When one car exits, space becomes available for another car to enter — no wasted space!

---

## 🔁 **5. Deque (Double Ended Queue)**

### 🔍 Definition:

A **Deque** allows insertion and deletion from **both front and rear ends**.

### ⚙️ Types:

* **Input-restricted Deque** → insertion only at rear.
* **Output-restricted Deque** → deletion only at front.

### 💻 Example:

```cpp
#include <deque>
#include <iostream>
using namespace std;

int main() {
    deque<int> dq;
    dq.push_back(10);
    dq.push_front(20);
    dq.pop_back();
    dq.push_back(30);
    for (int x : dq) cout << x << " ";
}
```

### 🎯 Real-Life Analogy:

A **double-ended toll booth** where vehicles can enter or exit from both sides depending on traffic.

---

## 🌐 **6. BFS (Breadth-First Search)**

### 🔍 Definition:

BFS is a **graph traversal algorithm** that explores all neighbors of a node before moving to the next level — implemented using a **queue**.

### ⚙️ Working:

1. Start from a node → mark it visited → enqueue it.
2. Dequeue a node → explore all its unvisited neighbors → enqueue them.
3. Repeat until queue is empty.

### 💻 Code Example:

```cpp
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

void BFS(int start, vector<vector<int>> &adj, int n) {
    vector<bool> visited(n, false);
    queue<int> q;
    q.push(start);
    visited[start] = true;

    while (!q.empty()) {
        int node = q.front();
        q.pop();
        cout << node << " ";
        for (int neighbor : adj[node]) {
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                q.push(neighbor);
            }
        }
    }
}
```

### 🎯 Real-Life Analogy:

Imagine exploring a **social network** — you first check all your direct friends (level 1), then their friends (level 2), and so on.

---

## 🪟 **7. Sliding Window Maximum**

### 🔍 Definition:

Given an array and a window size `k`, find the maximum in each window as it slides across the array.
This is efficiently solved using a **deque**.

### 💻 Code Example:

```cpp
#include <deque>
#include <vector>
#include <iostream>
using namespace std;

vector<int> slidingWindowMax(vector<int>& nums, int k) {
    deque<int> dq;
    vector<int> result;

    for (int i = 0; i < nums.size(); ++i) {
        if (!dq.empty() && dq.front() == i - k)
            dq.pop_front();
        while (!dq.empty() && nums[dq.back()] < nums[i])
            dq.pop_back();
        dq.push_back(i);
        if (i >= k - 1)
            result.push_back(nums[dq.front()]);
    }
    return result;
}
```

### 🎯 Real-Life Analogy:

Think of **stock price monitoring** — you want to know the highest stock price in the last 3 days (sliding window).

---

## 🧠 **8. LRU Cache Design (Least Recently Used)**

### 🔍 Definition:

LRU Cache removes the **least recently accessed** item when the cache is full.
It is implemented using a **combination of a doubly linked list and a hash map** for O(1) access.

### ⚙️ Concept:

* Hash map → stores key → node address.
* Doubly linked list → maintains order (most recent at front).

### 💻 Code (Simplified):

```cpp
#include <unordered_map>
#include <list>
#include <iostream>
using namespace std;

class LRUCache {
    int capacity;
    list<pair<int,int>> dq;
    unordered_map<int, list<pair<int,int>>::iterator> cache;

public:
    LRUCache(int cap): capacity(cap) {}

    int get(int key) {
        if (cache.find(key) == cache.end()) return -1;
        auto it = cache[key];
        int value = it->second;
        dq.erase(it);
        dq.push_front({key, value});
        cache[key] = dq.begin();
        return value;
    }

    void put(int key, int value) {
        if (cache.find(key) != cache.end())
            dq.erase(cache[key]);
        else if (dq.size() == capacity) {
            auto last = dq.back();
            cache.erase(last.first);
            dq.pop_back();
        }
        dq.push_front({key, value});
        cache[key] = dq.begin();
    }
};
```

### 🎯 Real-Life Analogy:

Think of **browser caching** — recently visited pages are stored for quick access, while the oldest unused page is evicted when space is full.

---

## 🍊 **9. Rotten Oranges (Matrix BFS)**

### 🔍 Problem:

Given a grid where:

* 0 → empty cell
* 1 → fresh orange
* 2 → rotten orange

Each minute, a rotten orange makes its **adjacent fresh oranges** rotten.
Find the **minimum time** required for all oranges to rot.

### 💻 Code Example:

```cpp
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int orangesRotting(vector<vector<int>>& grid) {
    int m = grid.size(), n = grid[0].size();
    queue<pair<int,int>> q;
    int fresh = 0, time = 0;
    vector<vector<int>> dir = {{1,0},{-1,0},{0,1},{0,-1}};

    for (int i=0; i<m; i++)
        for (int j=0; j<n; j++)
            if (grid[i][j] == 2) q.push({i,j});
            else if (grid[i][j] == 1) fresh++;

    while (!q.empty() && fresh > 0) {
        int size = q.size();
        while (size--) {
            auto [x, y] = q.front(); q.pop();
            for (auto d : dir) {
                int nx = x + d[0], ny = y + d[1];
                if (nx >= 0 && ny >= 0 && nx < m && ny < n && grid[nx][ny] == 1) {
                    grid[nx][ny] = 2;
                    q.push({nx, ny});
                    fresh--;
                }
            }
        }
        time++;
    }
    return fresh == 0 ? time : -1;
}
```

### 🎯 Real-Life Analogy:

Imagine **spreading infection in a room grid** — every infected person infects those adjacent each minute.

---

## 🌍 **10. Why Queues Are Important in Real-World Systems**

| Application            | Explanation                                              |
| ---------------------- | -------------------------------------------------------- |
| **Operating Systems**  | Job scheduling, CPU task management, and process queues. |
| **Networking**         | Packet buffering and message queues.                     |
| **Web Servers**        | Handling multiple requests in FIFO order.                |
| **AI / ML**            | BFS traversal, graph search algorithms.                  |
| **Simulation Systems** | Managing event timelines.                                |

---

## 🏁 **Summary Table**

| Concept                    | Structure Used    | Use Case                    |
| -------------------------- | ----------------- | --------------------------- |
| **Circular Queue**         | Array             | Efficient space utilization |
| **Deque**                  | Double-ended list | Bidirectional operations    |
| **BFS**                    | Queue             | Graph traversal             |
| **Sliding Window Maximum** | Deque             | Window-based computation    |
| **LRU Cache**              | Linked list + Map | Memory optimization         |
| **Rotten Oranges**         | Queue             | Grid-based BFS propagation  |

---

Would you like me to create **diagram illustrations (flow + memory layout)** for each of these (Circular Queue, BFS, LRU Cache, and Rotten Oranges) to visually explain how the data moves inside the queue?


