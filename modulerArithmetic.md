## Modular Arithmetic

In simple terms, **modular arithmetic** deals with remainders:

$$
(a + b) \bmod m = ((a \bmod m) + (b \bmod m)) \bmod m
$$

Similar rules exist for subtraction, multiplication, and division (with inverse).

---

## Basic Modulo Formulas

Let `mod` be a positive integer (typically `1e9 + 7` or `998244353` in competitive programming), and `a`, `b` be integers:

### 1. **Addition**

$$
(a + b) \bmod m = ((a \bmod m) + (b \bmod m)) \bmod m
$$

### 2. **Subtraction**

$$
(a - b) \bmod m = ((a \bmod m) - (b \bmod m) + m) \bmod m
$$

> Add `m` to avoid negative results.

### 3. **Multiplication**

$$
(a \cdot b) \bmod m = ((a \bmod m) \cdot (b \bmod m)) \bmod m
$$

### 4. **Division (using Modular Inverse)**

$$
\left(\frac{a}{b}\right) \bmod m = (a \cdot b^{-1}) \bmod m
$$

> Only valid when `b` and `m` are coprime. Use Fermat’s Little Theorem if `m` is prime.

---

## Fermat’s Little Theorem (when `mod` is prime)

If `a` is not divisible by `mod`, then:

$$
a^{mod - 1} \equiv 1 \pmod{mod}
\Rightarrow a^{-1} \equiv a^{mod - 2} \pmod{mod}
$$

---

## Modular Exponentiation

$$
a^b \bmod m = \text{Use binary exponentiation to compute this efficiently.}
$$

---

## Modular Inverse

* **Using Fermat's Theorem (when `mod` is prime):**

$$
a^{-1} = a^{mod-2} \bmod mod
$$

* **Using Extended Euclidean Algorithm (general case):**

$$
a^{-1} = x \text{ such that } ax \equiv 1 \pmod{mod}
$$

---

## Factorials with Modulo

### 1. **Factorial**

$$
n! \bmod m = (1 \cdot 2 \cdot 3 \cdot \dots \cdot n) \bmod m
$$

### 2. **nCr % mod (Combination)**

$$
C(n, r) = \frac{n!}{r! \cdot (n-r)!} \bmod m
\Rightarrow C(n, r) = (fact[n] \cdot inv(fact[r]) \cdot inv(fact[n - r])) \bmod m
$$

---

## Properties of Modulo (Useful Identities)

| Operation              | Formula                                                         |
| ---------------------- | --------------------------------------------------------------- |
| Modular Addition       | $(a + b) \bmod m = ((a \bmod m) + (b \bmod m)) \bmod m$         |
| Modular Subtraction    | $(a - b) \bmod m = ((a \bmod m) - (b \bmod m) + m) \bmod m$     |
| Modular Multiplication | $(a \cdot b) \bmod m = ((a \bmod m) \cdot (b \bmod m)) \bmod m$ |
| Modular Division       | $(a / b) \bmod m = (a \cdot b^{-1}) \bmod m$                    |
| Power Modulo           | $a^b \bmod m = \text{fast exponentiation}$                      |
| Modular Inverse        | $a^{-1} \bmod m = a^{m-2} \bmod m \quad \text{(if m is prime)}$ |
| Double Modulo          | $((a \bmod m) \bmod m) = a \bmod m$                             |

---

## Practical Constants in Competitive Programming

| Constant         | Value                                      |
| ---------------- | ------------------------------------------ |
| `MOD` (commonly) | $10^9 + 7$                                 |
| `MOD2`           | $998244353$                                |
| `LL` Use         | Use `1LL * a * b` to avoid overflow in C++ |

---

## Why Use Modular Arithmetic?

When numbers become large (e.g., factorials or powers), we use modulo (commonly $10^9 + 7$) to:

* Prevent **overflow**
* Ensure **consistency**
* Solve **problems with constraints**

---

## Common Modulo Operations in C++

### 1. **Addition**

```cpp
int mod = 1e9 + 7;
int result = (a % mod + b % mod) % mod;
```

### 2. **Subtraction**

```cpp
int result = ((a % mod - b % mod) + mod) % mod; // add mod to avoid negative
```

### 3. **Multiplication**

```cpp
int result = (1LL * a % mod * b % mod) % mod;
```

### 4. **Exponentiation (a^b % mod)** – Efficient via Binary Exponentiation

```cpp
int power(int a, int b, int mod) {
    int res = 1;
    a = a % mod;
    while (b > 0) {
        if (b & 1)
            res = (1LL * res * a) % mod;
        a = (1LL * a * a) % mod;
        b >>= 1;
    }
    return res;
}
```

### 5. **Modular Inverse (a⁻¹ mod m)**

If `mod` is prime, use Fermat's Little Theorem:

$$
a^{-1} \equiv a^{m-2} \bmod m
$$

```cpp
int modInverse(int a, int mod) {
    return power(a, mod - 2, mod); // Using binary exponentiation
}
```

---

## Use Cases in DSA

| Topic          | Use of Modulo                     |
| -------------- | --------------------------------- |
| Factorials     | `n! % mod` (for combinatorics)    |
| Combinations   | `nCr % mod`                       |
| Graph Problems | Counting paths modulo $10^9+7$    |
| DP             | Ways to reach the end, modulo     |
| Hashing        | Polynomial hash using modulo      |
| Number Theory  | GCD, LCM with mod, inverse modulo |

---

## Example: Compute C(n, r) % mod

```cpp
int mod = 1e9 + 7;
vector<int> fact(N); // N is max value of n

void precompute() {
    fact[0] = 1;
    for (int i = 1; i < N; ++i)
        fact[i] = (1LL * fact[i - 1] * i) % mod;
}

int nCr(int n, int r) {
    if (r > n) return 0;
    return (1LL * fact[n] * modInverse(fact[r], mod) % mod * modInverse(fact[n - r], mod) % mod) % mod;
}
```

---

## **License**
This project is licensed under the MIT License.

---

Happy Coding!
