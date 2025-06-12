## Sliding Window Technique

The **Sliding Window** technique uses a "window" (a range of elements) that moves across a data structure to compute something **efficiently** — like sum, max, or count — in **O(n)** time.

---

## 1. Fixed-Size Sliding Window

You are given a **fixed window size `k`**, and the goal is to find some property (sum, max, etc.) in **all subarrays of size `k`**.

---

### Example: Max Sum of Subarray of Size `k`

**Problem**: Find the maximum sum of any subarray of size `k`.

```cpp
int maxSumFixedWindow(vector<int>& arr, int k) {
    int maxSum = 0, windowSum = 0;
    for (int i = 0; i < k; i++) windowSum += arr[i];  // Initial window
    maxSum = windowSum;

    for (int i = k; i < arr.size(); i++) {
        windowSum += arr[i] - arr[i - k];  // Slide window
        maxSum = max(maxSum, windowSum);
    }
    return maxSum;
}
```

**Time Complexity**: O(n)

---

## 2. Variable-Size Sliding Window

You don’t know the window size. You need to **adjust** the window size based on some **condition**.

---

### Example: Smallest Subarray with Sum ≥ Target

**Problem**: Find the **smallest subarray length** whose sum is **≥ target**

```cpp
int minSubArrayLen(int target, vector<int>& nums) {
    int left = 0, sum = 0, minLen = INT_MAX;

    for (int right = 0; right < nums.size(); right++) {
        sum += nums[right];

        // Shrink window while condition is met
        while (sum >= target) {
            minLen = min(minLen, right - left + 1);
            sum -= nums[left++];
        }
    }
    return (minLen == INT_MAX) ? 0 : minLen;
}
```

**Time Complexity**: O(n)

---

## Summary Table

| Type     | Window Size  | Example Problem                      | Time Complexity |
| -------- | ------------ | ------------------------------------ | --------------- |
| Fixed    | Constant `k` | Max/Avg sum of size-k subarrays      | O(n)            |
| Variable | Dynamic      | Smallest/Longest subarray with a sum | O(n)            |

---

## Real-World Problems Using Sliding Window

| Problem                                         | Type          |
| ----------------------------------------------- | ------------- |
| Max sum subarray of size k                      | Fixed         |
| Minimum length subarray with sum ≥ target       | Variable      |
| Longest substring with at most K distinct chars | Variable      |
| Longest substring without repeating characters  | Variable      |
| Max element in every window of size k           | Fixed + Deque |

---

