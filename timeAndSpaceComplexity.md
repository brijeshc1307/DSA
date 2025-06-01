### Time Complexity

**Time complexity** is a way to describe the amount of **time** an algorithm takes to complete as a function of the **input size**. It helps in analyzing and comparing the efficiency of algorithms, especially as input sizes grow large.

---

### Why is Time Complexity Important?

1. **Performance Prediction**: Helps predict how fast an algorithm will run.
2. **Scalability**: Determines if an algorithm will work efficiently on large inputs.
3. **Comparison**: Makes it easier to compare multiple algorithms solving the same problem.

---

### How is Time Complexity Expressed?

Time complexity is expressed using **Big O notation**, which focuses on the **dominant term** and ignores constants and less significant terms.

**Big O Notation Examples:**

| Big O Notation | Name              | Example Algorithm            |
| -------------- | ----------------- | ---------------------------- |
| O(1)           | Constant Time     | Accessing an array element   |
| O(log n)       | Logarithmic Time  | Binary Search                |
| O(n)           | Linear Time       | Simple loop through array    |
| O(n log n)     | Linearithmic Time | Merge Sort, Quick Sort (avg) |
| O(n²)          | Quadratic Time    | Bubble Sort, Insertion Sort  |
| O(2ⁿ)          | Exponential Time  | Recursive Fibonacci          |
| O(n!)          | Factorial Time    | Solving traveling salesman   |

>Note: Lowest: O(1), Highest: O(n!)

---

### Time Complexity Analysis

There are typically **three cases** to consider:

1. **Best Case**: The minimum time required (e.g., target is at the beginning of a list).
2. **Average Case**: The expected time over all possible inputs.
3. **Worst Case**: The maximum time required (used most often for guarantees).

---

### Examples

#### 1. Constant Time: `O(1)`

```cpp
int getFirstElement(vector<int> &arr) {
    return arr[0];
}
```

Regardless of input size, this takes the same time.

---

#### 2. Linear Time: `O(n)`

```cpp
int sum(vector<int> &arr) {
    int total = 0;
    for (int i = 0; i < arr.size(); i++) {
        total += arr[i];
    }
    return total;
}
```

Time grows linearly with `n`.

---

#### 3. Quadratic Time: `O(n²)`

```cpp
void printPairs(vector<int> &arr) {
    for (int i = 0; i < arr.size(); i++) {
        for (int j = 0; j < arr.size(); j++) {
            cout << arr[i] << ", " << arr[j] << endl;
        }
    }
}
```

Nested loops over the same array = quadratic time.

---

### Tips to Analyze Time Complexity

1. **Ignore constants**: O(2n) is simplified to O(n).
2. **Drop lower-order terms**: O(n + log n) becomes O(n).
3. **Consider dominant operations**: Focus on loops, recursion, and data structure operations.

---

### Time Complexity of Common Operations

| Operation                   | Time Complexity      |
| --------------------------- | -------------------- |
| Access element (array)      | O(1)                 |
| Search (unsorted array)     | O(n)                 |
| Search (sorted array)       | O(log n)             |
| Insert/Delete (array end)   | O(1)                 |
| Insert/Delete (linked list) | O(1) (if node known) |
| Sorting (Quick/Merge Sort)  | O(n log n)           |

---

### Summary

* **Time complexity** measures **how algorithm performance scales**.
* Use **Big O notation** to express it.
* Focus on **dominant terms**, **loops**, and **recursive calls**.
* Always consider **worst-case** unless told otherwise.

---


---

### Space Complexity:

**Space complexity** is a way to measure how much **extra memory** (RAM) an algorithm or program uses **in terms of input size (`n`)**.

It includes:

1. **Input space**: Memory used to store the input.
2. **Auxiliary space**: Extra memory used by the algorithm (e.g., variables, arrays, call stacks, etc.).

> **Goal:** Find how memory usage grows as the input size grows.

---

