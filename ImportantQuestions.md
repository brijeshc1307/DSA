### **Question Title Options:**

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



