## Searching Algorithms

Searching algorithms are used to find the **presence**, **position**, or **number** of occurrences of an element in a **list/array**.

---

##  1. **Linear Search** (Brute Force)

**Idea**: Check each element one by one.

###  Code Example:

```cpp
int linearSearch(vector<int>& arr, int target) {
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == target)
            return i; // found
    }
    return -1; // not found
}
```

###  Time Complexity:

* Worst Case: O(n)
* Best Case: O(1)

---

##  2. **Binary Search** (Efficient on Sorted Arrays)

**Idea**: Repeatedly divide the array in half to locate the element.

###  Code Example:

```cpp
int binarySearch(vector<int>& arr, int target) {
    int left = 0, right = arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}
```

###  Time Complexity:

* Worst Case: O(log n)
* Array must be **sorted**

---

##  3. **Ternary Search** (On unimodal functions, like binary but divides into 3)

Used to find max/min in unimodal functions (not for simple array search).

**Ternary Search** is a **divide and conquer** algorithm similar to **binary search**, but instead of dividing the array into 2 parts, it divides it into **3 equal parts**.

###  When to Use?

Ternary search is used **only on unimodal functions**, i.e., functions that:

* **Strictly increase**, then **strictly decrease** (one peak).
* OR strictly **decrease**, then **increase** (one valley).

> Most often used to find **maximum or minimum value of a function** in **continuous or discrete domains**.

---

##  Example Problem (Discrete):

> Find the maximum value of a function `f(x) = -1 * (x - 3)^2 + 9` for integer `x` in range `[0, 6]`.

This function has a **peak** at `x = 3`.

---

### C++ Code: Ternary Search on Integers

```cpp
int f(int x) {
    return -1 * (x - 3) * (x - 3) + 9; // Unimodal function
}

int ternarySearch(int left, int right) {
    while (right - left > 2) {
        int mid1 = left + (right - left) / 3;
        int mid2 = right - (right - left) / 3;

        if (f(mid1) < f(mid2))
            left = mid1;
        else
            right = mid2;
    }

    // Final check for the max in the narrowed range
    int maxVal = f(left);
    for (int i = left + 1; i <= right; ++i)
        maxVal = max(maxVal, f(i));
    return maxVal;
}

int main() {
    cout << "Max value: " << ternarySearch(0, 6); // Output: 9
}
```

---

###  Time Complexity:

* **O(log₃ n)** – Log base 3.
* For small range integers: use `while (right - left > 2)`
* For **floating point search** (e.g., find min distance): use precision like `1e-9`

---

##  Floating Point Version

Used when function takes a float/double input.

```cpp
double ternarySearchDouble(double left, double right) {
    while (right - left > 1e-9) {
        double mid1 = left + (right - left) / 3;
        double mid2 = right - (right - left) / 3;

        if (f(mid1) < f(mid2))
            left = mid1;
        else
            right = mid2;
    }
    return f(left); // or (left + right) / 2
}
```

---

##  Summary

| Feature         | Ternary Search                    |
| --------------- | --------------------------------- |
| Input Type      | Unimodal function (1 peak/valley) |
| Works On        | Integer or floating ranges        |
| Time Complexity | O(log₃ N)                         |
| Use Case        | Optimization (max/min value)      |

---

##  Real-World Problems

| Problem                           | Use                                   |
| --------------------------------- | ------------------------------------- |
| Minimize cost/time/distance       | Find where cost function is minimized |
| Find max value of a math function | Peak finding                          |
| Optimal point in convex set       | Applied in AI/game theory             |


---

##  4. **Jump Search** (Better than linear, but slower than binary)

>Useful when binary is not possible but sorted array exists.

**Jump Search** is an algorithm for searching in **sorted arrays**.
It works by jumping ahead by fixed steps (`√n`), instead of checking elements one by one like linear search.

Once a block where the element could be is found, it performs a **linear search** within that block.

---

## When to Use?

* The array is **sorted**.
* You need a faster alternative to **linear search**, but **binary search** is not ideal (e.g., linked lists or when random access is expensive).

---

## How it Works

1. Choose a block size = √n.
2. Jump ahead by that block size until you find a block where the target may exist.
3. Do a **linear search** within that block.

---

###  C++ Code Example

```cpp
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int jumpSearch(vector<int>& arr, int target) {
    int n = arr.size();
    int step = sqrt(n);  // optimal block size
    int prev = 0;

    // Finding the block where element could be
    while (arr[min(step, n)-1] < target) {
        prev = step;
        step += sqrt(n);
        if (prev >= n) return -1;
    }

    // Linear search in the block
    while (arr[prev] < target) {
        prev++;
        if (prev == min(step, n)) return -1;
    }

    if (arr[prev] == target)
        return prev;

    return -1;
}

int main() {
    vector<int> arr = {1, 3, 5, 8, 10, 12, 15, 18, 20};
    int target = 15;

    int index = jumpSearch(arr, target);
    if (index != -1)
        cout << "Element found at index " << index << endl;
    else
        cout << "Element not found." << endl;
}
```