### Why is Space Complexity Important?

* To ensure your program doesn't run out of memory.
* To choose space-efficient algorithms, especially in memory-limited environments like embedded systems or mobile apps.

---

### How to Calculate Space Complexity

1. **Count the size of all variables and data structures.**
2. **Ignore constants and low-order terms** just like with time complexity.
3. **Focus on memory that grows with `n`.**

---

### Example 1: Constant Space `O(1)`

```cpp
int sum(int arr[], int n) {
    int total = 0;
    for (int i = 0; i < n; i++) {
        total += arr[i];
    }
    return total;
}
```
 
Uses only a few variables regardless of input → **O(1)**

---

### Example 2: Linear Space `O(n)`

```cpp
int* copyArray(int arr[], int n) {
    int* newArr = new int[n];
    for (int i = 0; i < n; i++) {
        newArr[i] = arr[i];
    }
    return newArr;
}
```

Allocates new array of size `n` → **O(n)**

---

### Example 3: Recursive Function

```cpp
int factorial(int n) {
    if (n == 0) return 1;
    return n * factorial(n - 1);
}
```

Each call adds to the **call stack** → **O(n)** space due to recursion.

---

### Common Space Complexities

| Space Complexity | Description                                 | Example                            |
| ---------------- | ------------------------------------------- | ---------------------------------- |
| O(1)             | Constant extra space                        | Variable assignments, math ops     |
| O(log n)         | Logarithmic space (recursive binary search) | Binary search recursive call stack |
| O(n)             | Linear space                                | Storing elements, single recursion |
| O(n²)            | 2D matrix or nested recursion               | Dynamic programming tables         |

---

### Space vs Time Complexity

* **Time complexity** tells how fast.
* **Space complexity** tells how much memory.

Sometimes there's a trade-off:

* Use more memory to reduce time (e.g., caching results).
* Or use less memory and accept slower speed.

---

### Time Complexity vs Input Size Table

| Time Complexity | Max Input Size (n) | Approx Operations | Verdict           | Suitable Algorithms Examples                       |
| --------------- | ------------------ | ----------------- | ----------------- | -------------------------------------------------- |
| **O(1)**        | Any                | 1                 | Fast              | Direct formula, hash table lookup                  |
| **O(log n)**    | ≤ 10⁹              | \~30              | Fast              | Binary Search, Tree Search                         |
| **O(n)**        | ≤ 10⁷              | \~10 million      | Fast              | Linear Scan, Simple Loop                           |
| **O(n log n)**  | ≤ 10⁶              | \~20 million      | Acceptable        | Merge Sort, Heap, Efficient Sorting Algorithms     |
| **O(n²)**       | ≤ 10⁴              | 100 million       | Risky             | Nested loops, naive string matching                |
| **O(n³)**       | ≤ 500              | \~125 million     | Slow              | 3D Matrix multiplication, Floyd-Warshall (small n) |
| **O(2ⁿ)**       | ≤ 25               | 33 million+       | Very Slow         | Recursive subset, backtracking                     |
| **O(n!)**       | ≤ 10               | > 3.6 million     | Extremely Slow    | Brute-force permutations                           |

---

### Quick Tips to Avoid TLE

| Situation                  | Suggestion                                      |
| -------------------------- | ----------------------------------------------- |
| Large `n` (> 10⁵)          | Avoid nested loops → Use `O(n log n)` or better |
| String/array comparisons   | Use hashing instead of nested comparisons       |
| Repeated float comparisons | Use precision check (like `fabs(a - b) < 1e-6`) |
| Sorting and counting       | Sort + group instead of comparing all pairs     |
| TLE in nested loops        | Try to reduce duplicate checks or cache results |

---

### Example Fix for Your Case

In your original nested loop, you're comparing all pairs → **O(n²)** time.

For `n = 10⁵`, that becomes **10⁵ × 10⁵ = 10⁹ comparisons → TLE**.

