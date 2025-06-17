Here is a complete explanation of **Binary Search Trees (BST)** in **DSA** using **C++**, including:

---

## ✅ Definition: Binary Search Tree (BST)

A **Binary Search Tree** is a special kind of **binary tree** where:

* Each **node** has at most two children: **left** and **right**
* The **left subtree** contains only nodes with **values less than** the parent node
* The **right subtree** contains only nodes with **values greater than** the parent node
* No duplicate nodes allowed (in standard BST)

---

## 🔹 Properties of BST

| Property                    | Description                              |
| --------------------------- | ---------------------------------------- |
| **Search Time**             | `O(log n)` in average case               |
| **Insertion/Deletion Time** | `O(log n)` in average, `O(n)` worst case |
| **Inorder Traversal**       | Produces sorted elements                 |
| **Space**                   | `O(n)` for storing `n` nodes             |

---

## 🔸 Types of BST

| Type                    | Description                                          |
| ----------------------- | ---------------------------------------------------- |
| **Standard BST**        | No self-balancing; can become skewed                 |
| **Balanced BST**        | Ensures height ≈ `log n` (e.g. AVL, Red-Black Trees) |
| **Threaded BST**        | Used for fast in-order traversal                     |
| **Self-Balancing BSTs** | Automatically balance after insertion/deletion       |

---

## 💡 Real-Life Analogy

> **Phone Book Lookup (Alphabetical Order)**
> You search names by comparing — skip half if name is before or after.
> Just like a BST: search left if smaller, right if greater.

---

## 📘 C++ Example: Basic BST

### Structure:

```cpp
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};

// Insert into BST
Node* insert(Node* root, int key) {
    if (!root) return new Node(key);
    if (key < root->data)
        root->left = insert(root->left, key);
    else if (key > root->data)
        root->right = insert(root->right, key);
    return root;
}

// Inorder Traversal
void inorder(Node* root) {
    if (!root) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

// Search a value
bool search(Node* root, int key) {
    if (!root) return false;
    if (key == root->data) return true;
    if (key < root->data)
        return search(root->left, key);
    else
        return search(root->right, key);
}

int main() {
    Node* root = nullptr;
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 70);
    insert(root, 20);
    insert(root, 40);
    insert(root, 60);
    insert(root, 80);

    cout << "Inorder traversal: ";
    inorder(root);
    cout << "\nSearch 40: " << (search(root, 40) ? "Found" : "Not Found") << endl;

    return 0;
}
```

---

## 🧠 Real-Life Use Cases of BST

| Use Case                       | Description                                     |
| ------------------------------ | ----------------------------------------------- |
| **Phone contact search**       | Efficient lookup with sorted names              |
| **File systems**               | Quick access using directory tree               |
| **Symbol tables in compilers** | For variable/function name lookup               |
| **Auto-suggestion systems**    | Ordered data helps with range or prefix queries |
| **Online shopping filters**    | Price filters use BST-like structure            |

---

## 🔁 BST Operations (Complexities)

| Operation | Best / Avg Case | Worst Case (Skewed Tree) |
| --------- | --------------- | ------------------------ |
| Insert    | O(log n)        | O(n)                     |
| Delete    | O(log n)        | O(n)                     |
| Search    | O(log n)        | O(n)                     |
| Inorder   | O(n)            | O(n)                     |

---

## ✅ Summary

| Feature             | Binary Search Tree                            |
| ------------------- | --------------------------------------------- |
| Structure           | Each node has ≤ 2 children                    |
| Left Subtree        | Contains values < parent                      |
| Right Subtree       | Contains values > parent                      |
| Traversal (Inorder) | Yields sorted elements                        |
| Use Case            | Searching, sorting, storing hierarchical data |

---

Would you like to see how **deletion** or **balancing (AVL)** works in a BST next?
