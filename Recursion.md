## Recursion

**Recursion** is a method where the **function calls itself** to solve a smaller version of the problem until it reaches the **base case**.

### 🔁 Key Parts:

1. **Base Case** – When to stop recursion
2. **Recursive Case** – When the function calls itself with smaller input

---

## 🔹 Types of Recursion

| Type                   | Description                                              |
| ---------------------- | -------------------------------------------------------- |
| **Direct Recursion**   | Function calls itself directly                           |
| **Indirect Recursion** | Function A calls B, which then calls A                   |
| **Tail Recursion**     | Recursive call is the last statement in function         |
| **Head Recursion**     | Recursive call is before other operations                |
| **Tree Recursion**     | Function makes multiple recursive calls (e.g. Fibonacci) |

---

## 💡 Real-Life Analogy of Recursion

> **Stack of Dominoes 🁢**
>
> * You push the first domino (call the function)
> * Each one triggers the next (recursive calls)
> * The last one doesn't fall (base case)
> * The fall resolves in reverse (unwinding the stack)

---

## 📘 Simple Recursion Example: Factorial

```cpp
int factorial(int n) {
    if (n == 0) return 1;             // base case
    return n * factorial(n - 1);      // recursive call
}
```

---

## 🌲 Recursion Tree: Fibonacci Example

```cpp
int fib(int n) {
    if (n <= 1) return n;
    return fib(n-1) + fib(n-2);
}
```

### Recursion Tree for `fib(4)`:

```
        fib(4)
       /      \
   fib(3)     fib(2)
   /    \      /   \
fib(2) fib(1) fib(1) fib(0)
 /   \
fib(1) fib(0)
```

* This shows **exponential growth** → optimize with memoization.

---

## 🔁 What is Backtracking?

**Backtracking** is a form of recursion used to **build solutions incrementally** and **discard (backtrack)** when a solution path fails.

### 🔁 Steps:

1. **Choose** an option
2. **Explore** further using recursion
3. **Un-choose** (backtrack)

---

## 🔁 Backtracking Template (C++)

```cpp
void backtrack(vector<int>& path, int index) {
    if (isGoal(path)) {
        print(path);
        return;
    }

    for (int i = index; i < N; ++i) {
        if (isValid(i, path)) {
            path.push_back(i);        // choose
            backtrack(path, i + 1);   // explore
            path.pop_back();          // un-choose
        }
    }
}
```

---

## 📘 Backtracking Example: Subsets (Power Set)

```cpp
void solve(vector<int>& nums, vector<int>& temp, int index, vector<vector<int>>& ans) {
    ans.push_back(temp);
    for (int i = index; i < nums.size(); ++i) {
        temp.push_back(nums[i]);             // choose
        solve(nums, temp, i + 1, ans);       // explore
        temp.pop_back();                     // un-choose
    }
}
```

---

## 🔹 Real-Life Analogy for Backtracking

> **Solving a Maze 🧩**
>
> * You try a path (choose)
> * If it hits a wall, you go back (backtrack)
> * Try the next option
> * Repeat until exit is found

---

## 🔹 Common DSA Problems Using Backtracking

| Problem                     | Description                       |
| --------------------------- | --------------------------------- |
| N-Queens                    | Place queens so they don’t attack |
| Sudoku Solver               | Fill board respecting rules       |
| Subsets / Combinations      | Find all subsets or combinations  |
| Permutations                | Find all arrangements             |
| Rat in a Maze / Maze Solver | Find paths through grid           |

---

## 🔹 Summary

| Concept      | Recursion                             | Backtracking                          |
| ------------ | ------------------------------------- | ------------------------------------- |
| Goal         | Solve problem by dividing             | Explore all possible solutions        |
| Control Flow | Self calls until base case            | Choose → Explore → Unchoose           |
| Use Case     | Factorial, Fibonacci, Tree traversals | Maze, N-Queens, Subsets, Permutations |

---

Would you like me to show a **C++ code for N-Queens or Sudoku Solver** next?