**Fix**: Instead of comparing every pair, use a **frequency map**:

* Calculate time for each car.
* Round or use string hash for time (to avoid floating-point issues).
* Count how many times each time appears.

---

Here's a comprehensive table showing the **time complexity** of various **algorithms**, including **searching**, **sorting**, and other fundamental operations like **graph** and **dynamic programming** algorithms.

---

### Searching Algorithms

| Algorithm               | Best Case | Average Case | Worst Case |
| ----------------------- | --------- | ------------ | ---------- |
| Linear Search           | O(1)      | O(n)         | O(n)       |
| Binary Search (sorted)  | O(1)      | O(log n)     | O(log n)   |
| Ternary Search (sorted) | O(1)      | O(log₃ n)    | O(log₃ n)  |
| Interpolation Search    | O(1)      | O(log log n) | O(n)       |
| Exponential Search      | O(log i)  | O(log i)     | O(log i)   |
| Jump Search             | O(√n)     | O(√n)        | O(√n)      |

---

### Sorting Algorithms

| Algorithm                 | Best Case  | Average Case | Worst Case |
| ------------------------- | ---------- | ------------ | ---------- |
| Bubble Sort               | O(n)       | O(n²)        | O(n²)      |
| Insertion Sort            | O(n)       | O(n²)        | O(n²)      |
| Selection Sort            | O(n²)      | O(n²)        | O(n²)      |
| Merge Sort                | O(n log n) | O(n log n)   | O(n log n) |
| Quick Sort                | O(n log n) | O(n log n)   | O(n²)      |
| Heap Sort                 | O(n log n) | O(n log n)   | O(n log n) |
| Counting Sort             | O(n + k)   | O(n + k)     | O(n + k)   |
| Radix Sort                | O(nk)      | O(nk)        | O(nk)      |
| Bucket Sort               | O(n + k)   | O(n + k)     | O(n²)      |
| Tim Sort (used in Python) | O(n)       | O(n log n)   | O(n log n) |

---

### Recursion & Dynamic Programming

| Algorithm/Problem           | Time Complexity |
| --------------------------- | --------------- |
| Fibonacci (recursive)       | O(2ⁿ)           |
| Fibonacci (DP)              | O(n)            |
| Factorial (recursive)       | O(n)            |
| Matrix Chain Multiplication | O(n³)           |
| Longest Common Subsequence  | O(m × n)        |
| Longest Increasing Subseq.  | O(n log n)      |
| 0/1 Knapsack (DP)           | O(n × W)        |
| Coin Change (DP)            | O(n × amount)   |

---

### Graph Algorithms

| Algorithm              | Time Complexity             |
| ---------------------- | --------------------------- |
| BFS / DFS              | O(V + E)                    |
| Dijkstra’s (min-heap)  | O((V + E) log V)            |
| Bellman-Ford           | O(V × E)                    |
| Floyd-Warshall         | O(V³)                       |
| Prim’s (min-heap)      | O(E log V)                  |
| Kruskal’s (DSU)        | O(E log E)                  |
| Topological Sort (DFS) | O(V + E)                    |
| Tarjan’s SCC           | O(V + E)                    |
| Kosaraju’s SCC         | O(V + E)                    |
| A\* Search             | O(E) (depends on heuristic) |

---

### Data Structure Operations

| Operation                  | Time Complexity               |
| -------------------------- | ----------------------------- |
| Stack/Queue (push/pop)     | O(1)                          |
| Hash Table (insert/search) | O(1) avg / O(n) worst         |
| Binary Search Tree (BST)   | O(log n) avg / O(n) worst     |
| AVL Tree (balanced BST)    | O(log n)                      |
| Heap (insert/delete)       | O(log n)                      |
| Trie (insert/search)       | O(L), L = word length         |
| Union-Find (DSU)           | O(α(n)) with path compression |

---

## **License**
This project is licensed under the MIT License.

---

Happy Coding!


