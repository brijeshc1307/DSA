
## What is a Graph?

A **Graph** is a data structure consisting of:

* **Vertices (nodes)**: entities (e.g., cities, people, etc.)
* **Edges (links)**: connections between vertices (can be directed or undirected)

---

## 🔹 Types of Graphs

| Type                         | Description                             |
| ---------------------------- | --------------------------------------- |
| **Directed Graph (Digraph)** | Edges have direction (A → B)            |
| **Undirected Graph**         | Edges have no direction (A — B)         |
| **Weighted Graph**           | Edges have weights (distances, costs)   |
| **Unweighted Graph**         | All edges have equal weight             |
| **Cyclic Graph**             | Contains a cycle                        |
| **Acyclic Graph**            | No cycles (e.g., DAG)                   |
| **Connected Graph**          | Path exists between every pair of nodes |

---

## 🔸 Graph Representation

### 1. **Adjacency Matrix**

* 2D array `matrix[V][V]`
* Entry `1` if edge exists, else `0`
* Fast but uses more space: `O(V²)`

```cpp
int adj[4][4] = {
  {0, 1, 0, 0},
  {1, 0, 1, 1},
  {0, 1, 0, 0},
  {0, 1, 0, 0}
};
```

### 2. **Adjacency List**

* Array of vectors
* `adj[u] = {v1, v2, ...}` for edges from `u` to others
* Space-efficient: `O(V + E)`

```cpp
vector<int> adj[4];
adj[0].push_back(1);
adj[1].push_back(0); adj[1].push_back(2); adj[1].push_back(3);
```

---

## 🔁 Core Graph Algorithms

### 1. **BFS (Breadth-First Search)**

* Level-order traversal using a **queue**
* Best for finding shortest path in unweighted graphs

```cpp
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void bfs(int start, vector<int> adj[], int V) {
    vector<bool> visited(V, false);
    queue<int> q;

    visited[start] = true;
    q.push(start);

    while (!q.empty()) {
        int node = q.front(); q.pop();
        cout << node << " ";

        for (int neigh : adj[node]) {
            if (!visited[neigh]) {
                visited[neigh] = true;
                q.push(neigh);
            }
        }
    }
}
```

---

### 2. **DFS (Depth-First Search)**

* Goes as deep as possible using **recursion or stack**
* Used in topological sort, cycle detection, connected components

```cpp
void dfs(int node, vector<int> adj[], vector<bool> &visited) {
    visited[node] = true;
    cout << node << " ";

    for (int neigh : adj[node]) {
        if (!visited[neigh])
            dfs(neigh, adj, visited);
    }
}
```

---

### 3. **Topological Sort**

* Ordering of vertices in a **Directed Acyclic Graph (DAG)**
* All dependencies come **before** dependent nodes

#### Using DFS:

```cpp
void topoDFS(int node, vector<int> adj[], vector<bool>& visited, stack<int>& st) {
    visited[node] = true;
    for (int neigh : adj[node])
        if (!visited[neigh])
            topoDFS(neigh, adj, visited, st);
    st.push(node);
}
```

---

### 4. **Cycle Detection in Graph**

#### Undirected (using DFS):

```cpp
bool dfsCycle(int node, int parent, vector<int> adj[], vector<bool>& visited) {
    visited[node] = true;
    for (int neigh : adj[node]) {
        if (!visited[neigh]) {
            if (dfsCycle(neigh, node, adj, visited))
                return true;
        } else if (neigh != parent)
            return true; // cycle found
    }
    return false;
}
```

#### Directed (using recursion stack):

```cpp
bool isCyclic(int node, vector<int> adj[], vector<bool>& visited, vector<bool>& recStack) {
    visited[node] = recStack[node] = true;
    for (int neigh : adj[node]) {
        if (!visited[neigh] && isCyclic(neigh, adj, visited, recStack))
            return true;
        else if (recStack[neigh])
            return true;
    }
    recStack[node] = false;
    return false;
}
```

---

## 🔍 Real-Life Applications of Graphs

| Application               | Description                            |
| ------------------------- | -------------------------------------- |
| **Google Maps**           | Graph of cities/roads (shortest paths) |
| **Social Networks**       | Users = nodes, friendships = edges     |
| **Dependency Resolution** | Topological sort for build systems     |
| **Computer Networks**     | Routing tables = graph problems        |
| **Course Scheduling**     | Topo sort of prerequisites             |

---

## 🧠 Summary Table

| Algorithm            | Use Case                          | Time Complexity |
| -------------------- | --------------------------------- | --------------- |
| **BFS**              | Shortest path in unweighted graph | O(V + E)        |
| **DFS**              | Connected components, cycles      | O(V + E)        |
| **Topological Sort** | Scheduling, dependencies          | O(V + E)        |
| **Cycle Detection**  | Detect loops                      | O(V + E)        |

---

Would you like examples on **Dijkstra’s**, **Prim’s**, or **Kruskal’s algorithm** (graph with weights)?
