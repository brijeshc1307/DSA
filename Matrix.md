## 1. Matrix using Array / Vector

### 🔹 Definition:

A matrix is a 2D data structure used to store elements in rows and columns. In C++, you can use either 2D arrays or `vector<vector<int>>`.

### 🔹 Example and Code:

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Using vector
    vector<vector<int>> mat = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Output matrix
    for (auto row : mat) {
        for (int val : row) cout << val << " ";
        cout << endl;
    }

    return 0;
}
```

---

## ✅ 2. Spiral Order Traversal

### 🔹 Definition:

Traverse the matrix in spiral form: left to right → top to bottom → right to left → bottom to top, layer by layer.

### 🔹 Code:

```cpp
void spiralOrder(vector<vector<int>>& matrix) {
    int top = 0, bottom = matrix.size() - 1;
    int left = 0, right = matrix[0].size() - 1;

    while (top <= bottom && left <= right) {
        for (int i = left; i <= right; ++i) cout << matrix[top][i] << " ";
        top++;

        for (int i = top; i <= bottom; ++i) cout << matrix[i][right] << " ";
        right--;

        if (top <= bottom) {
            for (int i = right; i >= left; --i) cout << matrix[bottom][i] << " ";
            bottom--;
        }

        if (left <= right) {
            for (int i = bottom; i >= top; --i) cout << matrix[i][left] << " ";
            left++;
        }
    }
}
```

---

## ✅ 3. Matrix Rotation (90°, 180°)

### 🔹 90° Rotation Clockwise:

```cpp
void rotate90(vector<vector<int>>& mat) {
    int n = mat.size();
    // Transpose
    for (int i = 0; i < n; ++i)
        for (int j = i; j < n; ++j)
            swap(mat[i][j], mat[j][i]);
    // Reverse rows
    for (int i = 0; i < n; ++i)
        reverse(mat[i].begin(), mat[i].end());
}
```

### 🔹 180° Rotation:

```cpp
void rotate180(vector<vector<int>>& mat) {
    int n = mat.size(), m = mat[0].size();
    for (int i = 0; i < n; ++i)
        reverse(mat[i].begin(), mat[i].end());
    reverse(mat.begin(), mat.end());
}
```

---

## ✅ 4. Search in Sorted Matrix

### 🔹 Matrix is sorted row-wise and column-wise.

```cpp
bool searchMatrix(vector<vector<int>>& mat, int target) {
    int n = mat.size(), m = mat[0].size();
    int i = 0, j = m - 1;
    while (i < n && j >= 0) {
        if (mat[i][j] == target) return true;
        else if (mat[i][j] > target) j--;
        else i++;
    }
    return false;
}
```

---

## ✅ 5. Flood Fill Algorithm

### 🔹 Replace connected region of same value starting from (sr, sc) with new color.

```cpp
void dfs(vector<vector<int>>& image, int i, int j, int color, int oldColor) {
    if (i < 0 || j < 0 || i >= image.size() || j >= image[0].size()) return;
    if (image[i][j] != oldColor) return;

    image[i][j] = color;

    dfs(image, i+1, j, color, oldColor);
    dfs(image, i-1, j, color, oldColor);
    dfs(image, i, j+1, color, oldColor);
    dfs(image, i, j-1, color, oldColor);
}

vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
    int oldColor = image[sr][sc];
    if (oldColor != color)
        dfs(image, sr, sc, color, oldColor);
    return image;
}
```

---

## ✅ 6. Matrix Multiplication

```cpp
vector<vector<int>> multiply(vector<vector<int>>& A, vector<vector<int>>& B) {
    int n = A.size(), m = B[0].size(), p = B.size();
    vector<vector<int>> result(n, vector<int>(m, 0));

    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            for (int k = 0; k < p; ++k)
                result[i][j] += A[i][k] * B[k][j];
    return result;
}
```

---

## ✅ 7. Set Matrix Zeroes

### 🔹 If an element is 0, set its entire row and column to 0 (in-place).

```cpp
void setZeroes(vector<vector<int>>& matrix) {
    int m = matrix.size(), n = matrix[0].size();
    bool firstRow = false, firstCol = false;

    for (int i = 0; i < m; ++i)
        if (matrix[i][0] == 0) firstCol = true;
    for (int j = 0; j < n; ++j)
        if (matrix[0][j] == 0) firstRow = true;

    for (int i = 1; i < m; ++i)
        for (int j = 1; j < n; ++j)
            if (matrix[i][j] == 0)
                matrix[i][0] = matrix[0][j] = 0;

    for (int i = 1; i < m; ++i)
        for (int j = 1; j < n; ++j)
            if (matrix[i][0] == 0 || matrix[0][j] == 0)
                matrix[i][j] = 0;

    if (firstRow)
        for (int j = 0; j < n; ++j) matrix[0][j] = 0;
    if (firstCol)
        for (int i = 0; i < m; ++i) matrix[i][0] = 0;
}
```

---

## ✅ 8. Dynamic Programming on 2D Grid

### 🔹 Unique Paths (m x n grid, move only right or down)

```cpp
int uniquePaths(int m, int n) {
    vector<vector<int>> dp(m, vector<int>(n, 1));
    for (int i = 1; i < m; ++i)
        for (int j = 1; j < n; ++j)
            dp[i][j] = dp[i-1][j] + dp[i][j-1];
    return dp[m-1][n-1];
}
```

### 🔹 Minimum Path Sum (from top-left to bottom-right)

```cpp
int minPathSum(vector<vector<int>>& grid) {
    int m = grid.size(), n = grid[0].size();
    for (int i = 1; i < m; ++i) grid[i][0] += grid[i-1][0];
    for (int j = 1; j < n; ++j) grid[0][j] += grid[0][j-1];

    for (int i = 1; i < m; ++i)
        for (int j = 1; j < n; ++j)
            grid[i][j] += min(grid[i-1][j], grid[i][j-1]);

    return grid[m-1][n-1];
}
```

---

## 💡 Summary

| Topic            | Key Functions                   |
| ---------------- | ------------------------------- |
| Matrix Basics    | `vector<vector<int>>`           |
| Spiral Traversal | `spiralOrder()`                 |
| Rotation         | `rotate90()`, `rotate180()`     |
| Search           | `searchMatrix()`                |
| Flood Fill       | `floodFill()`                   |
| Multiplication   | `multiply()`                    |
| Set Zeroes       | `setZeroes()`                   |
| DP on Grid       | `uniquePaths()`, `minPathSum()` |

---

Would you like this in a downloadable **C++ file**, **PDF**, or **Markdown** format?
