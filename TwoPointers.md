## **Two Pointers** Technique

The **Two Pointers** method uses **two indices** (often `left` and `right`) that move toward each other or in the same direction to:

* Search for a target
* Compare elements
* Shrink or expand a range

---

## When to Use:

* Array is **sorted**
* You're working with **pairs**, **subarrays**, or **windows**
* You want to **avoid nested loops**

---

## Basic Patterns and Examples

---

### 1. **Pair Sum in Sorted Array (Two Sum - Sorted)**

**Problem**: Given a sorted array and a target, check if two numbers sum to the target.

```cpp
bool hasPairWithSum(vector<int>& arr, int target) {
    int left = 0, right = arr.size() - 1;

    while (left < right) {
        int sum = arr[left] + arr[right];
        if (sum == target) return true;
        else if (sum < target) left++;
        else right--;
    }

    return false;
}
```
 **Time Complexity**: O(n)

---

### 2. **Container With Most Water**

**Problem**: Given an array of heights, find two lines that together with x-axis form a container holding the most water.

```cpp
int maxArea(vector<int>& height) {
    int left = 0, right = height.size() - 1;
    int maxArea = 0;

    while (left < right) {
        int h = min(height[left], height[right]);
        int w = right - left;
        maxArea = max(maxArea, h * w);

        // Move the smaller pointer
        if (height[left] < height[right]) left++;
        else right--;
    }

    return maxArea;
}
```
 **Time Complexity**: O(n)

---

### 3. **Remove Duplicates from Sorted Array**

```cpp
int removeDuplicates(vector<int>& nums) {
    int i = 0;
    for (int j = 1; j < nums.size(); j++) {
        if (nums[i] != nums[j])
            nums[++i] = nums[j];
    }
    return i + 1;
}
```

O(n), space O(1)

---

### 4. **Palindrome Check**

```cpp
bool isPalindrome(string s) {
    int left = 0, right = s.length() - 1;

    while (left < right) {
        if (s[left] != s[right])
            return false;
        left++;
        right--;
    }
    return true;
}
```

---

## Common Problems (with Two Pointers)

| **Problem**                       | **Pattern**        | **Description**                          |
| --------------------------------- | ------------------ | ---------------------------------------- |
| Two Sum (Sorted Array)            | Inward from ends   | `arr[left] + arr[right] == target`       |
| Container With Most Water         | Max Area           | Use height & width from ends             |
| Move Zeroes                       | Shift elements     | Swap non-zero with pointer               |
| Remove Duplicates in Sorted Array | Shrink Array       | Keep unique elements in front            |
| Longest Substring Without Repeats | Sliding Window     | Two pointers + set/map                   |
| Trapping Rain Water               | Elevation Analysis | Two pointers and max left/right tracking |

---

## Summary Table

| **Concept**           | **Use**                           | **Time** |
| --------------------- | --------------------------------- | -------- |
| Two Pointers (sorted) | Search or match from both ends    | O(n)     |
| Sliding Window        | Varying range with constraints    | O(n)     |
| Shrink/Expand Window  | Dynamic window (e.g., min length) | O(n)     |
| Fast/Slow Pointers    | Detect loops (linked lists)       | O(n)     |

---

## 🔧 Pro Tip:

Two Pointers can often **replace nested loops** and turn O(n²) problems into O(n)!

---
