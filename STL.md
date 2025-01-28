### **What is STL in C++?**  
**STL (Standard Template Library)** is a powerful feature of C++ that provides a collection of **generic classes and functions** to handle common data structures and algorithms. It enables efficient and reusable code by providing pre-implemented solutions for complex operations such as searching, sorting, and manipulation of data.

---

### **Key Components of STL**  
STL consists of four main components:  

1. **Containers:**  
2. **Algorithms:**  
3. **Iterators:**  
4. **Functors (Function Objects):**
   
---

### **1. STL Containers** 
- Used to store and manage collections of data.

STL containers are categorized into 4 types:

#### **A. Sequence Containers**  
Stores elements sequentially (like arrays).  
| Container  | Description           | Example Operations        |
|----------------|---------------------------|--------------------------------|
| `array`         | Static array (fixed size) | `at()`, `size()`, `fill()`     |
| `vector`        | Dynamic array              | `push_back()`, `pop_back()`, `size()` |
| `deque`         | Double-ended queue         | `push_front()`, `push_back()`, `pop_front()`, `pop_back()` |
| `list`          | Doubly linked list         | `push_front()`, `push_back()`, `pop_front()`, `pop_back()` |
| `forward_list`  | Singly linked list          | `push_front()`, `pop_front()`, `insert_after()` |

---

#### **B. Associative Containers**  
Stores elements in a sorted/unordered fashion using keys.  
| Container     | Description              | Example Operations      |
|---------------|--------------------------|-------------------------|
| `set`         | Unique sorted elements    | `insert()`, `erase()`    |
| `map`         | Key-value pairs (sorted)  | `insert()`, `find()`     |
| `multiset`    | Allows duplicate elements | `count()`, `equal_range()` |
| `multimap`    | Multiple key-value pairs  | `insert()`, `find()`     |

---

#### **C. Unordered Associative Containers**  
Stores elements with no specific order, offering faster access compared to ordered containers.  
| Container             | Description                 |
|----------------------------|----------------------------------|
| `unordered_set`            | Unique elements, no specific order |
| `unordered_map`            | Key-value pairs, no specific order |
| `unordered_multiset`       | Allows duplicate elements, no specific order |
| `unordered_multimap`       | Allows duplicate key-value pairs, no specific order |

---

#### **D. Containers Adapters**  
Stores elements with no specific order, offering faster access compared to ordered containers.  
| **Container**          | **Description**                            |
|------------------------|--------------------------------------------|
| `queue`                | FIFO (First-In-First-Out) container, elements are processed in the order they are added |
| `priority_queue`       | Elements are ordered based on priority (default: max-heap) |
| `stack`                | LIFO (Last-In-First-Out) container, elements are processed in reverse order of addition |

---

### **1. Pair**
The `pair` in C++ STL is a utility that allows storing two heterogeneous values (of possibly different types) in a single unit. It is commonly used to combine two values and pass them together, such as key-value pairs in maps.
```txt 
एक Class है , जो दो Value Store करती है ये Pair रिलेशन Maintain करने लिए के Use करते है
```

---

### **Syntax of `pair`**  
```cpp
#include <iostream>
#include <utility>
using namespace std;

// Declaration of a pair
pair<T1, T2> variable_name;
```

- `T1` → Data type of the first element  
- `T2` → Data type of the second element  

---

### **Example of `pair`**  

```cpp
#include <iostream>
#include <utility>
using namespace std;

int main() {
    pair<int, string> p1;  
    p1.first = 10;  
    p1.second = "Brijesh";

    cout << "First: " << p1.first << ", Second: " << p1.second << endl;
    return 0;
}
```

**Output:**  
```
First: 10, Second: Brijesh
```

---

### **Ways to Initialize a `pair`**  

1. **Using the constructor:**  
   ```cpp
   pair<int, string> p1(1, "Apple");
   ```

2. **Using the `make_pair()` function:**  
   ```cpp
   pair<int, double> p2 = make_pair(2, 3.14);
   ```

3. **Using assignment:**  
   ```cpp
   pair<int, char> p3;
   p3 = {3, 'A'};
   ```

---

### **Accessing Elements of a `pair`**  
You can access the elements of a `pair` using the `first` and `second` members.

```cpp
pair<string, double> product = {"Laptop", 75000.50};
cout << "Product: " << product.first << ", Price: " << product.second << endl;
```

**Output:**  
```
Product: Laptop, Price: 75000.5
```

---

