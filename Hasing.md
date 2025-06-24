## **Hashing**

**Hashing** is the process of converting **input data (keys)** into a **fixed-size value (hash code/index)** using a mathematical function called a **hash function**.
This hash code is used to index data in a hash table for fast insertion, deletion, and retrieval.

---

###  **Why Use Hashing?**

* To allow **constant-time** access (`O(1)`) to data.
* Commonly used in **hash tables**, **hash maps**, **hash sets**, **caches**, etc.

---

### **Example in C++: Hashing using `unordered_map`**

```cpp
#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<string, int> ages;

    // Hashing keys (names) to store ages
    ages["Alice"] = 25;
    ages["Bob"] = 30;

    cout << "Age of Alice: " << ages["Alice"] << endl;  // Output: 25
    return 0;
}
```

> Internally, `"Alice"` is passed through a hash function that maps it to an index in a bucket array.

---

### **How Hashing Works (Internally)**:

1. You input a **key**, like `"Alice"`.
2. The hash function converts `"Alice"` → hash code → index (e.g., 42).
3. The value (e.g., `25`) is stored at that index in an array or table.

---

### **Real-life Analogy**:

**Library Book System**

* **Book Title** = Key
* **Shelf Number** = Hash Code
* The librarian uses a **hash function** (like title's first letter + Dewey system) to find which shelf to place or search for the book.

**Example**:

* Title: "Harry Potter"
* Hash Function: First character = 'H' → Shelf 8
* All books starting with H are stored there

So instead of searching every book, you **jump directly** to shelf 8 using the hash.

---

### **Key Characteristics of Hashing**

| Feature          | Description                                                 |
| ---------------- | ----------------------------------------------------------- |
| Time Complexity  | O(1) average, O(n) worst (with collisions)                  |
| Space Complexity | Depends on table size                                       |
| Applications     | Hash maps, caches, sets, databases, compilers, cryptography |

---

### 1. **Hash Table**
A **Hash Table** is a data structure that maps **keys to values** using a **hash function** to compute an index in an array of buckets.

#### **Key Characteristics**:

* Fast lookup: **O(1)** average time complexity for insertion, deletion, and search.
* Handles **collisions** using methods like chaining or open addressing.

#### **Example in C++**:

```cpp
#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<string, int> age;
    age["Alice"] = 25;
    age["Bob"] = 30;

    cout << "Age of Alice: " << age["Alice"] << endl;  // Output: 25
    return 0;
}
```

#### **Real-life Example**:

A **phone book** where names are the keys and phone numbers are the values. The name is hashed to find its index and retrieve the number efficiently.

---

### 2. **Hash Map**
A **Hash Map** is essentially the same as a Hash Table but is usually the name used in higher-level programming languages (like Java, Python, or C++ STL’s `unordered_map`) that provide built-in support.

#### **Difference from Hash Table**:

* “Hash Table” refers more to the underlying structure.
* “Hash Map” refers to the implementation/interface in many languages.

#### **Example in C++**:

```cpp
#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<string, string> capital;
    capital["India"] = "New Delhi";
    capital["France"] = "Paris";

    cout << "Capital of France: " << capital["France"] << endl;  // Output: Paris
    return 0;
}
```

####  **Real-life Example**:

Think of a **dictionary app**: you type a word (key), and it gives you a definition (value). Behind the scenes, it may use a hash map to retrieve the meaning fast.

---

### 3. **Hash Set**

#### **Definition**:

A **Hash Set** is a data structure that stores **only unique values**, without any mapping (i.e., no key-value pair).

#### **Key Characteristics**:

* Fast operations: average **O(1)** for insertion, deletion, and search.
* Automatically handles duplicates.

#### **Example in C++**:

```cpp
#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    unordered_set<int> mySet;
    mySet.insert(10);
    mySet.insert(20);
    mySet.insert(10); // Duplicate, won’t be inserted

    for (int val : mySet)
        cout << val << " ";  // Output: 10 20 (order may vary)
    return 0;
}
```

#### **Real-life Example**:

A **set of student IDs** where each student must have a **unique ID**. The hash set ensures no duplicates are allowed.

---

## **1. Frequency Counting**
**Frequency counting** is a technique used to count how many times each element appears in a dataset. It is commonly implemented using **hash maps** or **hash tables**.

---

### **Example in C++**: Count frequency of characters in a string

```cpp
#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    string text = "banana";
    unordered_map<char, int> freq;

    for (char ch : text) {
        freq[ch]++;
    }

    for (auto pair : freq) {
        cout << pair.first << " appears " << pair.second << " times\n";
    }

    return 0;
}
```

####  **Output**:

```
b appears 1 times  
a appears 3 times  
n appears 2 times
```

---

###  **Real-life Example**:

**Word counter in a document editor** (like MS Word or Google Docs). It uses frequency counting to determine how many times each word appears in the text.

---

##  **2. Collision Handling**
A **collision** occurs when two different keys produce the **same hash index**. **Collision handling** is the technique used to resolve such conflicts.

### **Collision Handling Methods**:

#### 1. **Chaining (Separate Chaining)**:

* Uses a **linked list (or list/vector)** at each index of the hash table.
* Multiple key-value pairs are stored at the same index in a chain.

####  **Example Concept** (Simplified):

Imagine two words “cat” and “tac” both hash to index 3:

```cpp
hash_table[3] = [ ("cat", 1), ("tac", 1) ] // Chained list
```

####  **Real-life Example**:

A **bank** may use the **last 3 digits** of an account number to find customer records. Different people may share the same last 3 digits, so all of them are grouped (chained) under the same bucket.

---

#### 2. **Open Addressing**:

* If a collision occurs, it **probes (searches)** for the next empty slot using methods like:

  * **Linear Probing**
  * **Quadratic Probing**
  * **Double Hashing**

####  **Example Concept** (Linear Probing):

```text
Hash index for "cat" → 3
Index 3 already occupied → try 4
Index 4 is free → insert "cat" at index 4
```

####  **Real-life Example**:

Think of parking spots in a row. If your favorite spot is taken (collision), you look for the next free one (open addressing).

---

##  **Summary Table**

| Concept            | Purpose                     | Example Structure | Real-life Analogy                       |
| ------------------ | --------------------------- | ----------------- | --------------------------------------- |
| Frequency Counting | Count frequency of elements | Hash Map          | Word counter in Google Docs             |
| Collision Handling | Resolve index conflicts     | Hash Table        | Bank accounts with similar digits       |
| - Chaining         | Store in list at same index | Hash Table        | Grouping files with same file size      |
| - Open Addressing  | Search for next empty index | Hash Table        | Finding the next available parking spot |

---