---

## 🕒 Time Complexity

| Case          | Time  |
| ------------- | ----- |
| Best Case     | O(1)  |
| Average/Worst | O(√n) |

> Optimal jump size: **√n**

---

##  Real Use Cases

* **Search in sorted files** with sequential access
* **Data structures with limited access** (e.g., slow disk)

---

##  5. **Exponential Search**

First finds range where element may be, then uses binary search. Good for **unbounded/infinite-like arrays**.

---

##  6. **Search in Rotated Sorted Array**

```cpp
int searchRotated(vector<int>& arr, int target) {
    int left = 0, right = arr.size() - 1;

    while (left <= right) {
        int mid = (left + right) / 2;
        if (arr[mid] == target) return mid;

        // Left part is sorted
        if (arr[left] <= arr[mid]) {
            if (target >= arr[left] && target < arr[mid])
                right = mid - 1;
            else
                left = mid + 1;
        }
        // Right part is sorted
        else {
            if (target > arr[mid] && target <= arr[right])
                left = mid + 1;
            else
                right = mid - 1;
        }
    }
    return -1;
}
```

---

## Summary Table

| **Algorithm**      | **Use Case**                  | **Time Complexity** | **Needs Sorted?** |
| ------------------ | ----------------------------- | ------------------- | ----------------- |
| Linear Search      | Unsorted or small arrays      | O(n)                | ❌                 |
| Binary Search      | Large, sorted arrays          | O(log n)            | ✅                 |
| Jump Search        | Sorted arrays                 | O(√n)               | ✅                 |
| Exponential Search | Infinite or very large arrays | O(log n)            | ✅                 |
| Search in Rotated  | Rotated sorted array          | O(log n)            | ✅                 |

---

##  Bonus: STL Function in C++ for Binary Search

```cpp
#include <algorithm>

if (binary_search(arr.begin(), arr.end(), target))
    cout << "Found!";
else
    cout << "Not Found!";
```

Also: `lower_bound()`, `upper_bound()` for index-based search in sorted arrays.

---

##  Searching in 2D Matrix

## 1. Recursive Binary Search

## 2. STL Search Utilities (`lower_bound`, `upper_bound`)

##  Practice Problems

---

## 1. Searching in a 2D Matrix (Sorted Rows and Columns)

### Problem 1: Each row & column is sorted

```cpp
bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int row = 0;
    int col = matrix[0].size() - 1; // start from top-right

    while (row < matrix.size() && col >= 0) {
        if (matrix[row][col] == target)
            return true;
        else if (matrix[row][col] > target)
            col--;
        else
            row++;
    }
    return false;
}
```

Time Complexity: O(m + n)

---

### Problem 2: Matrix is sorted as a whole (like a 1D array)

```cpp
bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int rows = matrix.size(), cols = matrix[0].size();
    int left = 0, right = rows * cols - 1;

    while (left <= right) {
        int mid = (left + right) / 2;
        int value = matrix[mid / cols][mid % cols];

        if (value == target) return true;
        else if (value < target) left = mid + 1;
        else right = mid - 1;
    }

    return false;
}
```

Time Complexity: O(log (m × n))

---

##  2. Recursive Binary Search

```cpp
int binarySearchRecursive(vector<int>& arr, int left, int right, int target) {
    if (left > right) return -1;

    int mid = left + (right - left) / 2;
    if (arr[mid] == target) return mid;

    if (target < arr[mid])
        return binarySearchRecursive(arr, left, mid - 1, target);
    else
        return binarySearchRecursive(arr, mid + 1, right, target);
}
```

---

##  3. STL Utilities – `lower_bound` and `upper_bound`

```cpp
#include <algorithm> // required

vector<int> arr = {1, 2, 2, 3, 4, 5};

auto lb = lower_bound(arr.begin(), arr.end(), 2); // returns iterator to first ≥ 2
auto ub = upper_bound(arr.begin(), arr.end(), 2); // returns iterator to first > 2

cout << "Lower Bound Index: " << lb - arr.begin() << "\n";
cout << "Upper Bound Index: " << ub - arr.begin() << "\n";
```

 **Use Cases**:

* Count occurrences: `ub - lb`
* Insert while keeping array sorted

---

##  Practice Problems

| **Problem**                    | **Description**                  | **Difficulty** | **Link**     |
| ------------------------------ | -------------------------------- | -------------- | ------------ |
| Binary Search                  | Find element in sorted array     | Easy           | Leetcode 704 |
| Search 2D Matrix               | Search in matrix as 1D           | Medium         | Leetcode 74  |
| Search in Rotated Sorted Array | Pivoted binary search            | Medium         | Leetcode 33  |
| First and Last Position        | Use `lower_bound`, `upper_bound` | Medium         | Leetcode 34  |
| Peak Element                   | Binary search on hills           | Medium         | Leetcode 162 |

---


