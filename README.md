### DSA

**DSA** stands for **Data Structures and Algorithms**. It’s a fundamental area in computer science that focuses on how data is organized and how you can manipulate it efficiently to solve problems.

---
# DSA Topics Index (with C++)

A structured roadmap for mastering **Data Structures and Algorithms** using C++. Use this guide to strengthen your problem-solving skills and prepare for coding interviews.

| **S. No.** | **Topic**                                                                               | **Description**                                                               |
| ---------- | --------------------------------------------------------------------------------------- | ----------------------------------------------------------------------------- |
| 1          | [C++ Basics](https://github.com/brijeshc1307/CPP/blob/main/basics.md)                   | Syntax, I/O, data types, functions, and basic C++ concepts.                   |
| 2          | [Time & Space Complexity](/timeAndSpaceComplexity.md)                                   | Big-O notation, best/average/worst cases, and common complexities.            |
| 3          | [STL (Standard Template Library)](/STL.md)                                              | Vectors, sets, maps, stacks, queues, priority queues, and useful algorithms.  |
| 4          | [Arrays](https://github.com/brijeshc1307/CPP/blob/main/array.md)                        | Static arrays, prefix sums, Kadane’s Algorithm (Max Subarray Sum) , Dutch National Flag Algorithm, Two Pointer Technique, Sliding Window Techniqueand and common problems              |
| 5          | [Matrix](/Matrix.md)                      | Matrix using array / vecotr, Spiral Order Traversal, Matrix Rotation (90°, 180°, etc.), Search in Sorted Matrix, Flood Fill Algorithm, Matrix Multiplication, Set Matrix Zeroes, Dynamic Programming on 2D Grid (e.g., Unique Paths, Min Path Sum)            |
| 6          | [Strings](https://github.com/brijeshc1307/CPP/blob/main/string.md)                      | String manipulation, pattern matching, and hashing.                           |
| 7          | [Linked List](/LinkedList.md)                                                           | Singly, doubly, circular and priority linked lists; Floyd’s Cycle Detection (Tortoise and Hare), Merge Two Sorted Lists, Detect and Remove Loop, Find Middle of Linked List, Palindrome Check, Merge Sort on Linked List, operations and problems.           |
| 8          | [Stacks](/Stack.md)                                                   | Implementation, applications, monotonic stacks/queues,  Infix to Postfix / Prefix Conversion, Postfix / Prefix Evaluation, Balanced Parentheses Check, Next Greater Element, Histogram Max Area, Design Min Stack, Stock Span Problem                      |
| 9          | [Queues](/Queues.md)                                                                   | Circular Queue Implementation, Deque Operations, BFS (Breadth-First Search), Sliding Window Maximum, LRU Cache Design, Rotten Oranges (Matrix BFS)                  |
| 10          | [Hashing](/Hasing.md)                                                                   | Hash maps, sets, frequency counting, and collision handling, Two Sum Problem, Subarray Sum Equals K, Group Anagrams, Longest Consecutive Sequence, Count Distinct Elements, Frequency Map, Detect Duplicates.                  |
| 11          | [Recursion & Backtracking](/Recursion.md)                                                | Base cases, recursion trees, and backtracking templates.                      |
| 12        | [Searching Algorithms](/SearchingAlgorithms.md)                                        | Linear Search, Binary Search, Jump Search, Interpolation Search, Exponential Search. |
| 13         | [Sorting Algorithms](/sort.md)                                                        | Bubble Sort, Selection Sort, Insertion Sort, Merge Sort, Quick Sort, Heap Sort, Counting Sort, Radix Sort, Bucket Sort, Shell Sort, Tim Sort.                           |
| 14         | [Two Pointers](/TwoPointers.md)                                                       | Common patterns and problems (e.g., pair sum, container with most water).     |
| 15         | [Greedy Algorithms](/GreedyAlgorithm.md)                                               | Activity selection, job scheduling, and interval problems.                    |
| 16         | [Sliding Window Technique](/SlidingWindowTechnique.md)                                 | Fixed and variable window size problems.                                      |
| 17         | [Binary Search Trees (BST)](bst.md)                                                     | Insertion, deletion, traversal, and properties.                               |
| 18         | [Heaps & Priority Queue](heaps.md)                                                      | Min/max heaps, heap sort, and Dijkstra’s heap usage.                          |
| 19         | [Tries (Prefix Trees)](tries.md)                                                        | Efficient string storage and retrieval.                                       |
| 20         | [Graphs](graphs.md)                                                                     | BFS, DFS, topological sort, cycle detection, and adjacency list/matrix.       |
| 21         | [Shortest Path Algorithms](shortest-path.md)                                            | Dijkstra, Bellman-Ford, and Floyd-Warshall.                                   |
| 22         | [Minimum Spanning Tree](mst.md)                                                         | Kruskal’s and Prim’s algorithms.                                              |
| 23         | [Dynamic Programming (DP)](dp.md)                                                       | Memoization, tabulation, and problem patterns, Fibonacci (Memoization / Tabulation), 0/1 Knapsack, Unbounded Knapsack, Longest Common Subsequence (LCS), Longest Increasing Subsequence (LIS), Matrix Chain Multiplication, Rod Cutting, Coin Change, Edit Distance, Subset Sum, Partition Problem      |
| 24        | [Bit Manipulation](bit-manipulation.md)                                                 | Bitwise operations, XOR tricks, and set bits counting.                        |
| 25         | [Disjoint Set Union (DSU)](dsu.md)                                                      | Union-find, path compression, and Kruskal's helper.                           |
| 26        | [Segment Trees & Fenwick Tree](segment-tree.md)                                         | Range queries and updates.                                                    |
| 27         | [Top Interview Problems](https://docs.google.com/spreadsheets/d/1z9bV0WCUppYZK5DW3uECi7YTDiAxEVq6/edit?usp=sharing&ouid=105991459636824159614&rtpof=true&sd=true)                           | Most frequently asked coding problems with solutions.                         |


---

### **1. Data Structures (DS)**
Data Structures are ways to store and organize data in a computer so that it can be accessed and modified efficiently.

### **Linear Data Structures**

1. **Array**
2. **Linked List**

   * Singly Linked List
   * Doubly Linked List
   * Circular Linked List
3. **Stack**
4. **Queue**

   * Simple Queue
   * Circular Queue
   * Priority Queue
   * Deque (Double Ended Queue)

### **Non-Linear Data Structures**

1. **Tree**

   * Binary Tree
   * Binary Search Tree (BST)
   * AVL Tree
   * Red-Black Tree
   * B-Tree
   * B+ Tree
   * Segment Tree
   * Fenwick Tree (Binary Indexed Tree)
   * Trie (Prefix Tree)
   * N-ary Tree
   * Suffix Tree

2. **Graph**

   * Directed Graph
   * Undirected Graph
   * Weighted Graph
   * Unweighted Graph
   * Adjacency Matrix / List Representation

### **Hash-based Structures**

1. **Hash Table**
2. **Hash Map**
3. **Hash Set**

### **Other Advanced Structures**

1. **Heap**

   * Min Heap
   * Max Heap
   * Fibonacci Heap
2. **Disjoint Set (Union-Find)**
3. **Skip List**
4. **Bloom Filter**
5. **LRU Cache (uses HashMap + Doubly Linked List)**

---

###  **2. Algorithms (A)**
Algorithms are step-by-step procedures or formulas for solving problems.

###  **Sorting Algorithms**

1. **Bubble Sort**
2. **Selection Sort**
3. **Insertion Sort**
4. **Merge Sort**
5. **Quick Sort**
6. **Heap Sort**
7. **Counting Sort**
8. **Radix Sort**
9. **Bucket Sort**
10. **Shell Sort**
11. **Tim Sort**

###  **Searching Algorithms**

1. **Linear Search**
2. **Binary Search**
3. **Jump Search**
4. **Interpolation Search**
5. **Exponential Search**

###  **Divide and Conquer Algorithms**

1. Merge Sort
2. Quick Sort
3. Binary Search
4. Closest Pair of Points

###  **Dynamic Programming (DP) Algorithms**

1. **Fibonacci Sequence**
2. **Longest Common Subsequence (LCS)**
3. **Longest Increasing Subsequence (LIS)**
4. **Knapsack Problem**
5. **Matrix Chain Multiplication**
6. **Edit Distance**
7. **Subset Sum Problem**
8. **Coin Change Problem**

###  **Greedy Algorithms**

1. **Activity Selection**
2. **Huffman Coding**
3. **Fractional Knapsack**
4. **Prim’s Algorithm**
5. **Kruskal’s Algorithm**
6. **Dijkstra’s Algorithm**

###  **Graph Algorithms**

1. **Depth First Search (DFS)**
2. **Breadth First Search (BFS)**
3. **Dijkstra’s Algorithm**
4. **Bellman-Ford Algorithm**
5. **Floyd-Warshall Algorithm**
6. **Prim’s Algorithm**
7. **Kruskal’s Algorithm**
8. **Topological Sorting**
9. **Kosaraju’s Algorithm (SCC)**
10. **Tarjan’s Algorithm**
11. **A* Algorithm*\*

###  **Backtracking Algorithms**

1. **N-Queens Problem**
2. **Sudoku Solver**
3. **Rat in a Maze**
4. **Subset Sum**
5. **Hamiltonian Cycle**
6. **Knight’s Tour**

###  **Recursion Algorithms**

* Tower of Hanoi
* Factorial
* Fibonacci
* Combinations/Permutations

###  **Mathematical Algorithms**

1. **Greatest Common Divisor (GCD)**
2. **Sieve of Eratosthenes**
3. **Fast Exponentiation**
4. **Modulo Arithmetic**
5. **Euclidean Algorithm**
6. **Number Theory Algorithms**

###  **String Algorithms**

1. **KMP Algorithm**
2. **Rabin-Karp**
3. **Z-Algorithm**
4. **Trie-Based Matching**
5. **Manacher’s Algorithm (Palindrome detection)**
6. **Suffix Arrays**
7. **Aho-Corasick Algorithm**

###  **Bit Manipulation Algorithms**

1. Count set bits
2. Check if number is power of 2
3. Bitwise AND, OR, XOR applications
4. XOR based swap
5. Subsets using bit masking

---


### Full DSA Table – Data Structures & Algorithms

| **Data Structure (DS)**         | **Algorithms**                                                                                                                                                                                                                                                                                                                                           |
| ------------------------------- | -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| **Array**                       | - Linear Search <br> - Binary Search <br> - Kadane’s Algorithm (Max Subarray Sum) <br> - Sorting Algorithms (Bubble, Selection, Insertion, Merge, Quick, Heap, Radix) <br> - Dutch National Flag Algorithm <br> - Two Pointer Technique <br> - Sliding Window Technique                                                                                  |
| **Linked List**                 | - Insertion / Deletion <br> - Reverse Linked List (Iterative/Recursive) <br> - Floyd’s Cycle Detection (Tortoise and Hare) <br> - Merge Two Sorted Lists <br> - Detect and Remove Loop <br> - Find Middle of Linked List <br> - Palindrome Check <br> - Merge Sort on Linked List                                                                        |
| **Stack**                       | - Infix to Postfix / Prefix Conversion <br> - Postfix / Prefix Evaluation <br> - Balanced Parentheses Check <br> - Next Greater Element <br> - Histogram Max Area <br> - Design Min Stack <br> - Stock Span Problem                                                                                                                                      |
| **Queue**                       | - Circular Queue Implementation <br> - Deque Operations <br> - BFS (Breadth-First Search) <br> - Sliding Window Maximum <br> - LRU Cache Design <br> - Rotten Oranges (Matrix BFS)                                                                                                                                                                       |
| **Hash Table / Hash Map**       | - Two Sum Problem <br> - Subarray Sum Equals K <br> - Group Anagrams <br> - Longest Consecutive Sequence <br> - Count Distinct Elements <br> - Frequency Map <br> - Detect Duplicates                                                                                                                                                                    |
| **Heap / Priority Queue**       | - Heap Sort <br> - Kth Largest / Smallest Element <br> - Merge K Sorted Lists <br> - Median of Stream <br> - Dijkstra’s Algorithm <br> - Top K Frequent Elements <br> - Min/Max Heap Operations                                                                                                                                                          |
| **Tree (Binary Tree / BST)**    | - Inorder, Preorder, Postorder Traversals <br> - Level Order Traversal <br> - Binary Tree to DLL <br> - Height / Diameter <br> - Lowest Common Ancestor (LCA) <br> - Serialize/Deserialize Tree <br> - BST Insertion / Deletion <br> - Validate BST <br> - Morris Traversal                                                                              |
| **Graph**                       | - DFS (Depth-First Search) <br> - BFS (Breadth-First Search) <br> - Dijkstra’s Algorithm <br> - Bellman-Ford Algorithm <br> - Floyd-Warshall Algorithm <br> - Kruskal’s Algorithm <br> - Prim’s Algorithm <br> - Topological Sort <br> - Detect Cycle (Directed/Undirected) <br> - Kosaraju’s Algorithm (SCC) <br> - Union-Find for Connected Components |
| **Trie (Prefix Tree)**          | - Insert / Search / Delete Word <br> - Auto-complete System <br> - Longest Prefix Matching <br> - Word Dictionary with Wildcard <br> - Word Break Problem <br> - Count Words with Prefix                                                                                                                                                                 |
| **Segment Tree / Fenwick Tree** | - Range Sum Query <br> - Range Minimum / Maximum Query <br> - Point Updates <br> - Lazy Propagation (Range Updates) <br> - Binary Indexed Tree (Fenwick Tree) for Prefix Sums                                                                                                                                                                            |
| **Disjoint Set (Union-Find)**   | - Find with Path Compression <br> - Union by Rank / Size <br> - Kruskal’s Algorithm <br> - Connected Components <br> - Detect Cycle in Graph <br> - Dynamic Connectivity                                                                                                                                                                                 |
| **Matrix**                      | - Spiral Order Traversal <br> - Matrix Rotation (90°, 180°, etc.) <br> - Search in Sorted Matrix <br> - Flood Fill Algorithm <br> - Matrix Multiplication <br> - Set Matrix Zeroes <br> - Dynamic Programming on 2D Grid (e.g., Unique Paths, Min Path Sum)                                                                                              |
| **Dynamic Programming (DP)**    | - Fibonacci (Memoization / Tabulation) <br> - 0/1 Knapsack <br> - Unbounded Knapsack <br> - Longest Common Subsequence (LCS) <br> - Longest Increasing Subsequence (LIS) <br> - Matrix Chain Multiplication <br> - Rod Cutting <br> - Coin Change <br> - Edit Distance <br> - Subset Sum <br> - Partition Problem                                        |

---

###  Why Learn DSA?

*  **Improves Problem-Solving**: You learn to break down problems logically.
*  **Crucial for Coding Interviews**: Companies like Google, Amazon, Microsoft, etc., heavily focus on DSA in interviews.
*  **Optimizes Code**: Efficient DSA use means faster, better-performing programs.
*  **Builds Logical Thinking**: Helps you think like a software engineer.

---

### Real-Life Applications

* **Routing algorithms in Google Maps** (Graphs)
* **Auto-complete and Search suggestions** (Tries)
* **Memory management in OS** (Linked lists, Trees)
* **Social networks** (Graphs, Hash Maps)

---

### **Data Structures Time Complexity Table**

| Data Structure             | Access   | Insert   | Delete   | Search   |
| -------------------------- | -------- | -------- | -------- | -------- |
| Array                      | O(1)     | O(1)     | O(n)     | O(n)     |
| Singly Linked List         | O(1)     | O(1)     | O(n)     | O(n)     |
| Doubly Linked List         | O(1)     | O(1)     | O(n)     | O(n)     |
| Stack (Array/Linked List)  | O(1)     | O(1)     | O(n)     | O(n)     |
| Queue (Array/Linked List)  | O(1)     | O(1)     | O(n)     | O(n)     |
| Hash Table                 | O(1)     | O(1)     | O(n)     | O(n)     |
| Binary Search Tree (avg)   | O(log n) | O(log n) | O(log n) | O(log n) |
| Binary Search Tree (worst) | O(n)     | O(n)     | O(n)     | O(n)     |
| AVL Tree                   | O(log n) | O(log n) | O(log n) | O(log n) |
| Red-Black Tree             | O(log n) | O(log n) | O(log n) | O(log n) |
| Min/Max Heap               | O(1)     | O(log n) | O(n)     | O(n)     |
| Trie                       | O(L)     | O(L)     | O(n×L)   | O(n×L)   |
| Graph (Adj List)           | O(1)     | -        | O(V+E)   | O(V+E)   |

---

### **Algorithms Time & Space Complexity Table**

| Algorithm      | Best          | Worst      | Space      |
| -------------- | ------------- | ---------- | ---------- |
| Bubble Sort    | O(n²)         | O(n²)      | O(n)       |
| Selection Sort | O(n²)         | O(n²)      | O(n²)      |
| Insertion Sort | O(n²)         | O(n²)      | O(n)       |
| Merge Sort     | O(n log n)    | O(n log n) | O(n log n) |
| Quick Sort     | O(n log n)    | O(n²)      | O(n log n) |
| Heap Sort      | O(n log n)    | O(n log n) | O(n)       |
| Counting Sort  | O(n+k)        | O(n+k)     | O(k)       |
| Radix Sort     | O(nk)         | O(nk)      | O(n+k)     |
| Linear Search  | O(n)          | O(n)       | O(1)       |
| Binary Search  | O(log n)      | O(log n)   | O(1)       |
| DFS/BFS        | O(V+E)        | O(V+E)     | O(V)       |
| Dijkstra       | O((V+E)log V) | -          | O(V)       |
| Kruskal        | O(E log E)    | -          | O(V)       |
| Prim           | O((V+E)log V) | -          | O(V)       |
| KMP            | O(n+m)        | -          | O(m)       |
| Rabin-Karp     | O(n+m)        | O(nm)      | O(1)       |
| Floyd-Warshall | O(n³)         | -          | O(n²)      |
| Bellman-Ford   | O(VE)         | -          | O(V)       |

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

---

## Contributing

Got a better approach or explanation? Create a pull request or open an issue!

## Contact

For questions or suggestions, connect via [email](mailto:chaudharybrijesh0007@gmail.com) or [LinkedIn](https://www.linkedin.com/in/brijeshchaudhary13/).

---

## License

This repository is licensed under the MIT License. See the [LICENSE](LICENSE) file for more information.

---

Happy Coding!



