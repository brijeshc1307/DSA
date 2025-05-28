### **1. Problem Name:**

1. **Swap Adjacent Elements in Array**
2. **Alternate Element Swap**
3. **Swap Array Elements in Pairs**
4. **Pairwise Swap in an Array**
5. **Swap Consecutive Elements**

The most standard title would be:

> Note: all questions are same

---

**Problem Statement:**

You are given an array of integers of even length. Your task is to swap every pair of adjacent elements in the array. That is, swap the first element with the second, the third with the fourth, and so on.

### **Input Format:**

* The first line contains a single integer `n` (where `n` is even) — the number of elements in the array.
* The second line contains `n` space-separated integers — the elements of the array.

### **Output Format:**

* Print the modified array after performing the alternate swaps.

### **Example:**

**Input:**

```
6  
2 7 1 -4 11 12
```

**Output:**

```
7 2 -4 1 12 11
```

---

### **Approach / Algorithm:**

1. Read the size `n` of the array (must be even).
2. Read the `n` integers into the array.
3. Traverse the array from index `0` to `n-1` with a step of `2`.
4. For every pair of adjacent elements at index `i` and `i+1`, swap them.
5. Print the updated array.

---
```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;  // Read the number of elements

    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];  // Read array elements
    }

    // Swap adjacent elements
    for(int i = 0; i < n - 1; i += 2) {
        swap(arr[i], arr[i + 1]);
    }

    // Print the modified array
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
```

```cpp
#include <bits/stdc++.h>
using namespace std;


void swapAlternate(int arr[],int n){
    
     for(int i=0;i<n-1;i=i+2){
            swap(arr[i],arr[i+1]);
            
    }
   for(int j=0;j<n;j++){
            cout<<arr[j]<<" ";
        }
}

int main(){
    int s;
    cin>>s;
    int arr[s];
    for(int i=0;i<s;i++){
        cin>>arr[i];
    }
    swapAlternate(arr,s);
    return 0;
}

```


---

### **Time Complexity:**

* **O(n)** 

### **Space Complexity:**

* **O(1)** 

---

### **2. Problem Name:** Find the Unique Element in an Array

---

### **Problem Statement:**

You are given an array of integers where all elements appear more than once **except one element that appears exactly once**. Your task is to find and print that unique element.

### **Input Format:**

* The first line contains a single integer `n` — the number of elements in the array.
* The second line contains `n` space-separated integers — the elements of the array.

### **Output Format:**

* Print the unique element that appears exactly once.

---

### **Example:**

**Input:**

```
6  
2 2 1 -4 1 1
```

**Output:**

```
-4
```

---

## **Solution 1: Using Hash Map / Unordered Map**

### **Approach:**

* Use a hash map to count the frequency of each element.
* Traverse the map and return the element with frequency `1`.

```cpp
#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int findUniqueUsingMap(const vector<int>& arr) {
    unordered_map<int, int> freq;
    for (int num : arr) {
        freq[num]++;
    }

    for (auto& pair : freq) {
        if (pair.second == 1) {
            return pair.first;
        }
    }

    return -1;  // In case no unique element found
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << findUniqueUsingMap(arr) << endl;
    return 0;
}
```

### **Time Complexity:** O(n)

### **Space Complexity:** O(n)

---

## **Solution 2: Using Bitwise XOR**

### **Approach:**

* XOR of a number with itself is 0 (`a ^ a = 0`)
* XOR of a number with 0 is the number itself (`a ^ 0 = a`)
* If all duplicates cancel each other out, the remaining value is the unique one.

```cpp
#include <iostream>
#include <vector>
using namespace std;

int findUniqueUsingXOR(const vector<int>& arr) {
    int result = 0;
    for (int num : arr) {
        result ^= num;
    }
    return result;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << findUniqueUsingXOR(arr) << endl;
    return 0;
}
```

### **Time Complexity:** O(n)

### **Space Complexity:** O(1)

> **Most efficient solution** in terms of both time and space.

---

## **Solution 3: Using Sorting**

### **Approach:**

* Sort the array.
* Then check for the element that doesn’t match its adjacent one.

```cpp
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int findUniqueUsingSorting(vector<int>& arr) {
    sort(arr.begin(), arr.end());
    int i = 0;
    while (i < arr.size() - 1) {
        if (arr[i] != arr[i + 1]) {
            return arr[i];
        }
        i += 2;
    }
    return arr.back(); // Last element is unique
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << findUniqueUsingSorting(arr) << endl;
    return 0;
}
```

### **Time Complexity:** O(n log n)

### **Space Complexity:** O(1) or O(n) (depending on sorting implementation)

---

### **3. Problem Name:** Find Duplicate Elements in an Array

---

### **Problem Statement:**

You are given an array of integers. Some elements may appear more than once. Your task is to find and print **all duplicate elements** present in the array. Each duplicate should be printed only once, regardless of how many times it appears.

---

### **Input Format:**

* The first line contains an integer `n` — the number of elements in the array.
* The second line contains `n` space-separated integers — the elements of the array.

---

### **Output Format:**

* Print all duplicate elements in any order, separated by spaces.
* If there are no duplicates, print nothing.

---

### **Example:**

**Input:**

```
6  
2 3 1 -4 1 4
```

**Output:**

```
1
```

---

## **Solution 1: Using Hash Map (unordered\_map)**

### **Approach:**

* Use an unordered map to count the frequency of each element.
* Traverse the map and print keys with frequency > 1.

```cpp
#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

void findDuplicates(const vector<int>& arr) {
    unordered_map<int, int> freq;
    for (int num : arr) {
        freq[num]++;
    }

    for (auto& pair : freq) {
        if (pair.second > 1) {
            cout << pair.first << " ";
        }
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    findDuplicates(arr);
    return 0;
}
```

### **Time Complexity:** O(n)

### **Space Complexity:** O(n)

---

## **Solution 2: Using Sorting**

### **Approach:**

* Sort the array.
* Compare each element with the previous one.
* If they are equal and not already in the result, print them.

```cpp
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void findDuplicates(vector<int>& arr) {
    sort(arr.begin(), arr.end());
    bool found = false;

    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] == arr[i - 1] && (i == 1 || arr[i] != arr[i - 2])) {
            cout << arr[i] << " ";
            found = true;
        }
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    findDuplicates(arr);
    return 0;
}
```

### **Time Complexity:** O(n log n)

### **Space Complexity:** O(1) (if in-place sort is used)

---

## **Solution 3: Using Set for Tracking Seen Elements**

### **Approach:**

* Use one set to track seen elements.
* Use another set to store duplicates.
* Print all elements in the duplicates set.

```cpp
#include <iostream>
#include <set>
#include <vector>
using namespace std;

void findDuplicates(const vector<int>& arr) {
    set<int> seen;
    set<int> duplicates;

    for (int num : arr) {
        if (seen.count(num)) {
            duplicates.insert(num);
        } else {
            seen.insert(num);
        }
    }

    for (int dup : duplicates) {
        cout << dup << " ";
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    findDuplicates(arr);
    return 0;
}
```

### **Time Complexity:** O(n log n)

### **Space Complexity:** O(n)

---

