### `array` (STL Array)

* A **`std::array`** is a fixed-size container (available in C++11 and later).
* It is a wrapper around a traditional C-style array.

#### Syntax:

```cpp
#include <array>
std::array<int, 5> arr = {1, 2, 3, 4, 5};
```

#### Important Functions:

```cpp
arr.size();         // Returns number of elements
arr.at(2);          // Access with bounds checking
arr.front();        // First element
arr.back();         // Last element
arr.fill(0);        // Fill all elements with a value
arr.begin(), arr.end(); // Iterators
```

---

### `vector` (STL Vector)

* A **`std::vector`** is a dynamic array (can grow/shrink at runtime).
* Very commonly used in STL.

#### Syntax:

```cpp
#include <vector>
std::vector<int> vec = {1, 2, 3};
```

#### Important Functions:

```cpp
vec.size();             // Returns number of elements
vec.push_back(4);       // Adds element at end
vec.pop_back();         // Removes last element
vec.at(1);              // Element at index 1 with bounds check
vec.front();            // First element
vec.back();             // Last element
vec.clear();            // Remove all elements
vec.insert(vec.begin() + 1, 99); // Insert 99 at position 1
vec.erase(vec.begin()); // Remove first element
vec.empty();            // Check if vector is empty
vec.begin(), vec.end(); // Iterators
```

---

### Example of `array` and `vector`:

```cpp
#include <iostream>
#include <array>
#include <vector>
using namespace std;

int main() {
    array<int, 3> arr = {1, 2, 3};
    vector<int> vec = {10, 20, 30};

    cout << "Array Elements: ";
    for (int i : arr) cout << i << " ";

    cout << "\nVector Elements: ";
    for (int i : vec) cout << i << " ";

    vec.push_back(40);
    cout << "\nAfter push_back: ";
    for (int i : vec) cout << i << " ";

    return 0;
}
```

---

### All Possible Vector Variants with STL Containers

You can create a `vector` of any STL container or object:

| Container Type                       | Example Code                              |
| ------------------------------------ | ----------------------------------------- |
| `vector<int>`                        | `vector<int> v;`                          |
| `vector<string>`                     | `vector<string> vs;`                      |
| `vector<pair<int,int>>`              | `vector<pair<int,int>> vp;`               |
| `vector<vector<int>>`                | `vector<vector<int>> matrix;`             |
| `vector<array<int, 3>>`              | `vector<array<int, 3>> va;`               |
| `vector<set<int>>`                   | `vector<set<int>> vs;`                    |
| `vector<map<int, int>>`              | `vector<map<int, int>> vm;`               |
| `vector<unordered_map<string, int>>` | `vector<unordered_map<string, int>> vum;` |
| `vector<list<int>>`                  | `vector<list<int>> vl;`                   |
| `vector<stack<int>>`                 | `vector<stack<int>> vs;`                  |
| `vector<queue<int>>`                 | `vector<queue<int>> vq;`                  |

> Note: If using nested containers like `vector<vector<int>>`, ensure proper initialization before accessing inner vectors.

---

Here's a detailed breakdown of **time complexity** for key **inbuilt operations** of `std::array` and `std::vector` in C++ STL:

---

## `std::array` – Time Complexity

> Fixed-size, behaves like a C-style array

| Operation                    | Time Complexity | Notes                        |
| ---------------------------- | --------------- | ---------------------------- |
| Access `arr[i]`, `arr.at(i)` | **O(1)**        | Direct access                |
| `arr.size()`                 | **O(1)**        | Returns fixed size           |
| `arr.fill(x)`                | **O(n)**        | Fills all elements with `x`  |
| Iteration                    | **O(n)**        | Looping through all elements |
| `arr.front()/back()`         | **O(1)**        | First/last element           |

> No push/pop/insert/erase as it's **fixed-size**.

---

## `std::vector` – Time Complexity

> Dynamic-size container, auto-resizing

| Operation             | Time Complexity    | Notes                                                   |
| --------------------- | ------------------ | ------------------------------------------------------- |
| `vec[i]`, `vec.at(i)` | **O(1)**           | Direct element access                                   |
| `vec.size()`          | **O(1)**           | Returns current size                                    |
| `vec.push_back(x)`    | **Amortized O(1)** | Sometimes reallocation causes O(n), but average is O(1) |
| `vec.pop_back()`      | **O(1)**           | Removes last element                                    |
| `vec.insert(pos, x)`  | **O(n)**           | Inserts at position → may shift all later elements      |
| `vec.erase(pos)`      | **O(n)**           | Erases one element, shifts elements                     |
| `vec.clear()`         | **O(n)**           | Removes all elements                                    |
| Iteration             | **O(n)**           | Loop through all elements                               |
| `vec.front()/back()`  | **O(1)**           | First and last elements                                 |
| `vec.empty()`         | **O(1)**           | Checks if size == 0                                     |

---


