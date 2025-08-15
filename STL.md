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

### **1. Containers** 
- Used to store and manage collections of data.

STL containers are categorized into 4 types:

#### **A. Sequence Containers**  
Stores elements sequentially (like arrays).  
| Container  | Description           | Example Operations        |
|----------------|---------------------------|--------------------------------|
| `array`         | Static array (fixed size) | `at()`, `size()`, `fill()`     |
| [vector](#vector) | Dynamic array              | `push_back()`, `pop_back()`, `size()` |
| [deque](#deque)     | Double-ended queue         | `push_front()`, `push_back()`, `pop_front()`, `pop_back()` |
| [list](#list)       | Doubly linked list         | `push_front()`, `push_back()`, `pop_front()`, `pop_back()` |
| `forward_list`  | Singly linked list          | `push_front()`, `pop_front()`, `insert_after()` |

---

#### **B. Associative Containers**  
Stores elements in a sorted/unordered fashion using keys.  
| Container     | Description              | Example Operations      |
|---------------|--------------------------|-------------------------|
| [set](#set)         | Unique sorted elements    | `insert()`, `erase()`    |
| [map](#map)         | Key-value pairs (sorted)  | `insert()`, `find()`     |
| [multiset](#multiset)    | Allows duplicate elements | `count()`, `equal_range()` |
| [multimap](#multimap)    | Multiple key-value pairs  | `insert()`, `find()`     |

---

#### **C. Unordered Associative Containers**  
Stores elements with no specific order, offering faster access compared to ordered containers.  
| Container             | Description                 |
|----------------------------|----------------------------------|
| [unordered_set](#unordered_set)            | Unique elements, no specific order |
| [unordered_map](#unordered_map)            | Key-value pairs, no specific order |
| [unordered_multiset](#unordered_multiset)  | Allows duplicate elements, no specific order |
| [unordered_multimap](#unordered_multimap)  | Allows duplicate key-value pairs, no specific order |

---

#### **D. Containers Adapters**  
Stores elements with no specific order, offering faster access compared to ordered containers.  
| **Container**          | **Description**                            |
|------------------------|--------------------------------------------|
| [queue](#queue)                | FIFO (First-In-First-Out) container, elements are processed in the order they are added |
| [priority_queue](#priority_queue)       | Elements are ordered based on priority (default: max-heap) |
| [stack](#stack)                | LIFO (Last-In-First-Out) container, elements are processed in reverse order of addition |

---

### **1. Pair**
The `pair` in C++ STL is a utility that allows storing two heterogeneous values (of possibly different types) in a single unit. It is commonly used to combine two values and pass them together, such as key-value pairs in maps.
 
>Pair एक Class है , जो दो Value Store करती है ये Pair रिलेशन Maintain करने लिए के Use करते है

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

#### **4. Using `pair` in `array`**  
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

#### **5. Using `pair` in `list`**  
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

#### **6. Using `pair` in `deque`**  
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

#### **7. Using `pair` in `forward_list`**  
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

#### **8. Using `pair` in `set`**  
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

#### **9. Using `pair` in `multiset`**  
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

#### **10. Using `pair` in `map`**  
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

#### **11. Using `pair` in `multimap`**  
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

#### **12. Using `pair` in `queue`**  

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

#### **13. Using `pair` in `priority_queue`**  

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

#### **14. Using `pair` in `stack`**  

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
---

###  **STL Operations Table**

| Category      | STL Component    | Common Operations                                          | Description                                    |
| ------------- | ---------------- | ---------------------------------------------------------- | ---------------------------------------------- |
| **Container** | `vector`         | `push_back()`, `pop_back()`, `size()`, `at()`, `clear()`   | Dynamic array; fast access and push/pop at end |
|               | `list`           | `push_front()`, `push_back()`, `pop_front()`, `remove()`   | Doubly linked list                             |
|               | `deque`          | `push_front()`, `push_back()`, `pop_front()`, `pop_back()` | Double-ended queue                             |
|               | `stack`          | `push()`, `pop()`, `top()`, `empty()`                      | LIFO stack (based on deque or vector)          |
|               | `queue`          | `push()`, `pop()`, `front()`, `back()`                     | FIFO queue (based on deque)                    |
|               | `priority_queue` | `push()`, `pop()`, `top()`                                 | Max-heap by default                            |
|               | `set`            | `insert()`, `erase()`, `find()`, `count()`                 | Sorted unique elements (RB-tree)               |
|               | `unordered_set`  | `insert()`, `erase()`, `find()`, `count()`                 | Hash-based, faster access                      |
|               | `map`            | `insert()`, `erase()`, `find()`, `[]`                      | Key-value pairs with sorted keys               |
|               | `unordered_map`  | `insert()`, `erase()`, `find()`, `[]`                      | Hash-based key-value pairs                     |
|               | `multiset`       | `insert()`, `erase()`, `count()`                           | Allows duplicate elements                      |
|               | `multimap`       | `insert()`, `equal_range()`, `find()`                      | Multiple values per key allowed                |

---

###  **2. Iterators**

| Operation        | Description                              |
| ---------------- | ---------------------------------------- |
| `begin()`        | Returns iterator to first element        |
| `end()`          | Returns iterator to past-the-end element |
| `rbegin()`       | Reverse begin                            |
| `rend()`         | Reverse end                              |
| `advance(it, n)` | Moves iterator forward by `n` steps      |
| `next(it)`       | Returns iterator advanced by one         |
| `prev(it)`       | Returns iterator moved back by one       |

---

###  **3. Algorithms (Header: `<algorithm>`)**

| Algorithm         | Purpose                                       |
| ----------------- | --------------------------------------------- |
| `sort()`          | Sorts range                                   |
| `reverse()`       | Reverses elements in range                    |
| `count()`         | Counts occurrences of an element              |
| `find()`          | Finds first occurrence of a value             |
| `accumulate()`    | Sums elements (needs `<numeric>`)             |
| `binary_search()` | Checks if value exists in sorted range        |
| `lower_bound()`   | Returns first element ≥ value in sorted range |
| `upper_bound()`   | Returns first element > value in sorted range |
| `for_each()`      | Applies function to each element              |
| `copy()`          | Copies one range to another                   |
| `remove()`        | Removes value logically (use with erase)      |
| `unique()`        | Removes consecutive duplicates                |

---

###  **4. Function Objects (Functors)**

| Functor                         | Description                                      |
| ------------------------------- | ------------------------------------------------ |
| `greater<>()`                   | Comparison functor for descending order          |
| `less<>()`                      | Comparison functor for ascending order (default) |
| `not_equal_to<>()`              | Checks inequality                                |
| `plus<>()`, `minus<>()`         | Arithmetic operations                            |
| `multiplies<>()`, `divides<>()` | Multiplicative operations                        |
| Custom functor                  | Define with overloaded `operator()`              |

---
###  **5. Utility**

| **Utility**  | **Description**                                         |
| ------------ | ------------------------------------------------------- |
| `pair`       | Stores two heterogeneous objects as a single unit       |
| `make_pair`  | Creates a `pair` object conveniently                    |
| `tuple`      | Fixed-size collection of heterogeneous values           |
| `make_tuple` | Creates a `tuple` object                                |
| `tie`        | Unpacks tuple into individual variables                 |
| `ignore`     | Placeholder to ignore elements when unpacking a tuple   |
| `function`   | General-purpose polymorphic function wrapper            |
| `bind`       | Binds arguments to functions, creating callable objects |
| `ref`        | Wraps a reference to be passed to functions             |
| `cref`       | Wraps a const reference                                 |

---

###  **6. Allocators** 

| **Allocator**                     | **Description**                                                            |
| --------------------------------- | -------------------------------------------------------------------------- |
| `std::allocator`                  | Default allocator that handles memory allocation and deallocation.         |
| `std::pmr::polymorphic_allocator` | Allocator that supports polymorphic memory resource allocation (C++17).    |
| Custom Allocator                  | User-defined allocator for customized memory management and optimizations. |

---
## Vector

A **`vector`** is a **sequence container** that uses **dynamic arrays** internally. It allows **random access**, **fast insertion/removal at the end**, and is **resizable**.

###  Key Features:

* Automatically resizes itself.
* Allows direct access to elements using the `[]` operator or `.at()`.
* Stored in **contiguous memory** (like arrays).
* Belongs to the `<vector>` header in C++.

---

## Syntax:

```cpp
#include <vector>
#include <iostream>

std::vector<int> vec; // Declaring a vector of integers
```

You can initialize vectors in various ways:

```cpp
std::vector<int> v1;                       // Empty vector
std::vector<int> v2(5);                    // Vector of size 5 with default values (0)
std::vector<int> v3(5, 10);                // Vector of size 5 with all elements = 10
std::vector<int> v4 = {1, 2, 3, 4};        // Initializer list
```

---

## Common Member Functions of `vector`:

| Function             | Description                                  |
| -------------------- | -------------------------------------------- |
| `push_back(val)`     | Adds element at the end                      |
| `pop_back()`         | Removes last element                         |
| `size()`             | Returns the number of elements               |
| `capacity()`         | Returns current allocated space              |
| `resize(n)`          | Resizes vector to contain `n` elements       |
| `clear()`            | Removes all elements                         |
| `empty()`            | Checks if vector is empty                    |
| `insert(pos, val)`   | Inserts element at specified position        |
| `erase(pos)`         | Removes element from position                |
| `front()` / `back()` | Returns first/last element                   |
| `begin()` / `end()`  | Returns iterator to first/after-last element |

---

## Example:

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    cout << "Vector contents: ";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }

    cout << "\nFirst element: " << v.front();
    cout << "\nLast element: " << v.back();
    cout << "\nSize: " << v.size();

    return 0;
}
```

---

##  Vector vs Other STL Containers:

| Feature       | `vector`    | `list`           | `deque`            | `set`           |
| ------------- | ----------- | ---------------- | ------------------ | --------------- |
| Memory        | Contiguous  | Doubly linked    | Double-ended array | Tree-based      |
| Random Access | ✅ Fast      | ❌ Slow           | ✅ Fast             | ❌ Not allowed   |
| Insert/Erase  | End: ✅ Fast | Anywhere: ✅ Fast | Ends: ✅ Fast       | ❌ Only Unique   |
| Duplicate     | ✅ Allowed   | ✅ Allowed        | ✅ Allowed          | ❌ Not Allowed   |
| Sorting       | Manual      | Manual           | Manual             | ✅ Automatically |

---

## When to Use `vector`?

Use `vector` when:

* You need **fast random access**.
* You frequently **add or remove elements at the end**.
* You don’t need frequent insertions/deletions in the middle.

---

## 1. **Vector of Vectors** (`vector<vector<int>>`)

Used for 2D arrays, matrices, adjacency lists, etc.

### Syntax:

```cpp
vector<vector<int>> matrix;

matrix.push_back({1, 2, 3});
matrix.push_back({4, 5, 6});
```

### Example:

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<vector<int>> vec = {
        {1, 2},
        {3, 4},
        {5, 6}
    };

    for (int i = 0; i < vec.size(); i++) {
        for (int j = 0; j < vec[i].size(); j++) {
            cout << vec[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
```

---

## 2. **Vector of Pairs** (`vector<pair<int, int>>`)

Used for storing key-value like relationships, coordinate points, etc.

### Syntax:

```cpp
vector<pair<int, int>> vp;
vp.push_back({1, 10});
vp.push_back({2, 20});
```

### Example:

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<pair<int, int>> vp;

    vp.push_back({1, 100});
    vp.push_back(make_pair(2, 200));

    for (auto &p : vp) {
        cout << "{" << p.first << ", " << p.second << "}\n";
    }

    return 0;
}
```

---

## 4. **Vector of Tuples** (`vector<tuple<int, int, string>>`)

Used when more than 2 values are needed per record.

```cpp
#include <iostream>
#include <vector>
#include <tuple>
using namespace std;

int main() {
    vector<tuple<int, int, string>> students;

    students.push_back({1, 90, "Alice"});
    students.push_back({2, 85, "Bob"});

    for (auto& t : students) {
        int id, marks;
        string name;
        tie(id, marks, name) = t;
        cout << id << " " << marks << " " << name << endl;
    }

    return 0;
}
```

---

##  5. **Vector of Maps / Sets / Queues** (Container inside vector)

You can combine STL containers as needed.

###  Example: `vector<set<int>>` — useful for unique 2D structures

```cpp
vector<set<int>> vset(3); // 3 rows of sets
vset[0].insert(10);
vset[1].insert(20);
```

---

##  6. **Nested STL Use Summary Table**

| Container Type             | Use Case                       |
| -------------------------- | ------------------------------ |
| `vector<vector<int>>`      | 2D arrays, matrices            |
| `vector<pair<int, int>>`   | Coordinates, key-value pairs   |
| `pair<vector<int>, int>`   | List with metadata             |
| `vector<tuple<...>>`       | Records with multiple fields   |
| `vector<set<int>>`         | Matrix with unique row values  |
| `vector<map<string, int>>` | Structured data rows like JSON |

---

## Deque

A **`deque`** is a dynamic array that allows fast:

* `push_front()` / `pop_front()` (front operations)
* `push_back()` / `pop_back()` (back operations)

It is more flexible than `vector` which only allows fast operations at the back.

###  Header:

```cpp
#include <deque>
```

---

##  Syntax:

```cpp
#include <deque>

std::deque<int> dq;
```

You can initialize like:

```cpp
deque<int> dq1;                  // Empty deque
deque<int> dq2(5);               // Deque of size 5 with default value 0
deque<int> dq3(5, 100);          // Deque of size 5 with value 100
deque<int> dq4 = {1, 2, 3};      // Initializer list
```

---

## 🔩 Common Operations:

| Function             | Description                      |
| -------------------- | -------------------------------- |
| `push_back(val)`     | Insert at the end                |
| `push_front(val)`    | Insert at the front              |
| `pop_back()`         | Remove from the end              |
| `pop_front()`        | Remove from the front            |
| `front()` / `back()` | Access first/last element        |
| `size()`             | Number of elements               |
| `clear()`            | Remove all elements              |
| `empty()`            | Check if deque is empty          |
| `at(index)`          | Access element with bounds check |
| `operator[]`         | Access element (no bounds check) |
| `insert(pos, val)`   | Insert at a given position       |
| `erase(pos)`         | Erase element at position        |

---

##  Example:

```cpp
#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> dq;

    dq.push_back(10);
    dq.push_front(5);
    dq.push_back(20);

    cout << "Deque contents: ";
    for (int x : dq)
        cout << x << " "; // Output: 5 10 20

    dq.pop_front(); // removes 5
    dq.pop_back();  // removes 20

    cout << "\nAfter popping: ";
    for (int x : dq)
        cout << x << " "; // Output: 10

    return 0;
}
```

---

##  `deque` vs Other STL Containers

| Feature                  | `vector`   | `deque`                 | `list`     |
| ------------------------ | ---------- | ----------------------- | ---------- |
| Random access            | ✅ Fast     | ✅ Fast                  | ❌ Slow     |
| push\_back / pop\_back   | ✅ Fast     | ✅ Fast                  | ✅ Fast     |
| push\_front / pop\_front | ❌ Slow     | ✅ Fast                  | ✅ Fast     |
| Insert in middle         | ❌ Slow     | ❌ Slow                  | ✅ Fast     |
| Memory layout            | Contiguous | Chunks (non-contiguous) | Node-based |

---

##  Deque with STL Containers

### 1. `deque<pair<int, int>>` — Useful in graph problems:

```cpp
deque<pair<int, int>> dq;
dq.push_back({1, 100});
dq.push_front({2, 200});
```

### 2. `deque<vector<int>>` — For multi-level data:

```cpp
deque<vector<int>> dq;
dq.push_back({1, 2, 3});
dq.push_front({4, 5});
```

### 3. `deque<set<int>>` — Unique sets with front/back access:

```cpp
deque<set<int>> dq(2);  // 2 sets
dq[0].insert(1);
dq[1].insert(2);
```

---

##  When to Use `deque`?

Use `deque` when:

* You need **fast insertion/removal from both ends**.
* You also want **random access** like `vector`.
* You don't need contiguous memory like `vector`.

Avoid if:

* You need frequent insert/delete in the middle → use `list`.

---

##  Summary:

| Feature             | `deque`                     |
| ------------------- | --------------------------- |
| Double-ended access | ✅ Front & back (fast)       |
| Random access       | ✅ Fast                      |
| Memory              | Non-contiguous chunks       |
| Use case            | Sliding window, BFS, queues |
| STL header          | `<deque>`                   |

---

## Map 
A `map` stores elements as **pairs**:

```cpp
key -> value
```

* Each key is **unique**.
* Internally implemented using a **balanced BST** (typically a Red-Black Tree).
* Automatically **sorted by key** in ascending order.
>a **`map`** is an **associative container** in STL that stores key-value pairs in **sorted order** (by key) and allows **fast retrieval** based on the key.

### Header:

```cpp
#include <map>
```

---

## Syntax:

```cpp
std::map<KeyType, ValueType> map_name;
```

### Example:

```cpp
map<int, string> m;
m[1] = "One";
m[2] = "Two";
```

---

## Common Member Functions:

| Function            | Description                              |
| ------------------- | ---------------------------------------- |
| `insert({k, v})`    | Inserts key-value pair                   |
| `m[key] = value`    | Inserts/updates key                      |
| `m.at(key)`         | Access value at key with bounds checking |
| `m.find(key)`       | Returns iterator to key if found         |
| `m.erase(key)`      | Removes element by key                   |
| `m.size()`          | Number of elements                       |
| `m.clear()`         | Removes all elements                     |
| `m.empty()`         | Returns true if map is empty             |
| `m.begin()/m.end()` | Iterators to start/end                   |

---

## Example:

```cpp
#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, string> m;

    m[101] = "Alice";
    m[102] = "Bob";
    m[100] = "Charlie";

    for (auto &entry : m) {
        cout << entry.first << ": " << entry.second << endl;
    }

    return 0;
}
```

### Output:

```
100: Charlie
101: Alice
102: Bob
```

 Notice the keys are automatically sorted.

---

## `map` vs `unordered_map`

| Feature            | `map`              | `unordered_map`          |
| ------------------ | ------------------ | ------------------------ |
| Internal Structure | Red-Black Tree     | Hash Table               |
| Order              | Sorted by key      | No specific order        |
| Time Complexity    | O(log n)           | O(1) average, O(n) worst |
| Key Type           | Must be comparable | Must be hashable         |

---

## `map` with STL Containers

### 1. `map<string, vector<int>>` – useful in grouping:

```cpp
map<string, vector<int>> studentMarks;
studentMarks["Alice"].push_back(90);
studentMarks["Bob"].push_back(80);
```

### 2. `map<int, pair<string, float>>` – mapping IDs to info:

```cpp
map<int, pair<string, float>> students;
students[1] = {"Alice", 90.5};
```

### 3. `map<int, set<int>>` – graph adjacency list:

```cpp
map<int, set<int>> graph;
graph[0].insert(1);
graph[0].insert(2);
```

---

## 🔍 Find and Erase Example:

```cpp
map<int, string> m;
m[1] = "A";
m[2] = "B";

if (m.find(2) != m.end()) {
    cout << "Found: " << m[2];
    m.erase(2);
}
```

---

## 🧠 Summary:

| Property           | Value                       |
| ------------------ | --------------------------- |
| Key uniqueness     | ✅ Keys must be unique       |
| Ordering           | ✅ Sorted by key (ascending) |
| Duplicate keys     | ❌ Not allowed               |
| Access time        | O(log n)                    |
| Internal structure | Red-Black Tree              |
| Header             | `<map>`                     |

---

## 🚀 Real Use Cases:

* Counting frequency: `map<char, int> freq`
* Index mapping: `map<int, int>`
* Adjacency list for graphs
* Caching or dictionary-based lookups

---




