## Greedy Algorithm

A **Greedy Algorithm** is a problem-solving technique where we make the **locally optimal choice** at each step **with the hope** of finding a **global optimum**.

> At every step, it chooses the best immediate option without considering the bigger picture.

---

## 🔹 Characteristics of Greedy Algorithms

* Makes **greedy choices** at each step.
* No backtracking or re-evaluation of decisions.
* Works when the problem exhibits:

  * **Greedy Choice Property** (a global optimum can be reached by choosing local optimum)
  * **Optimal Substructure** (optimal solution of the whole is made of optimal solutions of subproblems)

---

## 🔸 Types of Greedy Algorithms (by application)

| Type / Application      | Description                                               |
| ----------------------- | --------------------------------------------------------- |
| **Activity Selection**  | Select maximum non-overlapping activities                 |
| **Job Scheduling**      | Maximize profit by completing jobs within deadline        |
| **Fractional Knapsack** | Maximize value within weight capacity (fractions allowed) |
| **Minimum Coin Change** | Minimize coins to make an amount                          |
| **Huffman Coding**      | Lossless data compression using frequency                 |
| **Graph Algorithms**    | Dijkstra (Shortest Path), Prim’s (Minimum Spanning Tree)  |

---

## 💡 Real-life Example

> **Movie Schedule Planning 🎥**

You have several movies to watch in a day. Each has a **start and end time**. You want to **watch the maximum number of non-overlapping movies**.

* Choosing the movie that **ends earliest** gives you time for more movies.
* That’s a classic **greedy strategy**.

---

## 📘 Example 1: Activity Selection (C++ Code)

### Problem:

Given `n` activities with start and end times, select the maximum number of activities that can be performed by a single person, assuming that a person can only work on a single activity at a time.

### Greedy Choice:

Always pick the activity that **ends earliest**.

```cpp
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(pair<int, int> a, pair<int, int> b) {
    return a.second < b.second; // sort by end time
}

int activitySelection(vector<pair<int, int>>& activities) {
    sort(activities.begin(), activities.end(), compare);
    int count = 1; // pick the first activity
    int lastEnd = activities[0].second;

    for (int i = 1; i < activities.size(); i++) {
        if (activities[i].first >= lastEnd) {
            count++;
            lastEnd = activities[i].second;
        }
    }

    return count;
}

int main() {
    vector<pair<int, int>> activities = {{1, 3}, {2, 5}, {0, 6}, {5, 7}, {8, 9}, {5, 9}};
    cout << "Maximum number of activities: " << activitySelection(activities) << endl;
    return 0;
}
```

---

## 📘 Example 2: Minimum Coin Change

### Problem:

Given coins of denominations `[1, 2, 5, 10, 20, 50, 100, 200, 500, 2000]` and a value `V`, find the minimum number of coins that make the value.

### Greedy Strategy:

Always pick the largest coin ≤ value.

```cpp
#include <iostream>
#include <vector>
using namespace std;

void minCoins(int value) {
    vector<int> coins = {2000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
    vector<int> result;

    for (int coin : coins) {
        while (value >= coin) {
            value -= coin;
            result.push_back(coin);
        }
    }

    cout << "Coins used: ";
    for (int coin : result)
        cout << coin << " ";
}

int main() {
    int amount = 93;
    minCoins(amount);
    return 0;
}
```

---

## 🔚 Summary

| Feature        | Greedy Algorithm                                               |
| -------------- | -------------------------------------------------------------- |
| Principle      | Always take the best local choice                              |
| Structure      | No backtracking, no future insight                             |
| When to Use    | When problem has Greedy Choice Property + Optimal Substructure |
| Real-Life Uses | Scheduling, coin change, Huffman encoding, navigation          |

---

Would you like an example of **Fractional Knapsack**, **Job Scheduling**, or **Dijkstra’s Algorithm** next?