### **Modifying Elements of a `pair`**  
```cpp
pair<int, string> person = {101, "Alice"};
person.second = "Bob";  // Changing the second element

cout << person.first << " " << person.second;
```

**Output:**  
```
101 Bob
```

---

### **Comparing Pairs**  
Pairs can be compared lexicographically (first elements first, then second elements if first are equal).

```cpp
pair<int, int> p1 = {2, 50};
pair<int, int> p2 = {2, 30};

if (p1 > p2)
    cout << "p1 is greater";
else
    cout << "p2 is greater";
```

**Output:**  
```
p1 is greater
```

---

### **Advantages of `pair` in STL**  
- Helps in storing related data together.  
- Can be used as a key-value pair for efficient lookup operations.  
- Supports easy comparison and sorting.

---

### **Limitations of `pair`**  
- Only stores two values; for more, use `tuple` or structures.  
- Readability can suffer when used extensively in complex programs.

---

### **Pair with STL Containers**  

#### **1. Using `pair` in `pair`(Nested `pair`):**  
```cpp
#include <iostream>
#include <utility> // For std::pair

int main() {
    // Define a nested pair: (x, (y, label))
    pair<int, pair<int, string>> point;

    // Assign values
    point.first = 5; // x-coordinate
    point.second.first = 10; // y-coordinate
    point.second.second = "Point A"; // Label

    // Access the nested pair
    cout << "X-coordinate: " << point.first << endl;
    cout << "Y-coordinate: " << point.second.first << endl;
    cout << "Label: " << point.second.second << endl;

    return 0;
}
```

**Output:**  
```
X-coordinate: 5
Y-coordinate: 10
Label: Point A
```

---

#### **2. Using `pair` in `vector`:**  
```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<pair<int, string>> students = {{101, "Alice"}, {102, "Bob"}};

    for (auto &s : students)
        cout << s.first << " - " << s.second << endl;

    return 0;
}
```

**Output:**  
```
101 - Alice  
102 - Bob
```

---

#### **3. Using `pair` in `map`:**  
```cpp
#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, pair<string, int>> emp;
    emp[1] = {"John", 50000};
    emp[2] = {"Jane", 60000};

    for (auto &e : emp)
        cout << e.first << ": " << e.second.first << ", " << e.second.second << endl;

    return 0;
}
```

**Output:**  
```
1: John, 50000  
2: Jane, 60000
```

---

## **4. Using `pair` in `array`**  
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

## **1. Using `pair` in `queue`**  

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

## **2. Using `pair` in `priority_queue`**  

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

## **3. Using `pair` in `stack`**  

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

### **2. STL Algorithms** 
- Provide commonly used operations such as sorting, searching, and manipulating data.

STL provides powerful algorithms for manipulating data in containers.

| Algorithm         | Description                           |
|------------------|---------------------------------------|
| `sort()`          | Sorts elements in ascending order    |
| `reverse()`       | Reverses a range of elements         |
| `find()`          | Searches for an element              |
| `binary_search()` | Checks if an element is present      |
| `accumulate()`    | Computes sum of elements in a range  |

---

### **3. STL Iterators**  
- Used to traverse elements in containers.

Iterators are used to traverse through elements in containers.

| Iterator         | Description                     |
|-----------------|---------------------------------|
| `begin()`        | Points to first element        |
| `end()`          | Points to position after last  |
| `rbegin()`       | Points to last element         |
| `rend()`         | Points before the first element |

---

### **4. STL Functors (Function Objects)**  
- Objects that behave like functions and can be passed as arguments to algorithms.

A **functor** is an object that behaves like a function by overloading the `()` operator.

**Example of a Functor:**  
```cpp
#include <iostream>
#include <algorithm>
using namespace std;

class MultiplyBy2 {
public:
    int operator()(int x) const {
        return x * 2;
    }
};

int main() {
    MultiplyBy2 m;
    cout << m(10);  // Output: 20
    return 0;
}
```

---

### **Advantages of Using STL in C++**  
- **Code Reusability:** Saves development time by providing ready-to-use solutions.  
- **Performance Optimization:** Efficient algorithms and data structures are implemented internally.  
- **Type Safety:** Uses templates to ensure type safety.  
- **Consistency:** Common interfaces across different container types.

---

### **Disadvantages of STL**  
- **Overhead:** Generic implementations might introduce memory and runtime overhead.  
- **Complexity:** Debugging STL-based code can be challenging due to abstraction.  
- **Less Control:** Direct memory control is limited compared to low-level implementations.

---
