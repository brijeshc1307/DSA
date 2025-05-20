##  LeetCode Problem: 977. Squares of a Sorted Array

### **Description:**

Given an integer array `nums` sorted in **non-decreasing** order, return *an array of the squares of each number sorted in non-decreasing order*.

#### **Example 1:**

```
Input: nums = [-4,-1,0,3,10]
Output: [0,1,9,16,100]
```

#### **Example 2:**

```
Input: nums = [-7,-3,2,3,11]
Output: [4,9,9,49,121]
```

### **Constraints:**

* `1 <= nums.length <= 10^4`
* `-10^4 <= nums[i] <= 10^4`
* `nums` is sorted in **non-decreasing** order.

---

## C++ Solution (Two-pointer approach)

```cpp
#include <vector>
#include <algorithm>

class Solution {
public:
    std::vector<int> sortedSquares(std::vector<int>& nums) {
        int n = nums.size();
        std::vector<int> result(n);
        int left = 0, right = n - 1;
        int pos = n - 1;

        while (left <= right) {
            int leftSq = nums[left] * nums[left];
            int rightSq = nums[right] * nums[right];
            if (leftSq > rightSq) {
                result[pos--] = leftSq;
                left++;
            } else {
                result[pos--] = rightSq;
                right--;
            }
        }

        return result;
    }
};
```

### Explanation:

* Since input is **sorted**, but may contain **negative** values, squaring them can make larger values appear before smaller ones.
* Use **two pointers** (`left` at start, `right` at end) to compare absolute values.
* Insert larger squares from the **end of result array**, moving inward.
* Time Complexity: **O(n)**
* Space Complexity: **O(n)**
