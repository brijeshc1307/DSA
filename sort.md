### Sorting Techniques in C++ (with Simple Notes and Algorithms)

Here’s a list of common sorting algorithms with brief explanations, algorithms, and C++ code examples.

---

### 1. **Bubble Sort**
**Notes**:
- Repeatedly compares adjacent elements and swaps them if they are in the wrong order.
- Simple but inefficient for large datasets.

**Algorithm**:
1. Start from the first element.
2. Compare the current element with the next.
3. Swap if they are out of order.
4. Repeat for all elements until no swaps are needed.

**C++ Code**:
```cpp
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }
}
```

---

### 2. **Selection Sort**
**Notes**:
- Selects the smallest element from the unsorted part and swaps it with the first element of the unsorted part.
- More efficient than Bubble Sort.

**Algorithm**:
1. Find the smallest element in the unsorted array.
2. Swap it with the first element of the unsorted part.
3. Move the boundary of the sorted part forward.
4. Repeat until all elements are sorted.

**C++ Code**:
```cpp
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        int minIndex = i;
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        std::swap(arr[i], arr[minIndex]);
    }
}
```

---

### 3. **Insertion Sort**
**Notes**:
- Builds the sorted array one element at a time by inserting each element into its correct position.
- Efficient for small datasets.

**Algorithm**:
1. Start with the second element.
2. Compare it with elements in the sorted part.
3. Shift larger elements to the right.
4. Insert the current element into its correct position.

**C++ Code**:
```cpp
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; ++i) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = key;
    }
}
```

---

### 4. **Merge Sort**
**Notes**:
- Divides the array into halves, sorts them recursively, and then merges them.
- Efficient for large datasets (Divide and Conquer).

**Algorithm**:
1. Divide the array into two halves.
2. Recursively sort each half.
3. Merge the two sorted halves.

**C++ Code**:
```cpp
void merge(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1, n2 = right - mid;
    int L[n1], R[n2];

    for (int i = 0; i < n1; ++i) L[i] = arr[left + i];
    for (int i = 0; i < n2; ++i) R[i] = arr[mid + 1 + i];

    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) arr[k++] = L[i++];
        else arr[k++] = R[j++];
    }
    while (i < n1) arr[k++] = L[i++];
    while (j < n2) arr[k++] = R[j++];
}

void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}
```

---

### 5. **Quick Sort**
**Notes**:
- Selects a pivot and partitions the array into two parts based on it.
- Recursively sorts the partitions.

**Algorithm**:
1. Select a pivot element.
2. Partition the array so that elements less than the pivot are on one side and greater on the other.
3. Recursively sort the partitions.

**C++ Code**:
```cpp
int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; ++j) {
        if (arr[j] < pivot) {
            ++i;
            std::swap(arr[i], arr[j]);
        }
    }
    std::swap(arr[i + 1], arr[high]);
    return i + 1;
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
```

---

### 6. **Heap Sort**
**Notes**:
- Converts the array into a heap and repeatedly extracts the maximum element.
- Based on a binary heap structure.

**Algorithm**:
1. Build a max heap.
2. Extract the root (maximum element) and move it to the end.
3. Reduce the heap size and heapify the remaining elements.
4. Repeat until sorted.

**C++ Code**:
```cpp
void heapify(int arr[], int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left] > arr[largest]) largest = left;
    if (right < n && arr[right] > arr[largest]) largest = right;

    if (largest != i) {
        std::swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}

void heapSort(int arr[], int n) {
    for (int i = n / 2 - 1; i >= 0; --i) heapify(arr, n, i);
    for (int i = n - 1; i > 0; --i) {
        std::swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}
```

---

### Summary Table of Sorting Techniques

| Algorithm      | Time Complexity (Best) | Time Complexity (Worst) | Space Complexity | Stability |
|----------------|-------------------------|--------------------------|-------------------|-----------|
| Bubble Sort    | O(n)                   | O(n²)                   | O(1)             | Stable    |
| Selection Sort | O(n²)                  | O(n²)                   | O(1)             | Not Stable|
| Insertion Sort | O(n)                   | O(n²)                   | O(1)             | Stable    |
| Merge Sort     | O(n log n)             | O(n log n)              | O(n)             | Stable    |
| Quick Sort     | O(n log n)             | O(n²)                   | O(log n)         | Not Stable|
| Heap Sort      | O(n log n)             | O(n log n)              | O(1)             | Not Stable|

---
