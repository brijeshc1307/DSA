## 🔍 What is the Shortest Path Problem?

> Given a graph `G(V, E)` and a **source vertex**, find the **minimum distance (cost)** to every other vertex.

---

## ✅ 1. Dijkstra's Algorithm

### 🔹 Definition:

Finds the **shortest path from a single source** to all other nodes in a **graph with non-negative weights**.

### 🔸 Time Complexity:

* Using priority queue (min-heap): **O((V + E) log V)**

### ✅ Suitable For:

* **Non-negative** weights
* Sparse or dense graphs

### 📘 C++ Implementation (using Priority Queue):

```cpp
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

typedef pair<int, int> pii; // (distance, vertex)

void dijkstra(int V, vector<pii> adj[], int src) {
    vector<int> dist(V, INT_MAX);
    priority_queue<pii, vector<pii>, greater<>> pq;

    dist[src] = 0;
    pq.push({0, src});

    while (!pq.empty()) {
        int u = pq.top().second;
        pq.pop();

        for (auto &[v, wt] : adj[u]) {
            if (dist[u] + wt < dist[v]) {
                dist[v] = dist[u] + wt;
                pq.push({dist[v], v});
            }
        }
    }

    // Output
    for (int i = 0; i < V; ++i)
        cout << "Distance to " << i << ": " << dist[i] << endl;
}
```

---

## ✅ 2. Bellman-Ford Algorithm

### 🔹 Definition:

Finds shortest paths from a source to all vertices, even when the graph has **negative weights**.
Can also **detect negative weight cycles**.

### 🔸 Time Complexity:

* **O(V × E)**

### ✅ Suitable For:

* Graphs with **negative weights**
* Detecting **negative cycles**

### 📘 C++ Implementation:

```cpp
void bellmanFord(int V, vector<vector<int>> &edges, int src) {
    vector<int> dist(V, INT_MAX);
    dist[src] = 0;

    // Relax edges V-1 times
    for (int i = 0; i < V - 1; ++i) {
        for (auto &e : edges) {
            int u = e[0], v = e[1], wt = e[2];
            if (dist[u] != INT_MAX && dist[u] + wt < dist[v])
                dist[v] = dist[u] + wt;
        }
    }

    // Check for negative weight cycle
    for (auto &e : edges) {
        int u = e[0], v = e[1], wt = e[2];
        if (dist[u] != INT_MAX && dist[u] + wt < dist[v]) {
            cout << "Negative weight cycle detected!\n";
            return;
        }
    }

    // Output
    for (int i = 0; i < V; ++i)
        cout << "Distance to " << i << ": " << dist[i] << endl;
}
```

---

## ✅ 3. Floyd-Warshall Algorithm

### 🔹 Definition:

Finds **shortest paths between all pairs of vertices**
Works for both **positive and negative weights** (but no negative cycles)

### 🔸 Time Complexity:

* **O(V³)**

### ✅ Suitable For:

* Dense graphs
* All-pairs shortest paths

### 📘 C++ Implementation:

```cpp
void floydWarshall(vector<vector<int>> &dist) {
    int V = dist.size();

    for (int k = 0; k < V; ++k) {
        for (int i = 0; i < V; ++i) {
            for (int j = 0; j < V; ++j) {
                if (dist[i][k] != INT_MAX && dist[k][j] != INT_MAX)
                    dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
            }
        }
    }

    // Output
    for (int i = 0; i < V; ++i) {
        for (int j = 0; j < V; ++j) {
            if (dist[i][j] == INT_MAX)
                cout << "INF ";
            else
                cout << dist[i][j] << " ";
        }
        cout << endl;
    }
}
```

---

## 📊 Comparison Table

| Feature                | Dijkstra       | Bellman-Ford      | Floyd-Warshall     |
| ---------------------- | -------------- | ----------------- | ------------------ |
| Input Weights          | Positive only  | Positive/Negative | Positive/Negative  |
| Detect Negative Cycles | ❌              | ✅                 | ❌                  |
| Time Complexity        | O((V+E) log V) | O(V × E)          | O(V³)              |
| Output                 | Single Source  | Single Source     | All-Pairs          |
| Ideal For              | Fast search    | Cycle detection   | Small dense graphs |

---

## 💡 Real-Life Applications

| Application       | Algorithm      | Use Case                           |
| ----------------- | -------------- | ---------------------------------- |
| Google Maps       | Dijkstra       | Shortest route between locations   |
| Currency Exchange | Bellman-Ford   | Detect arbitrage (negative cycles) |
| Network Routing   | Floyd-Warshall | Routing between all routers        |

---

Would you like examples of **Dijkstra with adjacency list**, or how to visualize these algorithms step by step?
