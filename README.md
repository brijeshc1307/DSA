

# Data Structures and Algorithms: Basic to Advance & STL 

This repository contains the implementation of various Data Structures and Algorithms from Basic to Advance level in different programming languages. The purpose of this repository is to provide a one-stop solution to learn and practice Data Structures and Algorithms.

## Table of Contents

- [Data Structures](#data-structures)
- [Algorithms](#algorithms)
- [Contribution Guidelines](#contribution-guidelines)
- [License](#license)

## Data Structures

The following Data Structures are implemented in this repository:

- Array
- Linked List
- Stack
- Queue
- Tree
- Binary Search Tree
- Heap
- Hash Table
- Graph

Each Data Structure has its own directory and contains the implementation of all the basic operations along with some advanced operations. The implementation is done in multiple programming languages like C++, Java, Python, etc.

## Algorithms

The following Algorithms are implemented in this repository:

- Sorting Algorithms (Bubble Sort, Selection Sort, Insertion Sort, Merge Sort, Quick Sort, Heap Sort, Counting Sort, Radix Sort)
- Searching Algorithms (Linear Search, Binary Search)
- Graph Algorithms (Breadth First Search, Depth First Search, Dijkstra's Algorithm, Bellman-Ford Algorithm, Prim's Algorithm, Kruskal's Algorithm)

Each Algorithm has its own directory and contains the implementation of the algorithm in multiple programming languages. Along with the implementation, the time and space complexities of the algorithm are also mentioned.

### **Using `pair` in Different STL Containers in C++**  

The `pair` container in C++ STL can be used within various other containers like `array`, `list`, `deque`, `forward_list`, `set`, `multiset`, and `map`, `multimap` to store two associated values together.

---

## **1. Using `pair` in `array`**  
In C++11 and later, `std::array` can store pairs.

### **Example:**
```cpp
#include <iostream>
#include <array>
using namespace std;

int main() {
    array<pair<int, string>, 3> arr = {{{1, "Alice"}, {2, "Bob"}, {3, "Charlie"}}};

    for (const auto &p : arr) {
        cout << p.first << " -> " << p.second << endl;
    }

    return 0;
}
```

**Output:**  
```
1 -> Alice  
2 -> Bob  
3 -> Charlie  
```

---

## **2. Using `pair` in `list`**  
A `list` of pairs is useful when frequent insertions or deletions are required.

### **Example:**
```cpp
#include <iostream>
#include <list>
using namespace std;

int main() {
    list<pair<int, string>> students = {{101, "John"}, {102, "Emma"}, {103, "Sophia"}};

    for (auto &s : students) {
        cout << s.first << " - " << s.second << endl;
    }

    return 0;
}
```

**Output:**  
```
101 - John  
102 - Emma  
103 - Sophia  
```

---

## **3. Using `pair` in `deque`**  
A `deque` of pairs is useful for double-ended access operations.

### **Example:**
```cpp
#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<pair<int, double>> prices = {{1, 99.99}, {2, 49.50}, {3, 75.25}};
    prices.push_front({0, 30.00});  // Adding at the front

    for (const auto &p : prices) {
        cout << p.first << " -> " << p.second << endl;
    }

    return 0;
}
```

**Output:**  
```
0 -> 30.00  
1 -> 99.99  
2 -> 49.50  
3 -> 75.25  
```

---

## **4. Using `pair` in `forward_list`**  
A `forward_list` stores pairs with fast forward traversal.

### **Example:**
```cpp
#include <iostream>
#include <forward_list>
using namespace std;

int main() {
    forward_list<pair<int, string>> fl = {{1, "Dog"}, {2, "Cat"}, {3, "Parrot"}};

    for (const auto &p : fl) {
        cout << p.first << " -> " << p.second << endl;
    }

    return 0;
}
```

**Output:**  
```
1 -> Dog  
2 -> Cat  
3 -> Parrot  
```

---

## **5. Using `pair` in `set`**  
A `set` of pairs stores unique elements in sorted order based on the first element of the pair.

### **Example:**
```cpp
#include <iostream>
#include <set>
using namespace std;

int main() {
    set<pair<int, string>> employees = {{3, "Charlie"}, {1, "Alice"}, {2, "Bob"}};

    for (const auto &p : employees) {
        cout << p.first << " -> " << p.second << endl;
    }

    return 0;
}
```

**Output (sorted order):**  
```
1 -> Alice  
2 -> Bob  
3 -> Charlie  
```

---

## **6. Using `pair` in `multiset`**  
A `multiset` allows duplicate pairs, sorted automatically.

### **Example:**
```cpp
#include <iostream>
#include <set>
using namespace std;

int main() {
    multiset<pair<int, string>> scores = {{1, "A"}, {2, "B"}, {1, "A"}, {3, "C"}};

    for (const auto &p : scores) {
        cout << p.first << " -> " << p.second << endl;
    }

    return 0;
}
```

**Output:**  
```
1 -> A  
1 -> A  
2 -> B  
3 -> C  
```

---

## **7. Using `pair` in `map`**  
A `map` stores unique key-value pairs sorted by key.

### **Example:**
```cpp
#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, pair<string, double>> productPrice;
    productPrice[1] = {"Laptop", 75000.50};
    productPrice[2] = {"Phone", 50000.00};

    for (const auto &p : productPrice) {
        cout << p.first << ": " << p.second.first << " - " << p.second.second << endl;
    }

    return 0;
}
```

**Output:**  
```
1: Laptop - 75000.5  
2: Phone - 50000  
```

---

## **8. Using `pair` in `multimap`**  
A `multimap` allows multiple pairs with the same key.

### **Example:**
```cpp
#include <iostream>
#include <map>
using namespace std;

int main() {
    multimap<int, pair<string, int>> subjects;
    subjects.insert({1, {"Math", 90}});
    subjects.insert({2, {"Science", 85}});
    subjects.insert({1, {"English", 88}});

    for (const auto &p : subjects) {
        cout << p.first << ": " << p.second.first << " - " << p.second.second << endl;
    }

    return 0;
}
```

**Output:**  
```
1: Math - 90  
1: English - 88  
2: Science - 85  
```

---


## **9. Using `pair` in `queue`**  

A `queue` follows the **FIFO (First In, First Out)** principle. Using `pair` in a queue allows us to store two related values such as task IDs with timestamps, or coordinates in a grid.  

### **Example:**  
```cpp
#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<pair<int, string>> q;

    // Pushing pairs into the queue
    q.push({1, "Task1"});
    q.push({2, "Task2"});
    q.push({3, "Task3"});

    // Processing the queue
    while (!q.empty()) {
        cout << "Processing: " << q.front().first << " - " << q.front().second << endl;
        q.pop();
    }

    return 0;
}
```

**Output:**  
```
Processing: 1 - Task1  
Processing: 2 - Task2  
Processing: 3 - Task3  
```

---

## **10. Using `pair` in `priority_queue`**  

A `priority_queue` follows the **max-heap (default) or min-heap (custom comparator)** principle. Using pairs allows us to prioritize tasks based on priority values.

### **Example (Max-Heap by default - highest priority first):**  
```cpp
#include <iostream>
#include <queue>
using namespace std;

int main() {
    priority_queue<pair<int, string>> pq;

    // Adding elements with priority (priority, task)
    pq.push({3, "Low Priority"});
    pq.push({1, "High Priority"});
    pq.push({2, "Medium Priority"});

    // Processing the priority queue
    while (!pq.empty()) {
        cout << "Processing: " << pq.top().first << " - " << pq.top().second << endl;
        pq.pop();
    }

    return 0;
}
```

**Output:**  
```
Processing: 3 - Low Priority  
Processing: 2 - Medium Priority  
Processing: 1 - High Priority  
```

### **Example (Min-Heap with custom comparator - lowest priority first):**  
```cpp
#include <iostream>
#include <queue>
using namespace std;

int main() {
    priority_queue<pair<int, string>, vector<pair<int, string>>, greater<pair<int, string>>> pq;

    pq.push({3, "Low Priority"});
    pq.push({1, "High Priority"});
    pq.push({2, "Medium Priority"});

    while (!pq.empty()) {
        cout << "Processing: " << pq.top().first << " - " << pq.top().second << endl;
        pq.pop();
    }

    return 0;
}
```

**Output:**  
```
Processing: 1 - High Priority  
Processing: 2 - Medium Priority  
Processing: 3 - Low Priority  
```

---

## **11. Using `pair` in `stack`**  

A `stack` follows the **LIFO (Last In, First Out)** principle. Using `pair` in a stack helps in scenarios like tracking previous states (e.g., undo functionality, DFS in graphs).

### **Example:**  
```cpp
#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<pair<int, string>> s;

    // Pushing pairs onto the stack
    s.push({1, "First"});
    s.push({2, "Second"});
    s.push({3, "Third"});

    // Processing the stack
    while (!s.empty()) {
        cout << "Popped: " << s.top().first << " - " << s.top().second << endl;
        s.pop();
    }

    return 0;
}
```

**Output:**  
```
Popped: 3 - Third  
Popped: 2 - Second  
Popped: 1 - First  
```

---

### **Comparison of Using `pair` in Different Containers:**

| Container       | Ordered/Unordered | Duplicates Allowed | Access Time  |
|-----------------|------------------|-------------------|--------------|
| `array`         | Ordered           | Yes                | O(1)          |
| `list`          | Ordered           | Yes                | O(n)          |
| `deque`         | Ordered           | Yes                | O(1) (ends)   |
| `forward_list`  | Ordered           | Yes                | O(n)          |
| `set`           | Ordered           | No                 | O(log n)      |
| `multiset`      | Ordered           | Yes                | O(log n)      |
| `map`           | Ordered           | No                 | O(log n)      |
| `multimap`      | Ordered           | Yes                | O(log n)      |

---

### **Comparison of Using `pair` in Queue, Priority Queue, and Stack:**

| Container         | Order of Processing  | Typical Use Cases              |
|------------------|---------------------|--------------------------------|
| `queue`           | FIFO (First In First Out)  | Task scheduling, event processing |
| `priority_queue`  | Max/Min priority order    | Task prioritization, Dijkstra's algorithm |
| `stack`           | LIFO (Last In First Out)  | Undo feature, depth-first search |


---

### **Conclusion**  
- Use `pair` in **`array`, `list`, `deque`** when dealing with indexed or sequential data.  
- Use **`set`, `multiset`, `map`, `multimap`** when needing fast searching and ordering.  
- Use **`forward_list`** for memory-efficient traversal.  
- **Use `queue`** when order matters (e.g., processing items in sequence).  
- **Use `priority_queue`** when elements should be processed based on priority (e.g., task scheduling).  
- **Use `stack`** for reversing sequences or backtracking (e.g., recursive algorithms).  

---

### **Using `vector` in Different STL Containers in C++**  

The `std::vector` is a dynamic array in C++ that can be used within various STL containers like `array`, `vector`, `list`, `deque`, `forward_list`, `set`, `multiset`, `map`, `multimap`, `queue`, `priority_queue`, `stack`, `unordered_set`, `unordered_multiset`, `unordered_map`, and `unordered_multimap`. This allows flexible storage of elements in different data structures.

---

## **1. Using `vector` in `array`**  

A `std::array` can store `vector` elements efficiently.  
### **Example:**  
```cpp
#include <iostream>
#include <array>
#include <vector>
using namespace std;

int main() {
    array<vector<int>, 3> arr = {{{{1, 2}}, {{3, 4, 5}}, {{6, 7, 8, 9}}}};

    for (const auto &v : arr) {
        for (int val : v) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}
```

**Output:**  
```
1 2  
3 4 5  
6 7 8 9  
```

---

## **2. Using `vector` in `vector`**  

A `vector` of `vector` is useful for storing 2D data.  
### **Example:**  
```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<vector<int>> vec = {{1, 2}, {3, 4, 5}, {6, 7, 8, 9}};

    for (const auto &v : vec) {
        for (int val : v) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}
```

---

## **3. Using `vector` in `list`**  

A `list` of `vector` provides fast insertion/deletion with dynamic storage.  
### **Example:**  
```cpp
#include <iostream>
#include <list>
#include <vector>
using namespace std;

int main() {
    list<vector<int>> lst = {{1, 2, 3}, {4, 5}, {6, 7, 8}};

    for (const auto &v : lst) {
        for (int val : v) cout << val << " ";
        cout << endl;
    }

    return 0;
}
```

---

## **4. Using `vector` in `deque`**  

A `deque` of `vector` allows dynamic access from both ends.  
### **Example:**  
```cpp
#include <iostream>
#include <deque>
#include <vector>
using namespace std;

int main() {
    deque<vector<int>> dq = {{1, 2}, {3, 4, 5}, {6, 7}};

    for (const auto &v : dq) {
        for (int val : v) cout << val << " ";
        cout << endl;
    }

    return 0;
}
```

---

## **5. Using `vector` in `forward_list`**  

A `forward_list` with `vector` allows forward traversal.  
### **Example:**  
```cpp
#include <iostream>
#include <forward_list>
#include <vector>
using namespace std;

int main() {
    forward_list<vector<int>> fl = {{1, 2}, {3, 4}, {5, 6}};

    for (const auto &v : fl) {
        for (int val : v) cout << val << " ";
        cout << endl;
    }

    return 0;
}
```

---

## **6. Using `vector` in `set`**  

Since `vector` lacks an ordering criterion, a custom comparator is needed.  
### **Example:**  
```cpp
#include <iostream>
#include <set>
#include <vector>
using namespace std;

struct compareVector {
    bool operator()(const vector<int> &a, const vector<int> &b) const {
        return a.size() < b.size();
    }
};

int main() {
    set<vector<int>, compareVector> s = {{1, 2}, {3, 4, 5}, {6, 7, 8, 9}};

    for (const auto &v : s) {
        for (int val : v) cout << val << " ";
        cout << endl;
    }

    return 0;
}
```

---

## **7. Using `vector` in `map`**  

A `map` with `vector` values allows fast lookups.  
### **Example:**  
```cpp
#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main() {
    map<int, vector<int>> m;
    m[1] = {10, 20, 30};
    m[2] = {40, 50};

    for (const auto &p : m) {
        cout << p.first << " -> ";
        for (int val : p.second) cout << val << " ";
        cout << endl;
    }

    return 0;
}
```

---

## **8. Using `vector` in `queue`**  

A `queue` of `vector` allows sequential processing.  
### **Example:**  
```cpp
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
    queue<vector<int>> q;
    q.push({1, 2, 3});
    q.push({4, 5});

    while (!q.empty()) {
        for (int val : q.front()) cout << val << " ";
        cout << endl;
        q.pop();
    }

    return 0;
}
```

---

## **9. Using `vector` in `priority_queue`**  

A `priority_queue` of `vector` needs a comparator.  
### **Example:**  
```cpp
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

struct compareSize {
    bool operator()(const vector<int> &a, const vector<int> &b) {
        return a.size() > b.size();
    }
};

int main() {
    priority_queue<vector<int>, vector<vector<int>>, compareSize> pq;
    pq.push({1, 2});
    pq.push({3, 4, 5});

    while (!pq.empty()) {
        for (int val : pq.top()) cout << val << " ";
        cout << endl;
        pq.pop();
    }

    return 0;
}
```

---

## **10. Using `vector` in `stack`**  

A `stack` of `vector` allows LIFO storage.  
### **Example:**  
```cpp
#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main() {
    stack<vector<int>> s;
    s.push({1, 2});
    s.push({3, 4, 5});

    while (!s.empty()) {
        for (int val : s.top()) cout << val << " ";
        cout << endl;
        s.pop();
    }

    return 0;
}
```

---

## **11. Using `vector` in Unordered Containers**  

- **Unordered set/multiset/map/multimap** require a custom hash function.  
- Example hash function for `vector<int>`:  
```cpp
#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

struct VectorHash {
    size_t operator()(const vector<int> &v) const {
        size_t hash = 0;
        for (int i : v) {
            hash ^= hash * 31 + i;
        }
        return hash;
    }
};

int main() {
    unordered_set<vector<int>, VectorHash> us = {{1, 2}, {3, 4}};
    for (const auto &v : us) {
        for (int val : v) cout << val << " ";
        cout << endl;
    }
    return 0;
}
```

---

## Contribution Guidelines

Contributions are always welcome! If you want to contribute to this repository, please follow the below guidelines:

1. Fork this repository
2. Clone the forked repository to your local machine
3. Create a new branch for your changes
4. Implement your changes
5. Test your changes thoroughly
6. Commit your changes with a meaningful commit message
7. Push your changes to your forked repository
8. Create a pull request to merge your changes into the main repository

Please ensure that your code follows the best practices and guidelines for the programming language you are using.

## License

This repository is licensed under the MIT License. See the [LICENSE](LICENSE) file for more information.
