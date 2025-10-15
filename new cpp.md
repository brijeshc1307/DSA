
## Introduction to C++

**C++** is a general-purpose, high-performance programming language developed by **Bjarne Stroustrup** as an extension of the **C language**.
It supports **procedural**, **object-oriented**, and **generic** programming.

---


### **Timeline of Development**

| Year      | Event                                                                                                  |
| --------- | ------------------------------------------------------------------------------------------------------ |
| **1979**  | Bjarne Stroustrup begins working on "C with Classes" during his Ph.D. work.                            |
| **1983**  | Renamed to **C++** (where "++" is the increment operator in C).                                        |
| **1985**  | First official release of **C++** along with the first edition of *The C++ Programming Language* book. |
| **1989**  | Release of **C++ 2.0**, adding multiple inheritance, abstract classes, etc.                            |
| **1998**  | **C++98** standardized by ISO/IEC — the first international standard.                                  |
| **2003**  | **C++03**: A bug-fix release to C++98 with minor tweaks.                                               |
| **2011**  | **C++11**: Major update adding smart pointers, lambda expressions, auto keyword, etc.                  |
| **2014**  | **C++14**: Small updates and performance improvements.                                                 |
| **2017**  | **C++17**: More language simplifications and powerful STL improvements.                                |
| **2020**  | **C++20**: Introduced modules, coroutines, ranges, concepts, and more.                                 |
| **2023+** | **C++23** and beyond: Continued modernization and evolution of the language.                           |

---


### Features:

* Object-Oriented (Supports classes and objects)
* Fast and powerful
* Portable
* Rich Standard Template Library (STL)
* Supports low-level memory manipulation

---

## Basic Syntax of C++

Here are the basic components of a C++ program:

### Elements of C++ Code:

| Element     | Description                                 |
| ----------- | ------------------------------------------- |
| `#include`  | Preprocessor directive (includes libraries) |
| `main()`    | Entry point of any C++ program              |
| `{ }`       | Denote the body/block of code               |
| `//`        | Single-line comment                         |
| `/* */`     | Multi-line comment                          |
| `;`         | Ends a statement                            |
| `<<` / `>>` | Output/Input stream operators               |

---

##  Applications of C++

C++ is used in a wide range of domains due to its performance, flexibility, and system-level capabilities. Here are some key areas:

### 1. **System Software**

* Operating Systems (Windows, macOS, Linux components)
* Drivers and firmware
* File systems

### 2. **Game Development**

* High-performance 2D and 3D game engines
* Real-time physics and graphics rendering (e.g., Unreal Engine)

### 3. **Embedded Systems**

* IoT devices, microcontrollers
* Routers, washing machines, smartwatches, etc.

### 4. **GUI Applications**

* Desktop applications using frameworks like Qt, wxWidgets

### 5. **Database Software**

* MySQL and other database management systems use C++

### 6. **Web Browsers**

* Performance-critical parts of browsers like Chrome, Firefox are written in C++

### 7. **Financial Systems**

* Real-time trading systems
* Banking and risk management software

### 8. **Compilers and Interpreters**

* C++ is used to build compilers for other languages

### 9. **Scientific Computing**

* Simulation tools
* Data analysis frameworks

---

### Comparison: C vs C++ vs Python vs Java

| Feature / Language      | **C**                        | **C++**                                   | **Python**                        | **Java**                      |
| ----------------------- | ---------------------------- | ----------------------------------------- | --------------------------------- | ----------------------------- |
| **Developed By**        | Dennis Ritchie               | Bjarne Stroustrup                         | Guido van Rossum                  | James Gosling                 |
| **Year of Creation**    | 1972                         | 1983                                      | 1991                              | 1995                          |
| **Language Type**       | Procedural                   | Procedural + Object-Oriented              | Object-Oriented + Interpreted     | Pure Object-Oriented (mostly) |
| **Compilation**         | Compiled                     | Compiled                                  | Interpreted (can be compiled)     | Compiled to bytecode (JVM)    |
| **Speed**               | Very Fast                    | Fast                                      | Slower than C/C++                 | Slower than C/C++             |
| **Syntax**              | Complex                      | Slightly complex                          | Very simple and readable          | Verbose (needs more code)     |
| **Memory Management**   | Manual (via malloc/free)     | Manual or RAII (constructors/destructors) | Automatic (Garbage Collected)     | Automatic (Garbage Collected) |
| **Platform Dependence** | Platform Dependent           | Platform Dependent                        | Cross-platform                    | Cross-platform                |
| **Use Cases**           | System programming, Embedded | Games, System/Device software             | Web, AI, Data Science, Automation | Android, Enterprise Apps, Web |
| **OOP Support**         | ❌ No                         | ✅ Yes                                     | ✅ Yes                             | ✅ Full                        |
| **Standard Library**    | Small                        | Large (STL)                               | Very rich                         | Rich (Java API)               |
| **Pointers**            | ✅ Yes                        | ✅ Yes                                     | ❌ No direct use                   | ❌ No direct use               |
| **Main Extension**      | `.c`                         | `.cpp`                                    | `.py`                             | `.java`                       |

---

## Compiler

A **compiler** is a program that **translates source code written in a high-level programming language (like C++) into machine code (binary code)** that a computer's processor can execute.

### Example:

Suppose you write this C++ code in a file `hello.cpp`:

```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "Hello, World!" << endl;
    return 0;
}
```

Now, you compile it using a compiler like **G++**:

```bash
g++ hello.cpp -o hello
```

This creates an executable file `hello` that you can run:

```bash
./hello
```

Output:

```
Hello, World!
```
For mac/linux
```
g++ -std=c++11 code.cpp && ./a.out

or

g++ -std=c++11 code.cpp -o myprogram && ./myprogram

```



---

## Compilation Stages in C++

The C++ compilation process has **four main stages**:

### 1. **Preprocessing**

* Handled by the preprocessor (`#include`, `#define`, etc.)
* Produces a "pure" C++ code without macros and includes.

### 2. **Compilation**

* Translates the preprocessed code into **assembly code**.

### 3. **Assembly**

* Converts assembly code into **object code** (`.o` or `.obj` file).

### 4. **Linking**

* Links all object files and libraries to generate the final **executable**.

---

## Related Topics in C++

### 1. **Interpreter vs Compiler**

| Feature      | Compiler                | Interpreter                      |
| ------------ | ----------------------- | -------------------------------- |
| Output       | Machine code            | Line-by-line execution           |
| Speed        | Faster execution        | Slower execution                 |
| Example Lang | C, C++, Java (compiled) | Python, JavaScript (interpreted) |

---

### 2. **Header Files**

These files (like `<iostream>`) are included during the **preprocessing** stage. They contain function declarations and macros.

### 3. **Object Files**

Files with `.o` or `.obj` extensions are produced after the compilation stage, but before linking.

---

## Summary Diagram

```text
hello.cpp
   |
[Preprocessor] --> expanded code
   |
[Compiler] --> hello.s (Assembly)
   |
[Assembler] --> hello.o (Object Code)
   |
[Linker] --> hello (Executable)
```
---
## Data Types in C++

>A Data Type specifies the type of data that a variable can store such as Integer, Float, Charecter, etc. 
In C++, data types are used to define the **type of data** a variable can hold. They are mainly categorized into:

### 1. **Primitive (Built-in) Data Types**
>These are basic types provided by the language.

### 2. **Derived Data Types**
>These are built from primitive types.

### 3. **User-Defined Data Types**
>These are created by the programmer for specific needs.

### Data Types

| **Primitive (Built-in) Data Types** | **Derived Data Types** | **User-Defined Data Types** |
| ----------------------------------- | ---------------------- | --------------------------- |
| `int`                               | Array                  | `struct`                    |
| `float`,                            | Pointer                | `union`                     |
| `double`                            | Function               | `class`                     |
| `char`                              | Reference              | `enum`                      |
| `bool`                              |                        | `typedef`                   |
| `wchar_t` (wide character)          |                        | `using`                     |

---


## 📏 C++ Data Types and Their Sizes (in Bytes)

| **Category**  | **Data Type**    | **Size (Bytes)** | **Range (Approximate)**                              |
| ------------- | ---------------- | ---------------- | ---------------------------------------------------- |
| **Primitive** | `bool`           | 1                | `true` or `false`                                    |
|               | `char`           | 1                | -128 to 127 (ASCII)                                  |
|               | `unsigned char`  | 1                | 0 to 255                                             |
|               | `int`            | 4                | -2,147,483,648 to 2,147,483,647                      |
|               | `unsigned int`   | 4                | 0 to 4,294,967,295                                   |
|               | `short int`      | 2                | -32,768 to 32,767                                    |
|               | `unsigned short` | 2                | 0 to 65,535                                          |
|               | `long int`       | 4 or 8           | Platform dependent (usually same as `int` or larger) |
|               | `unsigned long`  | 4 or 8           | 0 to 4 billion+                                      |
|               | `long long int`  | 8                | ±9 quintillion approx.                               |
|               | `float`          | 4                | \~3.4e-38 to 3.4e+38                                 |
|               | `double`         | 8                | \~1.7e-308 to 1.7e+308                               |
|               | `long double`    | 8, 12, or 16     | Depends on compiler (wider precision)                |

---

## Notes:

* `sizeof(type)` in C++ can be used to check size at runtime.
* Sizes may differ based on compiler settings and architecture.
* `void` has no size; it means "no value" and is used for functions that don't return anything.

---

###  2. **Variables in C++**

* A **variable** is a name for a memory location to store a value.
* It must be declared with a data type before use.

#### Syntax:

```cpp
<data_type> <variable_name> = <value>;
```

#### Rules for Variable Names:

* Must start with a letter or underscore.
* Cannot use C++ keywords (like `int`, `return`, etc.)
* Case-sensitive (`Age` and `age` are different).

---

### 3. **`const` in C++**

* **`const`** is a keyword to declare **constants** (values that cannot change after initialization).

#### Syntax:

```cpp
const data_type variable_name = value;
```

#### Example:

```cpp
const float PI = 3.14;
```

Attempting to change `PI` later will cause a compile-time error.

---

### Example Code:

```cpp
#include <iostream>
using namespace std;

int main() {
    int age = 25;              // variable
    const float PI = 3.14;     // constant
    char grade = 'A';          // variable
    bool isAdult = true;       // variable

    cout << "Age: " << age << endl;
    cout << "PI: " << PI << endl;
    cout << "Grade: " << grade << endl;
    cout << "Is Adult: " << isAdult << endl;

    return 0;
}
```
---
### ASCII Code
* **ASCII (American Standard Code for Information Interchange)** assigns a numeric value (0–127) to each character.
* It includes:

  * **Control characters** (0–31, 127): e.g., `\n`, `\t`, backspace — mostly non-printable.
  * **Printable characters** (32–126): letters, digits, punctuation, symbols, and space.
* **Common ASCII Values:**

  * `'A'` to `'Z'` → 65 to 90
  * `'a'` to `'z'` → 97 to 122
  * `'0'` to `'9'` → 48 to 57
  * `Space` → 32
  * `Enter (newline)` → 10 (`\n`)
  * `Tab` → 9 (`\t`)
* In **C++**, you can:

  * Convert a **char to ASCII** using: `int code = (int)ch;`
  * Convert an **ASCII code to char** using: `char ch = (char)code;`

---
##  Operators in C++

Operators are symbols that perform operations on variables and values. C++ supports various types of operators:

---

### 1. **Arithmetic Operators**

| Operator | Description         | Example |
| -------- | ------------------- | ------- |
| `+`      | Addition            | `a + b` |
| `-`      | Subtraction         | `a - b` |
| `*`      | Multiplication      | `a * b` |
| `/`      | Division            | `a / b` |
| `%`      | Modulus (remainder) | `a % b` |

**Example**:

```cpp
int a = 10, b = 3;
cout << a + b << endl;  // 13
cout << a % b << endl;  // 1
```

---

### 2. **Relational (Comparison) Operators**

| Operator | Description           | Example  |
| -------- | --------------------- | -------- |
| `==`     | Equal to              | `a == b` |
| `!=`     | Not equal to          | `a != b` |
| `>`      | Greater than          | `a > b`  |
| `<`      | Less than             | `a < b`  |
| `>=`     | Greater than or equal | `a >= b` |
| `<=`     | Less than or equal    | `a <= b` |

**Example**:

```cpp
cout << (a > b);  // Outputs 1 (true)
```

---

### 3. **Logical Operators**
```markdown
| Operator | Description | Example           |  
| -------- | ----------- | ----------------- | 
| `&&`     | Logical AND | `a > 5 && b < 10` |   
| `||`     | Logical OR  | `a > 5 || b < 10` |  
| `!`      | Logical NOT | `!(a == b)`       |
```

**Example**:

```cpp
if (a > 5 && b < 10) {
    cout << "Condition true";
}
```

---

### 4. **Assignment Operators**

| Operator | Description         | Example  |
| -------- | ------------------- | -------- |
| `=`      | Assign value        | `a = 5`  |
| `+=`     | Add and assign      | `a += 3` |
| `-=`     | Subtract and assign | `a -= 2` |
| `*=`     | Multiply and assign | `a *= 4` |
| `/=`     | Divide and assign   | `a /= 2` |
| `%=`     | Modulus and assign  | `a %= 3` |

---

### 5. **Increment/Decrement Operators**

| Operator | Description | Example        |
| -------- | ----------- | -------------- |
| `++`     | Increment   | `++a` or `a++` |
| `--`     | Decrement   | `--a` or `a--` |

**Example**:

```cpp
int x = 5;
cout << ++x;  // Outputs 6
cout << x--;  // Outputs 6 (then x becomes 5)
```

---

### 6. **Bitwise Operators**
```markdown
| Operator | Description | Example    |    
| -------- | ----------- | ---------- | 
| `&`      | Bitwise AND | `a & b`    |    
| `|`      | Bitwise OR  | `a | b`    |
| `^`      | Bitwise XOR | `a ^ b`    |    
| `~`      | Bitwise NOT | `~a`       |   
| `<<`     | Left shift  | `a << 1`   |    
| `>>`     | Right shift | `a >> 1`   |   
```
---

### 7. **Conditional (Ternary) Operator**

| Operator | Description             | Example         |
| -------- | ----------------------- | --------------- |
| `?:`     | Short if-else condition | `a > b ? a : b` |

**Example**:

```cpp
int max = (a > b) ? a : b;
```

---

### 8. **Sizeof Operator**

| Operator | Description          | Example       |
| -------- | -------------------- | ------------- |
| `sizeof` | Returns size of type | `sizeof(int)` |

---

### 9. **Typecast Operator**

| Operator | Description                  | Example               |
| -------- | ---------------------------- | --------------------- |
| `(type)` | Converts one type to another | `float f = (float)a;` |

---

### 10. **Pointer Operators**

| Operator | Description                    | Example |
| -------- | ------------------------------ | ------- |
| `*`      | Value at address (dereference) | `*ptr`  |
| `&`      | Address of a variable          | `&a`    |

---

## Example using multiple operators:

```cpp
#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 3;
    int max = (a > b) ? a : b; // ternary
    cout << "Max: " << max << endl;
    cout << "Sum: " << a + b << endl;
    cout << "Bitwise AND: " << (a & b) << endl;
    return 0;
}
```

---
## Control structures

Control structures in C++ are fundamental programming constructs that manage the flow of execution in a program. They are mainly categorized into **decision-making**, **looping**, and **branching** structures.

---

## 1. **Decision-Making Statements**

### a. **if Statement**

**Syntax:**

```cpp
if (condition) {
    // code to execute if condition is true
}
```

**Example:**

```cpp
int age = 20;
if (age >= 18) {
    cout << "You are eligible to vote.";
}
```

---

### b. **if-else Statement**

**Syntax:**

```cpp
if (condition) {
    // code if condition is true
} else {
    // code if condition is false
}
```

**Example:**

```cpp
int age = 16;
if (age >= 18) {
    cout << "Eligible to vote";
} else {
    cout << "Not eligible to vote";
}
```

---

### c. **else-if Ladder**

**Syntax:**

```cpp
if (condition1) {
    // code
} else if (condition2) {
    // code
} else {
    // default code
}
```

**Example:**

```cpp
int marks = 85;
if (marks >= 90) {
    cout << "Grade A";
} else if (marks >= 75) {
    cout << "Grade B";
} else {
    cout << "Grade C";
}
```

---

### d. **switch Statement**

**Syntax:**

```cpp
switch (expression) {
    case value1:
        // code
        break;
    case value2:
        // code
        break;
    default:
        // default code
}
```

**Example:**

```cpp
int day = 3;
switch (day) {
    case 1: cout << "Monday"; break;
    case 2: cout << "Tuesday"; break;
    case 3: cout << "Wednesday"; break;
    default: cout << "Invalid day";
}
```

---

## 2. **Looping Statements**

### a. **for Loop**

**Syntax:**

```cpp
for (initialization; condition; increment) {
    // code
}
```

**Example:**

```cpp
for (int i = 1; i <= 5; i++) {
    cout << i << " ";
}
```

---

### b. **while Loop**

**Syntax:**

```cpp
while (condition) {
    // code
}
```

**Example:**

```cpp
int i = 1;
while (i <= 5) {
    cout << i << " ";
    i++;
}
```

---

### c. **do-while Loop**

**Syntax:**

```cpp
do {
    // code
} while (condition);
```

**Example:**

```cpp
int i = 1;
do {
    cout << i << " ";
    i++;
} while (i <= 5);
```

---
## 2. **Range-Based For Loop (C++11 and later)**
```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers = {10, 20, 30, 40, 50};
    // OR
    // int numbers[] = {10, 20, 30, 40, 50};

    // Range-based for loop
    for (int num : numbers) {
        cout << num << " ";
    }

    return 0;
}

```
Output
```
10 20 30 40 50 
```
---

## 3. **Branching Statements**

### a. **break Statement**

Used to exit a loop or switch statement early.

**Example:**

```cpp
for (int i = 1; i <= 10; i++) {
    if (i == 5) break;
    cout << i << " ";
}
```

---

### b. **continue Statement**

Skips the current iteration of a loop.

**Example:**

```cpp
for (int i = 1; i <= 5; i++) {
    if (i == 3) continue;
    cout << i << " ";
}
```

---

### c. **goto Statement**

**Note:** Use is discouraged in modern C++ due to readability issues.

**Syntax:**

```cpp
goto label;
// code
label:
// code
```

**Example:**

```cpp
int x = 1;
goto skip;
cout << "This will not print";
skip:
cout << "Goto used!";
```

---
## Function
A function is a named block of code that takes zero or more inputs (parameters), performs some computation or action, and optionally produces an output (return value).
Functions let you encapsulate behavior, reuse code, and separate concerns: instead of repeating logic, you call the function wherever that behavior is needed.

>In C++ a function has a signature (return type + name + parameter types) and can have storage/linkage, overloads, templates, or be a member of a class.


## **Function Types in C++**

1. **Built-in functions** – Provided by C++ libraries (e.g., `sqrt()`, `pow()`)
2. **User-defined functions** – Created by the programmer
3. **Recursive functions** – A function that calls itself

---

## **Syntax of a Function**

```cpp
return_type function_name(parameters) {
    // body of the function
    return value; // (if return_type is not void)
}
```

---

## **Function Declaration (Prototype)**

Before using a function, it can be declared at the top:

```cpp
return_type function_name(parameter_list);
```

> This helps the compiler know the function signature before its actual definition.

---

## **Example: Function Without Parameters and No Return Value**

```cpp
#include <iostream>
using namespace std;

void greet() {
    cout << "Hello, welcome to C++ functions!" << endl;
}

int main() {
    greet(); // function call
    return 0;
}
```

---

## **Example: Function With Parameters and Return Value**

```cpp
#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

int main() {
    int result = add(5, 3); // function call with arguments
    cout << "Sum is: " << result;
    return 0;
}
```

---

## **Function with Default Arguments**

```cpp
#include <iostream>
using namespace std;

void display(string name = "Guest") {
    cout << "Hello, " << name << endl;
}

int main() {
    display("Brijesh");
    display();  // uses default argument
    return 0;
}
```

---

## **Recursive Function Example**

---

## **Inline Function**

Used for small, frequently-used functions. Hint to compiler to replace function call with function code.

```cpp
#include <iostream>
using namespace std;

inline int square(int x) {
    return x * x;
}

int main() {
    cout << "Square of 4 is: " << square(4);
    return 0;
}
```

---



### **1. Pass by Value**
* A **copy** of the actual parameter is passed.
* Changes made inside the function do **not affect** the original variable.

**Example:**

```cpp
void modify(int x) {
    x = 10;  // Only modifies the copy
}
```

---

### **2. Pass by Reference**
* The **actual variable itself** is passed using a reference (`&`).
* Changes made inside the function **do affect** the original variable.

**Example:**

```cpp
void modify(int &x) {
    x = 10;  // Modifies the original
}
```
**Example:**
## **1. Pass by Reference using `&`**

```cpp
#include <iostream>
using namespace std;

void modify(int &x) { // x is an alias to the original variable
    x = 10;  // This changes the original variable
}

int main() {
    int num = 5;
    modify(num); // Passes reference
    cout << "After modify(): " << num << endl; // Output: 10
    return 0;
}
```

---

## **2. Pass by Reference using `*` (Pointer)**

```cpp
#include <iostream>
using namespace std;

void modify(int *x) { // x is a pointer to the original variable
    *x = 20;  // Dereferencing changes the original variable
}

int main() {
    int num = 5;
    modify(&num); // Pass address of num
    cout << "After modify(): " << num << endl; // Output: 20
    return 0;
}
```
---

### **Pointers in C++**
A **pointer** is a variable that **stores the memory address** of another variable. Instead of storing data directly, it stores the location of where data is kept in memory.

---

#### **Basic Syntax:**

```cpp
type* pointerName;
```

* `type` is the data type the pointer will point to.
* `*` indicates it's a pointer.
* `pointerName` is the name of the pointer variable.

---

### **Example:**

```cpp
#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int* ptr = &x;  // pointer to x

    cout << "Value of x: " << x << endl;         // 10
    cout << "Address of x: " << &x << endl;      // e.g. 0x61ff08
    cout << "Value of ptr: " << ptr << endl;     // same as &x
    cout << "Value pointed by ptr: " << *ptr << endl; // 10

    return 0;
}
```

---

### **Types of Pointers in C++:**

| Type of Pointer        | Description                                         |
| ---------------------- | --------------------------------------------------- |
| **Null Pointer**       | Points to nothing (`nullptr`)                       |
| **Void Pointer**       | Generic pointer, can point to any data type         |
| **Wild Pointer**       | Uninitialized pointer, can cause undefined behavior |
| **Dangling Pointer**   | Points to memory that has been deallocated          |
| **Function Pointer**   | Points to a function                                |
| **Pointer to Pointer** | Stores the address of another pointer               |
| **Const Pointer**      | Pointer cannot be changed or point to const data    |

---

### **Pointer Operations:**

| Operator | Description                                  |
| -------- | -------------------------------------------- |
| `*`      | Dereference (access value at address)        |
| `&`      | Address-of (get memory address of variable)  |
| `->`     | Access members of a struct/class via pointer |
| `[]`     | Pointer indexing (like arrays)               |

---

## **Types of Pointers in C++**

---

### 1. **Null Pointer**

A pointer that does not point to any memory location. It is assigned `nullptr` (in C++11 and later).

#### Example:

```cpp
int* ptr = nullptr;
```

#### Use:

* Used to check if a pointer is pointing to something or not before using it.

---

### 2. **Void Pointer (`void*`)**

A generic pointer that can point to any data type but **cannot be dereferenced directly**.

#### Example:

```cpp
int x = 10;
void* ptr = &x;
// Need to cast before dereferencing
cout << *(int*)ptr << endl;
```

#### Use:

* Used in generic functions and dynamic memory operations.

---

### 3. **Wild Pointer**

A pointer that has not been initialized to any valid memory location.

#### Example (unsafe):

```cpp
int* ptr;  // wild pointer
*ptr = 10; // undefined behavior
```

####  Warning:

* Always initialize pointers before using them.

---

### 4. **Dangling Pointer**

A pointer pointing to memory that has been **freed** or **goes out of scope**.

####  Example:

```cpp
int* ptr;
{
    int x = 5;
    ptr = &x;
}
// x is out of scope here, ptr is dangling
```

####  Warning:

* Accessing it leads to undefined behavior.

---

### 5. **Function Pointer**

Used to point to a function. Allows dynamic function calling.

#### Example:

```cpp
void greet() {
    cout << "Hello!" << endl;
}

int main() {
    void (*funcPtr)() = &greet;
    funcPtr();  // Calls greet()
}
```

---

### 6. **Pointer to Pointer**

A pointer that stores the address of another pointer.

####  Example:

```cpp
int x = 5;
int* p = &x;
int** pp = &p;

cout << **pp << endl;  // Output: 5
```

---

### 7. **Const Pointer vs Pointer to Const**

#### A. **Pointer to Constant Value** (can’t change value)

```cpp
const int x = 5;
const int* ptr = &x;
// *ptr = 10; //  Not allowed
```

#### B. **Constant Pointer** (can't change the address)

```cpp
int x = 5, y = 10;
int* const ptr = &x;
*ptr = 20;       //  Allowed
// ptr = &y;     //  Not allowed
```

#### C. **Const Pointer to Const Value**

```cpp
const int x = 5;
const int* const ptr = &x;
// *ptr = 10;    // 
// ptr = &y;     // 
```
---

## **Key Pointer Concepts**

### 1. **Address-of Operator `&`**

* Used to get the memory address of a variable.

```cpp
int x = 5;
int* ptr = &x;
```

### 2. **Dereference Operator `*`**

* Used to access the value at the memory address.

```cpp
cout << *ptr; // prints value of x
```

---

## **Pointer Arithmetic**

```cpp
int arr[3] = {10, 20, 30};
int* ptr = arr;

cout << *ptr << endl;     // 10
cout << *(ptr + 1) << endl; // 20
```

> In arrays, `ptr + 1` moves to the next element (next memory location).

---

## **Pointers and Functions**

**Pass-by-Reference using pointers:**

```cpp
void update(int* p) {
    *p = *p + 10;
}

int main() {
    int x = 5;
    update(&x);
    cout << "Updated x: " << x;  // Output: 15
    return 0;
}
```

---

## **Dynamic Memory Allocation**

Using `new` and `delete`:

```cpp
int* ptr = new int;    // dynamically allocate memory
*ptr = 50;
cout << *ptr << endl;
delete ptr;            // free the memory
```

For arrays:

```cpp
int* arr = new int[5]; // dynamic array
arr[0] = 10;
delete[] arr;          // free array memory
```

---

## **Null Pointer**

```cpp
int* ptr = nullptr;
```

> `nullptr` ensures the pointer is not pointing to any memory address.

---

## **Void Pointer**

Can point to any data type:

```cpp
void* ptr;
int x = 5;
ptr = &x;
// To access, need to typecast
cout << *(int*)ptr;
```

---

## Summary Table

| Pointer Concept       | Example             |
| --------------------- | ------------------- |
| Declaration           | `int* p;`           |
| Initialization        | `p = &x;`           |
| Dereferencing         | `*p`                |
| Pointer to Array      | `int* p = arr;`     |
| Function with Pointer | `void func(int* p)` |
| Dynamic Memory        | `int* p = new int;` |
| Free Memory           | `delete p;`         |
| Null Pointer          | `int* p = nullptr;` |

---




###  **1. What is the difference between a pointer and a reference in C++?**
* Reference is an alias for a variable. It cannot be NULL and must be initialized.
* Pointer is a variable storing address. It can be reassigned and can be NULL.

| Feature            | Pointer                  | Reference                      |
| ------------------ | ------------------------ | ------------------------------ |
| Syntax             | `int* ptr = &x;`         | `int& ref = x;`                |
| Can be null?       | ✅ Yes (`ptr = nullptr;`) | ❌ No, must refer to something  |
| Can be reassigned? | ✅ Yes                    | ❌ No (once bound, stays bound) |
| Memory address     | Holds an address         | Acts as an alias               |
| Dereferencing      | `*ptr`                   | No need; just use `ref`        |

####  Example:

```cpp
int a = 10;
int* ptr = &a;     // Pointer to a
int& ref = a;      // Reference to a

*ptr = 20;         // a becomes 20
ref = 30;          // a becomes 30
```

---

### **2. Can you have an array of pointers? How is it useful?**

**Yes**, you can have an array where each element is a pointer.

####  Syntax:

```cpp
int a = 1, b = 2, c = 3;
int* arr[3] = { &a, &b, &c };
```

####  Use Cases:

* **Array of strings**:

  ```cpp
  const char* fruits[] = { "Apple", "Banana", "Mango" };
  ```
* **Pointing to dynamically allocated memory**
* **Handling polymorphism (array of base class pointers)**

---


### **3. Difference Between Shallow Copy and Deep Copy (with Pointers)**

#### **Shallow Copy**:

* Copies **only the pointer address** (not the actual data).
* Both objects share the **same memory**.
* Changes in one affect the other.

#### **Deep Copy**:

* Allocates **new memory** and copies the actual data.
* Each object manages its own memory.
* Safer for managing dynamic resources.

#### Example:

```cpp
class Shallow {
public:
    int* data;
    Shallow(int val) { data = new int(val); }
    ~Shallow() { delete data; }
    // Default copy constructor → shallow copy
};

class Deep {
public:
    int* data;
    Deep(int val) { data = new int(val); }
    ~Deep() { delete data; }
    Deep(const Deep& other) {
        data = new int(*other.data);  // Deep copy
    }
};
```

---
## Reference 

A **reference** in C++ is an **alias** (alternative name) for an existing variable. It allows you to refer to the same memory location with another name.
>means same memory but diffrent name.
---

## Syntax:

```cpp
type &referenceName = originalVariable;
```

---

## Simple Example:

```cpp
#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int &ref = a;  // ref is a reference to a

    cout << "a = " << a << endl;       // 10
    cout << "ref = " << ref << endl;   // 10

    ref = 20;  // Changing ref also changes a

    cout << "a = " << a << endl;       // 20
    return 0;
}
```

---

## Key Characteristics:

* A reference **must be initialized** when declared.
* After initialization, it **cannot be changed** to refer to another variable.
* Internally, it **shares the same memory** as the original variable.
* Useful for **function arguments**, **return values**, and **operator overloading**.

---

## Why Use References?

1. **Avoid copying** large data structures (like arrays or objects).
2. **Modify original variables** inside functions.
3. Enable **efficient and clean code**.

---

##  References vs Pointers

| Feature             | Reference         | Pointer                |
| ------------------- | ----------------- | ---------------------- |
| Syntax              | `int &ref = var;` | `int *ptr = &var;`     |
| Can be null         |   No              |   Yes                  |
| Must be initialized |   Yes             |   No                   |
| Can be reassigned   |   No              |   Yes                  |
| Dereferencing       | Not needed        | `*ptr` to access value |
| Safer               |   Yes             |   Prone to null errors |

---

## Reference as Function Parameter (Pass by Reference)

```cpp
void increment(int &x) {
    x++;
}

int main() {
    int a = 5;
    increment(a);
    cout << a;  // Output: 6
}
```

> Changes made to `x` affect `a` directly.

---

## Reference as Return Value (Return by Reference)

```cpp
int& getElement(int arr[], int index) {
    return arr[index];
}

int main() {
    int arr[3] = {1, 2, 3};
    getElement(arr, 1) = 10;  // arr[1] becomes 10 // Error! Cannot assign to a temporary value
    cout << arr[1];           // Output: 10
}
```
>
---

## Summary

* **Reference** is an alias to a variable.
* More convenient and safer than pointers in many cases.
* Used heavily in **function arguments**, **return types**, and **operator overloading**.

## **Smart Pointers in C++**

**Smart pointers** are wrappers around raw pointers that automatically manage memory. They are part of the C++ Standard Library (`<memory>` header) and help avoid memory leaks and dangling pointers.

>  Automatically delete memory when it’s no longer needed.
>  No need to call `delete` manually.

---

### **Types of Smart Pointers**

| Smart Pointer | Description                                               |
| ------------- | --------------------------------------------------------- |
| `unique_ptr`  | Owns memory exclusively. No sharing.                      |
| `shared_ptr`  | Multiple smart pointers can share ownership.              |
| `weak_ptr`    | Observes `shared_ptr` without increasing reference count. |

---

### **1. `unique_ptr`**

* Only one `unique_ptr` can own the resource at a time.
* Automatically deletes memory when it goes out of scope.

**Syntax:**

```cpp
#include <iostream>
#include <memory>
using namespace std;

int main() {
    unique_ptr<int> ptr = make_unique<int>(10);
    cout << "Value: " << *ptr << endl;
    return 0;
}
```

---

### **2. `shared_ptr`**

* Multiple `shared_ptr`s can own the same resource.
* Memory is freed when the last `shared_ptr` is destroyed.

**Syntax:**

```cpp
#include <iostream>
#include <memory>
using namespace std;

int main() {
    shared_ptr<int> p1 = make_shared<int>(20);
    shared_ptr<int> p2 = p1; // shared ownership

    cout << "Value from p1: " << *p1 << endl;
    cout << "Value from p2: " << *p2 << endl;
    cout << "Use count: " << p1.use_count() << endl;

    return 0;
}
```

---

### **3. `weak_ptr`**

* Used to break circular references in `shared_ptr`.
* Does **not** increase reference count.

**Syntax:**

```cpp
#include <iostream>
#include <memory>
using namespace std;

int main() {
    shared_ptr<int> sp = make_shared<int>(30);
    weak_ptr<int> wp = sp; // does not affect use_count

    cout << "Use count: " << sp.use_count() << endl;

    if (auto temp = wp.lock()) {
        cout << "Value: " << *temp << endl;
    } else {
        cout << "Pointer expired";
    }

    return 0;
}
```

---

## **Comparison: Raw Pointers vs Smart Pointers**

| Feature             | Raw Pointer (`int*`)     | Smart Pointer (`unique_ptr`, `shared_ptr`) |
| ------------------- | ------------------------ | ------------------------------------------ |
| Memory management   | Manual (`new/delete`)    | Automatic                                  |
| Safety              | Unsafe (can cause leaks) | Safe (RAII-based)                          |
| Ownership control   | No                       | Yes (`unique`, `shared`, `weak`)           |
| Requires `<memory>` | No                       | Yes                                        |

---

## Summary Code Using All Pointer Types

```cpp
#include <iostream>
#include <memory>
using namespace std;

void rawPointerExample() {
    int* ptr = new int(5);
    cout << "Raw pointer: " << *ptr << endl;
    delete ptr;
}

void uniquePtrExample() {
    unique_ptr<int> ptr = make_unique<int>(10);
    cout << "Unique pointer: " << *ptr << endl;
}

void sharedPtrExample() {
    shared_ptr<int> sp1 = make_shared<int>(20);
    shared_ptr<int> sp2 = sp1;
    cout << "Shared pointer: " << *sp1 << ", use count: " << sp1.use_count() << endl;
}

void weakPtrExample() {
    shared_ptr<int> sp = make_shared<int>(30);
    weak_ptr<int> wp = sp;
    if (auto temp = wp.lock()) {
        cout << "Weak pointer locked: " << *temp << endl;
    }
}

int main() {
    rawPointerExample();
    uniquePtrExample();
    sharedPtrExample();
    weakPtrExample();
    return 0;
}
```
---

## Common Smart Pointer Functions

| Function      | Applies to                 | Description                                                              |
| ------------- | -------------------------- | ------------------------------------------------------------------------ |
| `reset()`     | `unique_ptr`, `shared_ptr` | Releases ownership of the current object and optionally takes a new one. |
| `get()`       | All smart pointers         | Returns the raw pointer without releasing ownership.                     |
| `use_count()` | `shared_ptr`               | Returns the number of `shared_ptr` instances managing the same object.   |
| `unique()`    | `shared_ptr`               | Returns `true` if the smart pointer is the only owner.                   |
| `swap()`      | All smart pointers         | Swaps the managed objects of two smart pointers.                         |
| `release()`   | `unique_ptr`               | Releases ownership and returns the raw pointer (must delete manually).   |
| `lock()`      | `weak_ptr`                 | Converts to `shared_ptr` if the managed object still exists.             |
| `move()`      | All (via `std::move`)      | Transfers ownership (especially in `unique_ptr`).                        |

---
## Array
In C++, **an array** is a collection of **elements of the same data type**, stored in **contiguous memory locations**. Arrays are used to store multiple values in a single variable, instead of declaring separate variables for each value.

---

### **Why Use Arrays?**

* To group related data together
* To reduce code complexity (especially when using loops)
* To access elements by index easily

---

## Declaration and Initialization of Arrays

```cpp
#include <iostream>
using namespace std;

int main() {
    int numbers[5] = {10, 20, 30, 40, 50};

    for (int i = 0; i < 5; i++) {
        cout << "Element at index " << i << " is " << numbers[i] << endl;
    }

    return 0;
}
```

### Output:

```
Element at index 0 is 10
Element at index 1 is 20
Element at index 2 is 30
Element at index 3 is 40
Element at index 4 is 50
```
>Note: ```int numbers[n];``` standard C++ में invalid है, क्योंकि C++ को array की size compile-time पर पता होनी चाहिए। Best practice नहीं मानी जाती। अगर आप run-time पर size लेना चाहते हैं, तो: 1. ```new``` और ```delete[]``` use करें (manual memory management) or 2. ```std::vector``` use करें (modern C++ approach)।

```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int numbers[n] = {10, 20, 30, 40, 50};

    for (int i = 0; i < n; i++) {
        cout << "Element at index " << i << " is " << numbers[i] << endl;
    }

    return 0;
}
```

### Output:

```
Element at index 0 is 10
Element at index 1 is 20
Element at index 2 is 30
Element at index 3 is 40
Element at index 4 is 50
```

---

## Types of Arrays in C++

| Type              | Description                                  | Example                   |
| ----------------- | -------------------------------------------- | ------------------------- |
| 1D Array          | One-dimensional, linear array                | `int arr[5];`             |
| 2D Array          | Matrix-like array (rows & columns)           | `int matrix[3][3];`       |
| Multi-D Array     | 3D or higher-dimensional arrays              | `int tensor[2][3][4];`    |
| Character Array   | Array of characters (like a string)          | `char name[10] = "John";` |
| Array of Pointers | Holds memory addresses                       | `int* ptrArr[5];`         |
| Dynamic Array     | Size can be set during runtime (heap memory) | `int* arr = new int[n];`  |

---

## 1. One-Dimensional Array

```cpp
int marks[4] = {90, 80, 85, 70};
```

---

## 2. Two-Dimensional Array

```cpp
int matrix[2][3] = {
    {1, 2, 3},
    {4, 5, 6}
};
```

### Access:

```cpp
cout << matrix[1][2];  // Output: 6
```

---

## 3. Multi-Dimensional Array (3D Example)

```cpp
int arr[2][2][2] = {
    { {1, 2}, {3, 4} },
    { {5, 6}, {7, 8} }
};
```

---

## 4. Character Array (C-style string)

```cpp
char name[6] = "Alice"; // Includes null character '\0'
```

---

## 5. Array of Pointers

```cpp
int a = 10, b = 20;
int* arr[2] = {&a, &b};
cout << *arr[1];  // Output: 20
```

---

## 6. Dynamic Array

```cpp
int n = 5;
int* arr = new int[n];

for (int i = 0; i < n; i++) {
    arr[i] = i + 1;
}

delete[] arr;  // Free the memory
```

---

## Key Points:

* Indexing starts from 0
* Size must be known at compile time for static arrays
* Use `new` and `delete` for dynamic memory allocation

---

### Common Matrix Formulas

| **Operation**             | **Formula (Math Notation)**                                                 | **Description**                                        |
| ------------------------- | --------------------------------------------------------------------------- | ------------------------------------------------------ |
| **Transpose**             | $A^T$                                                                       | Flip matrix $A$ over its diagonal                      |
| **Addition**              | $C = A + B$                                                                 | Add corresponding elements: $c_{ij} = a_{ij} + b_{ij}$ |
| **Subtraction**           | $C = A - B$                                                                 | Subtract corresponding elements                        |
| **Scalar Multiplication** | $B = kA$                                                                    | Multiply each element by scalar $k$                    |
| **Matrix Multiplication** | $C = AB$                                                                    | $c_{ij} = \sum_{k=1}^n a_{ik} \cdot b_{kj}$            |
| **Determinant (2×2)**     | $\det(A) = ad - bc$, for $A = \begin{bmatrix} a & b \\ c & d \end{bmatrix}$ | Scalar value representing the area/volume scale        |
| **Inverse (2×2)**         | $A^{-1} = \frac{1}{\det(A)} \begin{bmatrix} d & -b \\ -c & a \end{bmatrix}$ | Exists only if $\det(A) \neq 0$                        |
| **Identity Matrix**       | $I$, such that $AI = IA = A$                                                | Diagonal matrix with 1’s on diagonal                   |
| **Symmetric Matrix**      | $A = A^T$                                                                   | Equal to its own transpose                             |
| **Orthogonal Matrix**     | $A^T A = AA^T = I$                                                          | Inverse equals transpose                               |
| **Trace**                 | $\text{Tr}(A) = \sum_{i=1}^n a_{ii}$                                        | Sum of diagonal elements                               |
| **Rank**                  | $\text{rank}(A)$                                                            | Number of linearly independent rows/columns            |

---

## **2. Static Arrays**

### Definition:

Fixed-size arrays where the size is known at compile-time.

### Use:

Efficient for small data sets with known size.

### Example:

```cpp
int arr[100]; // Static array of size 100
```

---

## **3. Prefix Sums**

### Definition:

An array where each element at index `i` stores the sum of the array elements from index `0` to `i`.

### Use:

Used to quickly calculate sum of subarrays in O(1) after O(n) preprocessing.

### Example:

```cpp
#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    int prefix[n];
    prefix[0] = arr[0];
    for (int i = 1; i < n; i++) {
        prefix[i] = prefix[i - 1] + arr[i];
    }
    int l = 1, r = 3; // sum from index 1 to 3
    int sum = prefix[r] - (l > 0 ? prefix[l - 1] : 0);
    cout << "Sum from " << l << " to " << r << " is " << sum;
    return 0;
}
```

---

## **4. Kadane’s Algorithm (Maximum Subarray Sum)**

### Definition:

Algorithm to find the maximum sum of a contiguous subarray in O(n) time.

### Use:

Useful in dynamic programming and stock market-related problems.

### Example:

```cpp
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int maxSoFar = arr[0], maxEndingHere = arr[0];
    
    for (int i = 1; i < n; i++) {
        maxEndingHere = max(arr[i], maxEndingHere + arr[i]);
        maxSoFar = max(maxSoFar, maxEndingHere);
    }
    cout << "Maximum subarray sum is " << maxSoFar;
    return 0;
}
```

---

## **5. Dutch National Flag Algorithm**

### Definition:

An algorithm to sort an array of 0s, 1s, and 2s in a single pass.

### Use:

Optimized sorting for three types of elements.

### Example:

```cpp
#include <iostream>
using namespace std;

void sortColors(int arr[], int n) {
    int low = 0, mid = 0, high = n - 1;
    while (mid <= high) {
        if (arr[mid] == 0)
            swap(arr[low++], arr[mid++]);
        else if (arr[mid] == 1)
            mid++;
        else
            swap(arr[mid], arr[high--]);
    }
}

int main() {
    int arr[] = {2, 0, 2, 1, 1, 0};
    int n = 6;
    sortColors(arr, n);
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    return 0;
}
```

---

## **6. Two Pointer Technique**

### Definition:

Using two pointers (indices) to scan the array from different directions.

### Use:

Useful in problems involving pairs or triplets, especially in sorted arrays.

### Example:

**Find if a pair exists with a given sum**

```cpp
#include <iostream>
#include <algorithm>
using namespace std;

bool hasPairWithSum(int arr[], int n, int target) {
    sort(arr, arr + n);
    int left = 0, right = n - 1;
    while (left < right) {
        int sum = arr[left] + arr[right];
        if (sum == target) return true;
        else if (sum < target) left++;
        else right--;
    }
    return false;
}

int main() {
    int arr[] = {1, 4, 45, 6, 10, -8};
    int target = 16;
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << (hasPairWithSum(arr, n, target) ? "Yes" : "No");
    return 0;
}
```

---

## **7. Sliding Window Technique**

### Definition:

A technique to maintain a "window" of elements and slide it over the array to optimize time complexity.

### Use:

Efficient for problems involving subarrays like max sum, averages, or distinct elements.

### Example:

**Find max sum of subarray of size k**

```cpp
#include <iostream>
using namespace std;

int maxSum(int arr[], int n, int k) {
    int maxSum = 0, windowSum = 0;

    for (int i = 0; i < k; i++)
        windowSum += arr[i];
    
    maxSum = windowSum;

    for (int i = k; i < n; i++) {
        windowSum += arr[i] - arr[i - k];
        maxSum = max(maxSum, windowSum);
    }

    return maxSum;
}

int main() {
    int arr[] = {100, 200, 300, 400};
    int k = 2;
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Maximum sum of subarray of size " << k << " is " << maxSum(arr, n, k);
    return 0;
}
```

---

### **String**

A **string** is a sequence of characters. C++ provides **two types of strings**:

---

## **1. C-Style Strings (Character Array)**

A **C-style string** is an array of characters terminated by a null character `'\0'`.

### Declaration & Initialization

```cpp
#include <iostream>
using namespace std;

int main() {
    char name[6] = "Alice"; // A-l-i-c-e-\0
    cout << "Name: " << name << endl;
    return 0;
}
```

### Notes:

* `char name[6]` includes 5 characters + 1 for `'\0'` (null terminator)
* You can also write: `char name[] = {'A','l','i','c','e','\0'};`

---

## **2. C++ Strings (Using `<string>` class)**

C++ Standard Library provides the `std::string` class which is more powerful and easier to use.
>String in cpp like 1 dimentional char array


### Example:

```cpp
#include <iostream>
#include <string>  // Required for std::string
using namespace std;

int main() {
    string name = "Brijesh";
    char lastname[20];
    string address;
    cin>>lastname>>address;
    cout << "Name is: " << name <<" "<<lastname<<" "<<address<<endl;

    // Operations
    cout << "Length Name: " << name.length() << endl;
    cout << "Size Name: " << name.size() << endl;
    //cout << "Length lastname: " << lastname.length() << endl;
    cout << "Length lastname: " << size(lastname) << endl;
    cout << "Length address: " << address.length() << endl;
    cout << "First char: " << name[0] << endl;

    name += " Chaudhary";  // Concatenation
    cout << "Full Name: " << name << endl;

    return 0;
}
```
Output
```
Name is: Brijesh chaudhary Ramnagar
Length Name: 7
Size Name: 7
Length lastname: 20
Length address: 8
First char: B
Full Name: Brijesh Chaudhary
```

---

### **C++ `std::string` Functions**

| **Function**             | **Description**                                     | **Example**                    | **Time Complexity**   |
| ------------------------ | --------------------------------------------------- | ------------------------------ | --------------------- |
| `length()` / `size()`    | Returns number of characters in the string          | `str.length()`                 | O(1)                  |
| `empty()`                | Checks if string is empty                           | `str.empty()`                  | O(1)                  |
| `at(index)`              | Access character with bounds checking               | `str.at(2)`                    | O(1)                  |
| `[]`                     | Access character (no bounds check)                  | `str[2]`                       | O(1)                  |
| `append(str)`            | Adds str to the end of string                       | `str.append("World")`          | O(n) (n = str.size()) |
| `+`                      | Concatenates two strings                            | `str = str1 + str2`            | O(n + m)              |
| `substr(pos, len)`       | Returns substring starting at `pos` of length `len` | `str.substr(0, 5)`             | O(len)                |
| `find(str)`              | Finds first occurrence of `str`                     | `str.find("lo")`               | O(n \* m) worst-case  |
| `rfind(str)`             | Finds last occurrence of `str`                      | `str.rfind("l")`               | O(n \* m) worst-case  |
| `erase(pos, len)`        | Removes `len` chars from position `pos`             | `str.erase(2, 3)`              | O(n)                  |
| `insert(pos, str)`       | Inserts `str` at position `pos`                     | `str.insert(5, "Test")`        | O(n + m)              |
| `replace(pos, len, str)` | Replaces `len` chars at `pos` with `str`            | `str.replace(2, 3, "xyz")`     | O(n + m)              |
| `compare(str)`           | Compares two strings lexicographically              | `str.compare("Hello")`         | O(min(n, m))          |
| `c_str()`                | Returns C-style (null-terminated) char array        | `const char* c = str.c_str();` | O(1)                  |
| `swap(str2)`             | Swaps content with another string                   | `str1.swap(str2)`              | O(1)                  |
| `clear()`                | Removes all characters from the string              | `str.clear()`                  | O(1)                  |

### **Legend**

* `n` = length of the original string
* `m` = length of the string being added or searched

---

## Types of Strings in C++

| Type                 | Description                                | Example                                        |
| -------------------- | ------------------------------------------ | ---------------------------------------------- |
| **Character Array**  | C-style string using array of `char`       | `char str[10] = "Hello";`                      |
| **std::string**      | C++ style string using `#include <string>` | `string s = "Hello";`                          |
| **Array of Strings** | Array that holds multiple strings          | `string names[3] = {"Ram", "Shyam", "Mohan"};` |

---

## Example: Array of Strings

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string fruits[3] = {"Apple", "Banana", "Mango"};

    for (int i = 0; i < 3; i++) {
        cout << "Fruit " << i + 1 << ": " << fruits[i] << endl;
    }

    return 0;
}
```

---

### Difference Between C-String vs C++ String

| Feature       | C-String (`char[]`) | C++ String (`std::string`) |
| ------------- | ------------------- | -------------------------- |
| Header Needed | None or `<cstring>` | `<string>`                 |
| Terminated By | `'\0'`              | Not required               |
| Easy to Use   | ❌                   | ✅                          |
| Dynamic Size  | ❌                   | ✅                          |

---
## **Object-Oriented Programming (OOP) in C++**
Object-Oriented Programming (OOP) is a programming paradigm based on objects that encapsulate data and behavior. It allows for better code organization, reusability, and scalability.

### **Key Features of OOP:**
- **Encapsulation** – Wrapping data and functions into a single unit (class).
- **Abstraction** – Hiding unnecessary details and exposing only relevant features.
- **Inheritance** – Creating new classes from existing ones to promote reusability.
- **Polymorphism** – Ability to take multiple forms (function and operator overloading).

---

### **Class**
A class is a blueprint for creating objects. It defines properties (data members) and behaviors (member functions).
>"Class is user defined datatype"

```cpp
#include <iostream>
using namespace std;

class Car {
public:
    string brand;
    int speed;

    void show() {
        cout << "Brand: " << brand << ", Speed: " << speed << " km/h" << endl;
    }
};
```

### **Object**
An object is an instance of a class. or Object is an entity which has behavior, state/properties.
Real life example: Camera, light, laptop, etc.
```cpp
int main() {
    Car c1;
    c1.brand = "Toyota";
    c1.speed = 120;
    c1.show();
    return 0;
}
```
--- 

### Size of Empty Class
```cpp
#include <iostream>
using namespace std;

class EmptyClass {}; // No data members

int main() {
    cout << "Size of EmptyClass: " << sizeof(EmptyClass) << " byte" << endl;
    return 0;
}
```
```
Size of EmptyClass: 1 byte
```

---

### Why Size of EmptyClass: 1 byte
### Reason: To Ensure Each Object Has a Unique Address

The C++ standard requires that **each object in memory has a unique address**. If an empty class had a size of 0, then two instances of that class could potentially occupy the same memory address, which would break this rule.

#### Example:

```cpp
class Empty {};

int main() {
    Empty e1, e2;
    std::cout << &e1 << "\n";
    std::cout << &e2 << "\n";
}
```

This prints **two different addresses**, so `e1` and `e2` can be treated as distinct objects.

To make this work, the compiler gives every instance of an empty class a **minimum size of 1 byte**—often called a **dummy byte**—even though there's no actual data.

---

###  Special Cases

1. **Empty Base Optimization (EBO)**:
   When an empty class is used as a **base class**, modern compilers can optimize it out to avoid wasting that 1 byte.

   ```cpp
   class Empty {};
   class Derived : public Empty {
       int x;
   };
   ```

   In this case, `sizeof(Derived)` might be just `4` (not `5`), because the compiler applies EBO.

2. **Standard Compliance**:
   The C++ standard (specifically \[C++11 and later]) allows this optimization for base classes, but still requires that **non-base empty objects must have a size of at least 1**.

---


### **Access Modifiers in C++**
Access modifiers in C++ control the visibility and accessibility of class members (variables and functions). They help in implementing **encapsulation** by restricting direct access to data.

### **Types of Access Modifiers**
C++ provides three types of access modifiers:

| Access Modifier | Scope | Accessible From |
|---------------|--------|-----------------|
| `public` | Anywhere | Inside and outside the class |
| `private` | Within the class | Only inside the same class |
| `protected` | Within the class and derived classes | Inside the same class and its subclasses |

---

### **Getter | Setter**
Getters and setters are used to access and modify private data members in a class. They help in **data encapsulation** and provide controlled access to variables. 
>कोई भी Value or Data memebr अगर private है तो Getter and Setter की help से acccess कर सकते है

---

### **Why Use Getters and Setters?**
  - **Encapsulation**: Protects data by restricting direct access.  
  - **Validation**: Ensures data integrity by applying conditions before setting values.  
  - **Read-Only or Write-Only Access**: Allows controlled access to data.  

---

### **Example of Getters and Setters**
### **Without Getters and Setters (Incorrect Approach)**
```cpp
class Student {
public:
    int rollNo;  // Bad practice: directly accessible
};

int main() {
    Student s;
    s.rollNo = 101;  // Direct modification
    cout << "Roll No: " << s.rollNo << endl;
    return 0;
}
```
```
Roll No: 101
```

**Issue:** No control over roll number; it can be changed freely.

---

### **Using Getters and Setters (Correct Approach)**
```cpp
#include <iostream>
using namespace std;

class Student {
private:
    int rollNo;  // Private data member

public:
    // Setter function (to set value)
    void setRollNo(int r) {
        if (r > 0)  // Validation check
            rollNo = r;
        else
            cout << "Invalid Roll Number!" << endl;
    }

    // Getter function (to get value)
    int getRollNo() {
        return rollNo;
    }
};

int main() {
    Student s;
    s.setRollNo(101);  // Setting value using setter
    cout << "Roll No: " << s.getRollNo() << endl;  // Getting value using getter
    return 0;
}
```
**Output:**
```
Roll No: 101
```
**Advantages:**  
- Prevents invalid roll numbers.  
- Restricts direct access to private variables.  

---

### **Structure vs Class**

| Feature    | Description                                                                                                                                                            |
| ---------- | ---------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| **class**  | Default access is **private**. Default inheritance is **private**. Supports member functions and OOP features. Commonly used for encapsulation and complex types.      |
| **struct** | Default access is **public**. Default inheritance is **public**. Also supports member functions and OOP features. Typically used for simple data grouping (POD types). |


---
### **Normal Variable vs Object Variable**

## 1. **Normal Variable (Primitive or Simple Variable)**

### **Definition**:

A normal variable holds **simple data types** or **primitive values** such as integers, floats, booleans, or characters.

### **Example**:

```cpp
int x = 5;        
string name = "John"; 
float pi = 3.14;    
```

---

## 2. **Object Variable (Instance Variable / Reference Variable)**

### **Definition**:

An object variable is a **reference to an instance of a class**. It holds **objects**, not simple values.

### **Example**:

```cpp
#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    string name;

    // Constructor
    Person(string n) {
        name = n;
    }

    void greet() {
        cout << "Hello, my name is " << name << endl;
    }
};

int main() {
    Person p1("Alice");   // Object variable (instance of class Person)
    p1.greet();

    int x = 10;           // Normal variable (primitive type)

    return 0;
}

```

---
## **Constructor in C++**  
A **constructor** is a special function that initializes an object when it is created.  
>Object creation time पर Invoke होता है, जब हम Constructor बनाते है तब Deafault Constructor call नहीं होता है वो Delete हो जाता है

### **Key Features of a Constructor:**  
- **Same name as the class.**  
- **No return type (not even `void`).**  
- **Automatically invoked when an object is created.**  
- Can be **default, parameterized, or copy constructor**.
  
### **Why use it?** 
- Auto-initializes members
- Makes code cleaner and safer
- Supports overloading for flexibility
- Required for const or reference members


---
## Types of Constructors

### 1. **Default Constructor**

* Takes no parameters.
* Automatically generated if no constructor is defined.

```cpp
#include <iostream>
using namespace std;

class Example {
    int a;

public:
    // Default constructor
    Example() {
        a = 0;
        cout << "Default constructor called! a = " << a << endl;
    }
};

int main() {
    Example obj1;          // Default constructor
    return 0;
}
```

---

### 2. **Parameterized Constructor**

* Takes parameters to initialize member variables.

```cpp
// C++ program to calculate the area of a wall

#include <iostream>
using namespace std;

// declare a class
class Wall {
  private:
    double length;
    double height;

  public:
    // parameterized constructor to initialize variables
    Wall(double len, double hgt) {
      length = len;
      height = hgt;
    }

    double calculateArea() {
      return length * height;
    }
};

int main() {
  // create object and initialize data members
  Wall wall1(10.5, 8.6);
  Wall wall2(8.5, 6.3);

  cout << "Area of Wall 1: " << wall1.calculateArea() << endl;
  cout << "Area of Wall 2: " << wall2.calculateArea();

  return 0;
}
```
```
Area of Wall 1: 90.3
Area of Wall 2: 53.55
```


---

### 3. **Copy Constructor**

* Used to create a new object as a copy of an existing object.
* Syntax: `ClassName(const ClassName &other)`

```cpp
#include <iostream>
using namespace std;

// declare a class
class Wall {
  private:
    double length;
    double height;

  public:

    // initialize variables with parameterized constructor
    Wall(double len, double hgt) {
      length = len;
      height = hgt;
    }

    // copy constructor with a Wall object as parameter
    // copies data of the obj parameter
    Wall(Wall &obj) {
      length = obj.length;
      height = obj.height;
    }

    double calculateArea() {
      return length * height;
    }
};

int main() {
  // create an object of Wall class
  Wall wall1(10.5, 8.6);

  // copy contents of wall1 to wall2
  Wall wall2(wall1);
  //Wall wall2 = wall1;

  // print areas of wall1 and wall2
  cout << "Area of Wall 1: " << wall1.calculateArea() << endl;
  cout << "Area of Wall 2: " << wall2.calculateArea();

  return 0;
}
```
```
Area of Wall 1: 90.3
Area of Wall 2: 90.3
```

---

### 4. **Move Constructor** (C++11 and above)

* Transfers resources from one object to another.
* Syntax: `ClassName(ClassName &&other)`

```cpp
class Person {
public:
    string name;

    Person(string n) : name(n) {}

    Person(Person&& p) {
        name = std::move(p.name);
        cout << "Move constructor called" << endl;
    }
};
```

---

### 5. **Constructor with Default Arguments**

* Combines default and parameterized behavior.

```cpp
class Person {
public:
    string name;
    int age;

    Person(string n = "Unknown", int a = 0) {
        name = n;
        age = a;
    }
};
```

---

### 6. **Delegating Constructor** (C++11+)

* One constructor calls another constructor in the same class.

```cpp
class Person {
public:
    string name;
    int age;

    Person() : Person("Unknown", 0) {}  // Delegates to parameterized constructor

    Person(string n, int a) {
        name = n;
        age = a;
    }
};
```

---
### **Example: Default, Parametrized, Copy Constructor, move constructor, Constructor with Default Arguments,Delegating Constructor**  
---
```cpp
#include <iostream>
#include <string>
#include <utility>  // for std::move

using namespace std;

class Person {
private:
    string name;
    int age;

public:
    // 1. Default Constructor
    Person() {
        name = "Default";
        age = 0;
        cout << "[Default Constructor] Name: " << name << ", Age: " << age << endl;
    }

    // 2. Parameterized Constructor
    Person(string n, int a) {
        name = n;
        age = a;
        cout << "[Parameterized Constructor] Name: " << name << ", Age: " << age << endl;
    }

    // 3. Copy Constructor
    Person(const Person &p) {
        name = p.name;
        age = p.age;
        cout << "[Copy Constructor] Name: " << name << ", Age: " << age << endl;
    }

    // 4. Move Constructor
    Person(Person &&p) noexcept {
        name = std::move(p.name);
        age = p.age;
        cout << "[Move Constructor] Name: " << name << ", Age: " << age << endl;
    }

    // 5. Constructor with Default Arguments
    Person(string n = "John Doe") {
        name = n;
        age = 100;
        cout << "[Constructor with Default Argument] Name: " << name << ", Age: " << age << endl;
    }

    // 6. Delegating Constructor
    Person(int id) : Person("Delegated", id) {
        cout << "[Delegating Constructor] ID used as age: " << id << endl;
    }

    // Print details method
    void display() const {
        cout << ">> Person Info: Name = " << name << ", Age = " << age << endl;
    }
};

int main() {
    cout << "\n--- Default Constructor ---" << endl;
    Person p1;

    cout << "\n--- Parameterized Constructor ---" << endl;
    Person p2("Alice", 25);

    cout << "\n--- Copy Constructor ---" << endl;
    Person p3 = p2; // invokes copy constructor

    cout << "\n--- Move Constructor ---" << endl;
    Person p4 = std::move(p3); // invokes move constructor

    cout << "\n--- Constructor with Default Arguments ---" << endl;
    Person p5; // calls constructor with default argument

    cout << "\n--- Delegating Constructor ---" << endl;
    Person p6(42); // calls delegating constructor

    return 0;
}
```
Output
```
--- Default Constructor ---
[Default Constructor] Name: Default, Age: 0

--- Parameterized Constructor ---
[Parameterized Constructor] Name: Alice, Age: 25

--- Copy Constructor ---
[Copy Constructor] Name: Alice, Age: 25

--- Move Constructor ---
[Move Constructor] Name: Alice, Age: 25

--- Constructor with Default Arguments ---
[Constructor with Default Argument] Name: John Doe, Age: 100

--- Delegating Constructor ---
[Parameterized Constructor] Name: Delegated, Age: 42
[Delegating Constructor] ID used as age: 42
```
---

## Notes

* If **no constructors** are defined, the compiler provides a **default constructor**.
* If you define **any constructor**, the compiler **won’t** generate a default one unless you explicitly declare it.
* Constructors **can be overloaded** (you can have multiple with different parameters).

---
## **Types of Copy (Behavior, not constructor type)**

### Shallow Copy Constructor
A shallow copy creates a new object, but **does not copy the inner (nested) objects**. Instead, it copies references to them.
* **Result:** Changes to nested objects in the copy **affect the original**.
* Only the top-level object is copied.
* Inner objects are **shared** between original and copy.
* Default copy constructor also know as Shallow Copy

>Shallow copy एक नया object बनाता है, लेकिन इसके अंदर मौजूद inner (nested) objects की कॉपी नहीं करता। इसके बजाय, वो उनके references (पते) को कॉपी करता है।
>Copy किए गए nested objects में बदलाव करने पर original object भी प्रभावित होता है।
>केवल top-level object की कॉपी बनती है।
>Inner objects original और copy के बीच साझा (shared) रहते हैं।
>C++ में जो default copy constructor होता है, वो आमतौर पर shallow copy करता है।

```cpp
#include <iostream>
using namespace std;

// Box Class
class box {
private:
	int length;
	int breadth;
	int height;

public:
	// Function that sets the dimensions
	void set_dimensions(int length1, int breadth1, int height1)
	{
		length = length1;
		breadth = breadth1;
		height = height1;
	}

	// Function to display the dimensions
	// of the Box object
	void show_data()
	{
		cout << " Length = " << length
			<< "\n Breadth = " << breadth
			<< "\n Height = " << height
			<< endl;
	}
};

// Driver Code
int main()
{
	// Object of class Box
	box B1, B3;

	// Set dimensions of Box B1
	B1.set_dimensions(14, 12, 16);
	B1.show_data();

	// When copying the data of object
	// at the time of initialization
	// then copy is made through
	// COPY CONSTRUCTOR
	box B2 = B1;
	B2.show_data();

	// When copying the data of object
	// after initialization then the
	// copy is done through DEFAULT
	// ASSIGNMENT OPERATOR
	B3 = B1;
	B3.show_data();

	return 0;
}
```
```
 Length = 14
 Breadth = 12
 Height = 16
 Length = 14
 Breadth = 12
 Height = 16
 Length = 14
 Breadth = 12
 Height = 16
```

### Deep Copy Constructor
A deep copy creates a new object **and** also copies **all nested objects** recursively.
* **Result:** Changes to nested objects in the copy **do not affect the original**.
* Both the top-level and inner objects are fully copied.
* Original and copied objects are **independent**.

>Deep copy एक नया object बनाता है और उसमें मौजूद सभी nested objects (अंदर के objects) को भी recursively कॉपी करता है।
>Copy किए गए nested objects में बदलाव का असर original object पर नहीं पड़ता।
>Top-level और अंदर के सभी objects की अलग-अलग कॉपी बनती है।
>Original और copied object एक-दूसरे से पूरी तरह स्वतंत्र (independent) होते हैं।


```cpp
// deep copy
#include <iostream>
using namespace std;

// Box Class
class box {
private:
	int length;
	int* breadth;
	int height;

public:
	// Constructor
	box()
	{
		breadth = new int;
	}

	// Function to set the dimensions
	// of the Box
	void set_dimension(int len, int brea, int heig)
	{
		length = len;
		*breadth = brea;
		height = heig;
	}

	// Function to show the dimensions
	// of the Box
	void show_data()
	{
		cout << " Length = " << length
			<< "\n Breadth = " << *breadth
			<< "\n Height = " << height
			<< endl;
	}

	// Parameterized Constructors for
	// for implementing deep copy
	box(box& sample)
	{
		length = sample.length;
		breadth = new int;
		*breadth = *(sample.breadth);
		height = sample.height;
	}

	// Destructors
	~box()
	{
		delete breadth;
	}
};

// Driver Code
int main()
{
	// Object of class first
	box first;

	// Set the dimensions
	first.set_dimension(12, 14, 16);

	// Display the dimensions
	first.show_data();

	// When the data will be copied then
	// all the resources will also get
	// allocated to the new object
	box second = first;

	// Display the dimensions
	second.show_data();

	return 0;
}
```
```
 Length = 12
 Breadth = 14
 Height = 16
 Length = 12
 Breadth = 14
 Height = 16
```
---

### **3. Difference Between Shallow Copy and Deep Copy (with Pointers)**

#### **Shallow Copy**:

* Copies **only the pointer address** (not the actual data).
* Both objects share the **same memory**.
* Changes in one affect the other.

#### **Deep Copy**:

* Allocates **new memory** and copies the actual data.
* Each object manages its own memory.
* Safer for managing dynamic resources.

---
### **Copy Assignment Operator**

The **copy assignment operator** is used to assign the contents of one object to another **already existing** object of the same class.

**Syntax:**

```cpp
ClassName& operator=(const ClassName& other);
```

* It **overwrites** the contents of an object.
* It’s called **when you use `=` between two objects** of the same class **after they have been created**.
* You should define it **when your class manages dynamic memory** to prevent shallow copy issues.
* If you don’t define it, the compiler provides a **default copy assignment operator** that performs a **shallow copy** (bitwise copy of all members).

---

### **Example:**

```cpp
#include <iostream>
using namespace std;

class Person {
public:
    string* name;

    Person(string n) {
        name = new string(n);
    }

    // Copy constructor (deep copy)
    Person(const Person& other) {
        name = new string(*other.name);
    }

    // Copy assignment operator (deep copy)
    Person& operator=(const Person& other) {
        if (this != &other) {  // Prevent self-assignment
            delete name;  // Clean up old memory
            name = new string(*other.name);  // Allocate new memory and copy
        }
        return *this;
    }

    void show() {
        cout << *name << endl;
    }

    ~Person() {
        delete name;
    }
};

int main() {
    Person p1("John");
    Person p2("David");

    p2 = p1;  // copy assignment operator called

    *p2.name = "Michael";

    p1.show();  // Output: John
    p2.show();  // Output: Michael

    return 0;
}
```

---


## **2. Destructor in C++**  
A **destructor** is a special function that cleans up an object before it is destroyed.  

### **Key Features of a Destructor:**  
- **Same name as the class but prefixed with `~`** (tilde).  
- **No return type and no parameters.**  
- **Automatically called when an object goes out of scope or `delete` is used.**  
- **Used to free dynamically allocated memory or release resources.**

### **Example: Destructor in C++**  
```cpp
#include <iostream>
using namespace std;

class Example {
public:
    // Constructor
    Example() {
        cout << "Constructor called!" << endl;
    }

    // Destructor
    ~Example() {
        cout << "Destructor called!" << endl;
    }
};

int main() {
    Example obj;  // Constructor is called automatically
    return 0;     // Destructor is called when obj goes out of scope
}
```

### **Output:**  
```
Constructor called!
Destructor called!
```

---

## **When Are Constructor and Destructor Called?**  
| Event            | Constructor | Destructor |
|-----------------|-------------|------------|
| Object Created  | Called    | Not Called |
| Object Deleted  | Not Called | Called |
| Object Goes Out of Scope | Not Called | Called |

---

## **Example: Constructor and Destructor in Dynamic Memory**
```cpp
#include <iostream>
using namespace std;

class Example {
public:
    Example() { cout << "Constructor called!" << endl; }
    ~Example() { cout << "Destructor called!" << endl; }
};

int main() {
    Example* obj = new Example(); // Constructor called
    delete obj; // Destructor called
    return 0;
}
```
### **Output:**
```
Constructor called!
Destructor called!
```

---
### **Rule of 0, 3, and 5 in C++**

These are guidelines about when and how to define special member functions in **C++ classes** that manage **resources** (like memory, file handles, etc.).

---

## 1. **Rule of 0**

* **You don’t need to define any special functions manually.**
* Let the **compiler generate** everything: constructor, destructor, copy/move constructor, assignment operators.

### When to use:

* Your class **doesn't own any raw resources** (like raw pointers).
* You use **standard containers** (like `std::string`, `std::vector`, `std::unique_ptr`, etc.).

### Example:

```cpp
#include <iostream>
#include <string>

class Person {
private:
    std::string name;
    int age;

public:
    Person(const std::string& name, int age)
        : name(name), age(age) {}

    void introduce() const {
        std::cout << "Hi, I'm " << name << " and I'm " << age << " years old." << std::endl;
    }
};

```

---

## 2. **Rule of 3**

If you define **any one** of the following:

* Copy constructor
* Copy assignment operator
* Destructor

**Then you should define all three.**

### When to use:

* Your class **manages a raw resource** (e.g., raw pointers, dynamic memory).

### Example:

```cpp
class MyClass {
    int* data;

public:
    MyClass() {
        data = new int[10];
    }

    // 1. Destructor
    ~MyClass() {
        delete[] data;
    }

    // 2. Copy Constructor
    MyClass(const MyClass& other) {
        data = new int[10];
        std::copy(other.data, other.data + 10, data);
    }

    // 3. Copy Assignment
    MyClass& operator=(const MyClass& other) {
        if (this != &other) {
            delete[] data;
            data = new int[10];
            std::copy(other.data, other.data + 10, data);
        }
        return *this;
    }
};
```

---

##  3. **Rule of 5** (C++11 and later)

If your class manages resources and you define:

* Copy constructor
* Copy assignment operator
* Destructor

Then also define:

* **Move constructor**
* **Move assignment operator**

###  When to use:

* To **optimize performance** by allowing move semantics instead of always copying.

###  Example (with move):

```cpp
class MyClass {
    int* data;

public:
    MyClass() {
        data = new int[10];
    }

    ~MyClass() {
        delete[] data;
    }

    MyClass(const MyClass& other) {
        data = new int[10];
        std::copy(other.data, other.data + 10, data);
    }

    MyClass& operator=(const MyClass& other) {
        if (this != &other) {
            delete[] data;
            data = new int[10];
            std::copy(other.data, other.data + 10, data);
        }
        return *this;
    }

    // Move Constructor
    MyClass(MyClass&& other) noexcept {
        data = other.data;
        other.data = nullptr;
    }

    // Move Assignment
    MyClass& operator=(MyClass&& other) noexcept {
        if (this != &other) {
            delete[] data;
            data = other.data;
            other.data = nullptr;
        }
        return *this;
    }
};
```

---

## Summary Table:

| Rule      | You Define...                    | When              | Purpose                            |
| --------- | -------------------------------- | ----------------- | ---------------------------------- |
| Rule of 0 | Nothing                          | No raw resources  | Rely on compiler-generated members |
| Rule of 3 | Copy ctor, copy assignment, dtor | Raw resource mgmt | Correct copying & destruction      |
| Rule of 5 | + Move ctor, move assignment     | C++11+            | Avoid unnecessary deep copies      |

---

## **3.Encapsulation in C++**

---

Encapsulation is the process of wrapping data and functions into a single unit (class) and restricting direct access to some of the object's components. It is used to protect data from unauthorized access and modification by using access specifiers like private, public, and protected.

>Data hiding | Information hiding wraping up data member and function. (Fully encapsulated class - all Data members private होता है)

---

### **Real-Life Example:**

**Example: Bank Account**

Imagine a **bank account**. You can **deposit** or **withdraw** money using specific methods, but you **cannot directly change** the balance from outside.

* **Balance** is kept **private**
* **Deposit** and **Withdraw** methods are **public**

This protects the account from invalid operations.

---

### **Code Example:**

```cpp
#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance; // private data member

public:
    // Constructor
    BankAccount(double initialBalance) {
        if (initialBalance >= 0)
            balance = initialBalance;
        else
            balance = 0;
    }

    // Public method to deposit money
    void deposit(double amount) {
        if (amount > 0)
            balance += amount;
    }

    // Public method to withdraw money
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance)
            balance -= amount;
        else
            cout << "Invalid withdraw amount" << endl;
    }

    // Public method to check balance
    double getBalance() {
        return balance;
    }
};

int main() {
    BankAccount myAccount(1000); // Create an account with ₹1000

    myAccount.deposit(500);      // Add ₹500
    myAccount.withdraw(200);     // Withdraw ₹200

    cout << "Current balance: ₹" << myAccount.getBalance() << endl;

    // myAccount.balance = 10000; //  Not allowed: balance is private

    return 0;
}
```
### **Output:**
```
Current balance: ₹1300
```

---

### **Benefits of Encapsulation:**

* Protects internal state of the object
* Improves security and control
* Makes the code modular and maintainable
* Enables data hiding
* If we want, wecan make class- "Read Only"
* Use for unit testing
---

## **4. Abstraction**

**Abstraction** is the process of **hiding the internal implementation** and showing only the **essential features** to the user. It lets you use complex systems easily without knowing how they work inside.

>Abstract means displaying only essential information and hiding the details. OR Implementation hiding and showing only the features.

---

### **Benefits of Abstraction:**

* Only we can make changes to our data or function, and no one esle can.
* It makes the application secure by not allowing anyone else to see the background details.
* Increase the reuseabilty of the code.
* Avoides duplicate of our code
---

### **Real-Life Example: Sending an Email**

When we send an email:

* We write the email, enter the recipient, and click **Send**.
* We **don’t know** how the mail is converted to packets, how servers communicate, or how the message is routed and delivered.

That’s **abstraction** — the complex logic is hidden, and only necessary functions are exposed to the user.

---

### **C++ Code Example:**

```cpp
#include <iostream>
using namespace std;

// Abstract class
class EmailService {
public:
    // Pure virtual function (interface)
    virtual void sendEmail(string to, string message) = 0;
};

// Concrete class
class Gmail : public EmailService {
public:
    void sendEmail(string to, string message) override {
        // Internal logic is hidden from the user
        cout << "Sending email to: " << to << endl;
        cout << "Message: " << message << endl;
        cout << "Email sent successfully using Gmail!" << endl;
    }
};

int main() {
    EmailService* email = new Gmail();

    // User only uses exposed interface
    email->sendEmail("example@gmail.com", "Hello! This is an abstracted email system.");

    delete email;
    return 0;
}
```

---

### **Explanation:**

* `EmailService` is an **abstract class**.
* `sendEmail()` is a **pure virtual function** — it defines *what* needs to be done.
* `Gmail` class implements *how* the email is sent — this internal logic is **hidden**.
* The user just calls `sendEmail()`, without knowing the complex background operations.

---

###  **C++ Code Example (Using Abstract Class):**

```cpp
#include <iostream>
using namespace std;

// Abstract class (contains at least one pure virtual function)
class Animal {
public:
    virtual void makeSound() = 0; // pure virtual function
};

class Dog : public Animal {
public:
    void makeSound() override {
        cout << "Dog barks " << endl;
    }
};

class Cat : public Animal {
public:
    void makeSound() override {
        cout << "Cat meows " << endl;
    }
};

int main() {
    Animal* a1 = new Dog();
    Animal* a2 = new Cat();

    a1->makeSound();  // Output: Dog barks
    a2->makeSound();  // Output: Cat meows

    delete a1;
    delete a2;

    return 0;
}
```
---

###  **Key Concepts:**

* `Animal` is an **abstract class** (cannot be instantiated).
* `makeSound()` is a **pure virtual function**, which forces derived classes to provide their own implementation.
* This hides **how** `makeSound()` is implemented and only exposes **what** it does.

---
```cpp
#include <iostream>
using namespace std;

class A {
private:
    int a,b;
public:
    void set(int x, int y){
        a=x;
        b=y;
    }
    void show(){
        cout<<"a = "<<a<<endl;
        cout<<"b = "<<b<<endl;
    }
};

int main() {
    A obj;
    obj.set(10,20);
    obj.show();
    return 0;
}

```
### **Output:**
```
a = 10
b = 20
```

---
###  **Difference Between Abstraction and Encapsulation:**

| Feature      | Abstraction                      | Encapsulation                       |
| ------------ | -------------------------------- | ----------------------------------- |
| Focus        | Hides **implementation details** | Hides **data**                      |
| Achieved via | Abstract classes, interfaces     | Access specifiers (`private`, etc.) |
| Goal         | Show only necessary features     | Protect internal object state       |

---
## **Inheritance**

**Inheritance** allows a class (**derived class**) to **inherit** properties and behaviors (data members and member functions) from another class (**base class**).

### Purpose:

* **Code Reusability** – reuse existing code.
* **Extend Functionality** – add new features without modifying base class.
* **Achieve Polymorphism** – especially in C++ using virtual functions.

---

## Syntax:

```cpp
class Base {
    // members
};

class Derived : access_modifier Base {
    // additional members
};
```

Where `access_modifier` can be `public`, `protected`, or `private`.

---

## Types of Inheritance in C++

1. **Single Inheritance**
2. **Multilevel Inheritance**
3. **Multiple Inheritance**
4. **Hierarchical Inheritance**
5. **Hybrid Inheritance**

---

## 1. **Single Inheritance**

One derived class inherits from one base class.

### Example:

```cpp
#include <iostream>
using namespace std;

class Animal {
public:
    void eat() {
        cout << "Eating..." << endl;
    }
};

class Dog : public Animal {
public:
    void bark() {
        cout << "Barking..." << endl;
    }
};

int main() {
    Dog d;
    d.eat();   // Inherited from Animal
    d.bark();  // Defined in Dog
    return 0;
}
```

---

## 2. **Multilevel Inheritance**

A class is derived from a class which is also derived from another class.

```cpp
class Animal {
public:
    void eat() {
        cout << "Eating..." << endl;
    }
};

class Dog : public Animal {
public:
    void bark() {
        cout << "Barking..." << endl;
    }
};

class Puppy : public Dog {
public:
    void weep() {
        cout << "Weeping..." << endl;
    }
};
```

---

## 3. **Multiple Inheritance**

A class inherits from **more than one base class**.

```cpp
class A {
public:
    void displayA() {
        cout << "Class A" << endl;
    }
};

class B {
public:
    void displayB() {
        cout << "Class B" << endl;
    }
};

class C : public A, public B {
public:
    void displayC() {
        cout << "Class C" << endl;
    }
};
```

> *Note:* Be cautious with ambiguity (like two base classes having same function name). Use **scope resolution** or **virtual inheritance** to resolve it.

---

## 4. **Hierarchical Inheritance**

Multiple classes inherit from a single base class.

```cpp
class Animal {
public:
    void eat() {
        cout << "Eating..." << endl;
    }
};

class Dog : public Animal {
public:
    void bark() {
        cout << "Barking..." << endl;
    }
};

class Cat : public Animal {
public:
    void meow() {
        cout << "Meowing..." << endl;
    }
};
```

---

## 5. **Hybrid Inheritance**

Combination of two or more types of inheritance (can lead to **diamond problem**, solved using virtual base classes).

---

## Access Modifiers in Inheritance

| Base Class Access | `public` Inheritance | `protected` Inheritance | `private` Inheritance |
| ----------------- | -------------------- | ----------------------- | --------------------- |
| `public`          | public in derived    | protected in derived    | private in derived    |
| `protected`       | protected in derived | protected in derived    | private in derived    |
| `private`         | Not accessible       | Not accessible          | Not accessible        |

---

## Virtual Functions and Polymorphism (Advanced)

Used with inheritance for **runtime polymorphism**.

```cpp
class Animal {
public:
    virtual void sound() {
        cout << "Animal sound" << endl;
    }
};

class Dog : public Animal {
public:
    void sound() override {
        cout << "Bark" << endl;
    }
};

void makeSound(Animal* a) {
    a->sound();  // Calls derived class function if virtual
}
```

---

## Summary

* **Inheritance** lets a class reuse features of another class.
* It supports **code reuse**, **extensibility**, and **polymorphism**.
* **Access specifiers** and **types of inheritance** determine how members are inherited.
* Use **virtual functions** for polymorphism in inheritance hierarchies.

---

### Inheritance Ambiguity 

**Ambiguity in inheritance** occurs when the **same member (function or variable)** is inherited into a derived class from **multiple paths**, and the compiler cannot determine which one to choose.

>Syntax: object.class_name::method_name();

---

## When Does Ambiguity Occur?

It typically arises in **Multiple Inheritance** or **Hybrid Inheritance**, especially when **two base classes inherit from a common base**, and the derived class inherits from both.

This is also known as the **Diamond Problem**.

---

## Example: Ambiguity Problem (Diamond Shape)

```cpp
#include <iostream>
using namespace std;

class A {
public:
    void display() {
        cout << "Class A display" << endl;
    }
};

class B : public A { };

class C : public A { };

class D : public B, public C { };

int main() {
    D obj;
    // obj.display();  Ambiguous
    obj.B::display();  // Resolved using scope
    obj.C::display();  // Resolved using scope
    return 0;
}
```

---

### Problem:

```cpp
obj.display();  //  Error: 'display' is ambiguous
```

Why?
`D` inherits `display()` from both `B` and `C`, and both get it from `A`. So `D` has **two copies** of `A::display()` — leading to **ambiguity**.

---

## Solution: Use `virtual` inheritance

```cpp
#include <iostream>
using namespace std;

class A {
public:
    void display() {
        cout << "Class A display" << endl;
    }
};

// Virtual inheritance
class B : virtual public A { };

class C : virtual public A { };

class D : public B, public C { };

int main() {
    D obj;
    obj.display();  //  No ambiguity
    return 0;
}
```
#### Note: If we want to call Class C's display() without using scope resolution (obj.C::display()), but we're inside main() and using obj of type D, then we cannot do it directly unless we:

* Option 1: Upcast obj to a pointer or reference of type C
  This avoids scope resolution and uses polymorphism-style behavior (even though the methods aren’t virtual):
```cpp
int main() {
    D obj;
    C* ptr = &obj;  // Upcasting D* to C*
    ptr->display(); // Calls C::display()
    return 0;
}
```
* Option 2: Using reference instead of pointer (also works)
```cpp
int main() {
    D obj;
    C& ref = obj;  // Upcast to reference
    ref.display(); // Calls C::display()
    return 0;
}
```
---

### Why virtual inheritance?

* Virtual inheritance ensures **only one copy** of the base class `A` is shared between `B` and `C`.
* Prevents duplication of members and ambiguity.

---

## Summary

| Issue                         | Solution                         |
| ----------------------------- | -------------------------------- |
| Multiple copies of base class | Use `virtual` inheritance        |
| Ambiguous function calls      | Use scope resolution `B::func()` |
| Diamond problem               | Solve using `virtual` keyword    |

---


## **Polymorphism**

**Polymorphism** means **"many forms."** It allows objects of **different classes** to be treated **as objects of a common base class**, especially when using **inheritance**.
Real life Example: A man at the same time is a father, a husband, and an employee.
It enables:

* **Same interface, different behavior**
* **Code flexibility and reusability**

---

## Types of Polymorphism in C++:

| Type                          | Description                                 | Achieved Using                             |
| ----------------------------- | ------------------------------------------- | ------------------------------------------ |
| **Compile-Time Polymorphism** | Resolved at compile time                    | Function Overloading, Operator Overloading |
| **Run-Time Polymorphism**     | Resolved at runtime using virtual functions | Virtual Functions + Inheritance            |

---

## 1. **Compile-Time Polymorphism (Static Polymorphism)**

### a) Function Overloading
Multiple functions with the same name but different parameters.
```cpp
#include <iostream>
using namespace std;

class Print {
public:
    void show(int i) {
        cout << "Integer: " << i << endl;
    }

    void show(string s) {
        cout << "String: " << s << endl;
    }
};

int main() {
    Print p;
    p.show(10);
    p.show("Hello");
    return 0;
}
```

---

### b) Operator Overloading
Operator overloading means giving special meaning to an operator (like +, -, *, etc.) when used with user-defined types (like classes)

```cpp
#include <iostream>
using namespace std;

class Point {
public:
    int x, y;

    // Constructor
    Point(int a = 0, int b = 0) {
        x = a;
        y = b;
    }

    // Overload '+' operator
    Point operator + (const Point& p) {
        Point temp;
        temp.x = x + p.x;
        temp.y = y + p.y;
        return temp;
    }

    // Display
    void display() {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};

int main() {
    Point p1(3, 4);
    Point p2(1, 2);

    Point p3 = p1 + p2; // Using overloaded '+' operator

    p3.display(); // Output: (4, 6)
    return 0;
}
```
Output
```
(4, 6)
```
OR

> *Program for Insertion (<<) Operator Overloading*

> *<< = Insertion Operator: Used with cout to output data to the console.*
> *>> = Extraction Operator: Used with cin to input data from the user.*

Example:
```cpp
#include <iostream>
using namespace std;

class Student {
    int id;
    string name;

public:
    friend istream& operator>>(istream& in, Student& s) {
        in >> s.id >> s.name;  // input from user
        return in;
    }

    friend ostream& operator<<(ostream& out, const Student& s) {
        out << "ID: " << s.id << ", Name: " << s.name;  // output to console
        return out;
    }
};

int main() {
    Student s;
    cin >> s;     // calls overloaded >>
    cout << s;    // calls overloaded <<
    return 0;
}
````

---

### c) Constructor Overloading
It allows multiple constructors in the same class with different parameter lists. The compiler determines which constructor to call at compile time based on the arguments provided.

```cpp

#include <iostream>
using namespace std;

class Box {
public:
    int length, breadth;

    // Default constructor
    Box() {
        length = 0;
        breadth = 0;
    }

    // Parameterized constructor
    Box(int l, int b) {
        length = l;
        breadth = b;
    }

    void show() {
        cout << "Length: " << length << ", Breadth: " << breadth << endl;
    }
};

int main() {
    Box b1;          // Calls default constructor
    Box b2(10, 5);   // Calls parameterized constructor

    b1.show();
    b2.show();

    return 0;
}
```
Output
```
Length: 0, Breadth: 0
Length: 10, Breadth: 5
```


## 2. **Run-Time Polymorphism (Dynamic polymorphism or Late Binding)**
### Function Overriding or Method Overriding
Parent & Child both contain the same function with different implementation. The parent class function is said to be overridden.
### Using **Virtual Functions** and **Inheritance**

```cpp
#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() {
        cout << "Animal makes a sound" << endl;
    }
};

class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog barks" << endl;
    }
};

class Cat : public Animal {
public:
    void sound() override {
        cout << "Cat meows" << endl;
    }
};


int main() {
    Animal* animal;  // base class pointer

    Dog d;
    Cat c;

    animal = &d;
    animal->speak();  // Output: Dog barks (runtime decision)

    animal = &c;
    animal->speak();  // Output: Cat meows (runtime decision)


 //OR

// Base class pointer pointing to derived class objects dynamically
    Animal* animal1 = new Dog();
    Animal* animal2 = new Cat();

    animal1->sound();  // Outputs: Dog barks (run-time decision)
    animal2->sound();  // Outputs: Cat meows (run-time decision)

    // Clean up dynamically allocated memory
    delete animal1;
    delete animal2;


    return 0;
}
```
Output
```
Dog barks
Cat meows
```

---

## Why Use Run-Time Polymorphism?

* It allows **writing generic code**.
* You can have **a single interface (base class)**, and different behaviors based on object type.

---

## Real-Life Example of Polymorphism

### Scenario: **Payment System**

All payments share the same interface (`processPayment()`), but behave differently for each payment type.

### Code:

```cpp
#include <iostream>
using namespace std;

class Payment {
public:
    virtual void processPayment() {
        cout << "Processing generic payment..." << endl;
    }
};

class CreditCard : public Payment {
public:
    void processPayment() override {
        cout << "Processing credit card payment..." << endl;
    }
};

class PayPal : public Payment {
public:
    void processPayment() override {
        cout << "Processing PayPal payment..." << endl;
    }
};

class UPI : public Payment {
public:
    void processPayment() override {
        cout << "Processing UPI payment..." << endl;
    }
};

void makePayment(Payment* p) {
    p->processPayment();
}

int main() {
    CreditCard cc;
    PayPal pp;
    UPI upi;

    makePayment(&cc);   // Output: Processing credit card payment...
    makePayment(&pp);   // Output: Processing PayPal payment...
    makePayment(&upi);  // Output: Processing UPI payment...

    return 0;
}
```

### Real-world takeaway:

* **Polymorphism = One Interface, Many Implementations.**
* It makes your code **scalable**, **flexible**, and **easy to extend**.

---
## **1. What is the `virtual` keyword?**

In C++, the `virtual` keyword is used in a **base class** to tell the compiler:

> “If this function is called through a base class pointer or reference, determine which function to execute at **runtime** (dynamic dispatch), not at compile-time.”

It enables **runtime polymorphism** by creating a **virtual table (vtable)** mechanism.

---

## **2. Syntax**

```cpp
class Base {
public:
    virtual void show() {
        cout << "Base class show()" << endl;
    }
};
```
---
## **Virtual Function**
A **virtual function** in C++ is a member function in a base class that you expect to be **overridden** in derived classes.
It enables **runtime polymorphism** — meaning, the call to the function is resolved **at runtime**, not at compile-time.

It’s declared using the `virtual` keyword in the base class.

---

## **1. Why to use Virtual Function**
* To achieve dynamic polymorphism. Which is the ability to call Derived class function using Base class pointer or reference.

---

## **3. Rules for `virtual` Keyword**

1. Can only be used with **member functions**.
2. Can’t be used with:

   * Static functions
   * Constructors
   * Friend functions
3. If a function is declared virtual in a base class, it **remains virtual** in all derived classes.
4. If not overridden in derived class, the **base version** is called.
5. If used with destructors, ensures correct destructor call sequence.

---

### **Why do we need Virtual Functions?**

Without virtual functions, C++ uses **static binding**:

```cpp
class Base {
public:
    void show() { cout << "Base class" << endl; }
};

class Derived : public Base {
public:
    void show() { cout << "Derived class" << endl; }
};

int main() {
    Base* b = new Derived();
    b->show(); // Output: Base class (not what we want)
}
```

Even though `b` points to a `Derived` object, it calls `Base::show()` because **binding happens at compile time**.

With virtual functions:

```cpp
class Base {
public:
    virtual void show() { cout << "Base class" << endl; }
};

class Derived : public Base {
public:
    void show() override { cout << "Derived class" << endl; }
};

int main() {
    Base* b = new Derived();
    b->show(); // Output: Derived class ✅
}
```

Now it’s **dynamic binding** — resolved at runtime using the **V-Table mechanism**.

---
### **Example: Normal Virtual Function**

```cpp
#include <iostream>
using namespace std;

class Base {
public:
    virtual void display() {
        cout << "Display from Base" << endl;
    }
};

class Derived : public Base {
public:
    void display() override {
        cout << "Display from Derived" << endl;
    }
};

int main() {
    Base* ptr = new Derived();
    ptr->display(); // Runtime: Derived
    delete ptr;
}
```

---

### **b. Pure Virtual Functions (Abstract Classes)**

A **pure virtual function** is a virtual function that has **no definition in the base class** and **must** be overridden in derived classes.

### Syntax:

```cpp
class Base {
public:
    virtual void show() = 0;  // Pure virtual function
};
```

### Abstract Class:

* A class with **at least one pure virtual function**.
* You **cannot create an object** of an abstract class.

Example

```cpp
class Shape {
public:
    virtual void draw() = 0; // Pure virtual function
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing Circle" << endl;
    }
};

int main() {
    Shape* s = new Circle();
    s->draw();
    delete s;
}
```

If a class has **at least one** pure virtual function, it becomes **abstract** and cannot be instantiated.

---

### **c. Virtual Destructor**
* If we delete child class object through a pointer of parent class then it is undefined behaviour,
    if parent class doesn't have virtual destructor.
* If we fail to declare destructor as virtual in parent class then we endup having memory leak.

* "If a base class has virtual functions, **always** make its destructor virtual to ensure proper cleanup."

```cpp
class Base {
public:
    virtual ~Base() { cout << "Base destructor\n"; }
};

class Derived : public Base {
public:
    ~Derived() { cout << "Derived destructor\n"; }
};

int main() {
    Base* ptr = new Derived();
    delete ptr; 
    // Output:
    // Derived destructor
    // Base destructor
}
```

Without a virtual destructor, deleting through a base pointer will cause **undefined behavior**.

---
---

## **7. Static vs Dynamic Binding**

* **Without `virtual`** → static binding (decided at compile-time).
* **With `virtual`** → dynamic binding (decided at runtime using vtable).

---

## What is `vtable`?

A **`vtable` (virtual table)** is a **compiler-generated** lookup table of function pointers. There is **one vtable per class** (if it has virtual functions).

The vtable holds addresses of the **virtual functions** that are available for a class.

**VTable (Virtual Table)** एक **compiler द्वारा बनाया गया lookup table** होता है जिसमें **function pointers** (फ़ंक्शनों के पते) होते हैं।

* यदि किसी class में **virtual functions** होते हैं, तो उस class के लिए **एक vtable** बनाई जाती है।
* यह vtable उस class में उपलब्ध **virtual functions के addresses** को स्टोर करती है।

### सरल शब्दों में:

> VTable एक ऐसी टेबल होती है जो यह बताती है कि किसी class के virtual functions कहाँ (memory में) रखे गए हैं, ताकि runtime पर सही function को call किया जा सके।



### Example:

Suppose we have:

```cpp
class Base {
public:
    virtual void show() { std::cout << "Base\n"; }
    virtual void print() { std::cout << "Print Base\n"; }
};

class Derived : public Base {
public:
    void show() override { std::cout << "Derived\n"; }
};
```

Now:

* `Base`'s vtable:

  ```
  &Base::show
  &Base::print
  ```

* `Derived`'s vtable:

  ```
  &Derived::show   // overrides Base::show
  &Base::print     // inherited
  ```

So each class that has virtual functions gets its own **vtable**, with pointers to the appropriate function implementations.

---

## What is `vptr`?

Each **object of a class with virtual functions** contains a hidden pointer called a **`vptr`** (virtual pointer), which **points to the vtable of its class**.

* Set **automatically by the compiler** during object construction.
* Ensures that the correct virtual functions are called at runtime.


### **vptr (Virtual Pointer) क्या होता है?**

> हर object जो किसी ऐसी class से बना हो जिसमें **virtual functions** हों, उसमें एक **छुपा हुआ pointer** होता है जिसे **vptr (virtual pointer)** कहते हैं।

* यह **vptr उस class की vtable को point करता है**।
* **Compiler इस vptr को object के construction के दौरान अपने आप set कर देता है।**
* इसका काम यह **सुनिश्चित करना होता है कि runtime पर सही virtual function call हो।**


### सरल शब्दों में:

> जब हम base class का pointer या reference इस्तेमाल करते हैं, तो **vptr यह तय करता है कि actually कौन-सा function run होगा** — चाहे वो derived class में override किया गया हो।

OR

### VTable (Virtual Table)

* Created **once per class** (at compile time).
* Exists for classes with at least one virtual function (or derived from such a class).
* It is a **static lookup table** containing **function pointers** to virtual functions.
* If a function is overridden in a derived class → entry points to derived version.
* If not overridden → entry points to base version.

---

### vptr (Virtual Pointer)

* A **hidden pointer** added by the compiler inside every object of such a class.
* **Per object**, unlike VTable which is per class.
* Initialized in the **constructor**, pointing the object’s vptr to its class’s VTable.
* During a virtual function call: object → vptr → VTable → function pointer → actual function.

---

 **In short:**

* **VTable** = per-class table of virtual function addresses.
* **vptr** = per-object hidden pointer to the correct VTable.

---



### Memory layout (simplified):

```cpp
class Base {
public:
    virtual void show();
};

Base obj;
```

Internally:

```
+--------+
|  vptr  |  ---> points to Base's vtable
+--------+
|  data  |
+--------+
```

Now, when a virtual function is called, like `obj.show()`, the compiler translates it roughly to:

```cpp
obj.vptr[0](/* obj as this */);
```

So it's dynamically resolved at runtime using the vptr.

---

## How polymorphism works with `vtable` and `vptr`

Example:

```cpp
Base* ptr = new Derived();
ptr->show();  // What happens?
```

Internally:

1. `Derived` object is created.
2. Its constructor sets the `vptr` to point to `Derived`'s vtable.
3. `ptr->show()` is called.
4. The compiler looks up `vptr->vtable[0]` and calls the function pointer.
5. That function pointer points to `Derived::show()` → it is called.

Thus, **runtime polymorphism is achieved**.

---

## Some Key Points

| Concept                  | Description                                                                          |
| ------------------------ | ------------------------------------------------------------------------------------ |
| **vtable**               | Table of function pointers per class with virtual functions                          |
| **vptr**                 | Pointer inside object, pointing to class’s vtable                                    |
| **Overriding**           | Derived class replaces base class function pointer in its vtable                     |
| **Virtual Destructor**   | Ensures base class vtable cleanup if deleted via base pointer                        |
| **Multiple Inheritance** | May have multiple `vptr`s per object if multiple base classes with virtual functions |
| **No virtual functions** | No vtable or vptr is generated by compiler                                           |
| **Size increase**        | Object size increases by size of pointer (usually 4/8 bytes) due to `vptr`           |

---

## Realistic Memory Example

```cpp
class A {
public:
    int x;
    virtual void foo() {}
};

class B : public A {
public:
    int y;
    void foo() override {}
};
```

Now:

```cpp
B b;
```

Memory layout (simplified):

```
+-------+------------+
| vptr  | points to B’s vtable
+-------+
| x     |
+-------+
| y     |
+-------+
```

---

### 4. **How Runtime Polymorphism Works**

1. Compiler sees virtual function → creates VTable.
2. Each object stores a **vptr**, set during construction.
3. When a virtual function is called:

   * Program follows: **object → vptr → VTable → function pointer → actual function**.
4. Hence, correct function runs depending on the **object type**, not pointer type.

---

### 5. **Key Points / Interview Traps**

* **VTable → per class** (static array).
* **vptr → per object** (hidden pointer).
* Virtual functions **cannot be static** (they belong to objects, not class).
* Size of a class increases when you add a virtual function (due to vptr).
* Example: `Employee` base class, `Engineer` derived class →

  * If `raiseSalary` is virtual & overridden → Engineer object’s vptr ensures derived `raiseSalary` is called.
  * Non-overridden functions (like `promote`) still point to base class implementation.

---

### **Friend Function in C++**

A **friend function** in C++ is a special function that is **not a member of a class**, but has **access to its private and protected members**.
>Friend function in C++ एक ऐसा function होता है जो किसी class का हिस्सा नहीं होता, लेकिन फिर भी उस class के private और protected data को access कर सकता है।

---

## Why Use Friend Functions?

Sometimes, you need **external functions** to access **private data** of a class, especially when:

* You're performing operations involving **multiple classes**.
* You want to provide **operator overloading** (like `+`, `<<`, etc.).
* You want to **separate logic** from class definition.

---

## Syntax

Inside the class:

```cpp
friend return_type function_name(arguments);
```

---

## Simple Example

```cpp
#include <iostream>
using namespace std;

class Box {
private:
    int length;

public:
    Box(int l) : length(l) {}

    // Friend function declaration
    friend void showLength(Box b);
};

// Friend function definition (outside class)
void showLength(Box b) {
    cout << "Length is: " << b.length << endl;  // Accessing private member
}

int main() {
    Box b(10);
    showLength(b);  // Output: Length is: 10
    return 0;
}
```

---

## Key Points

| Feature                                    | Description |
| ------------------------------------------ | ----------- |
| Access to private/protected members        | Yes       |
| Member of the class?                       | No        |
| Uses `.` instead of `->` or direct access? | Yes       |
| Defined outside the class                  | Yes       |

---

## Example: Friend Function for Two Classes

```cpp
#include <iostream>
using namespace std;

class B;  // Forward declaration

class A {
private:
    int a;
/* public:
    A(int x) {
        a = x;
    } */
//OR

public:

    A(int x) : a(x) {}
    friend void sum(A, B);
};

class B {
private:
    int b;

public:
    B(int y) : b(y) {}
    friend void sum(A, B);
};

// Friend function defined outside
void sum(A obj1, B obj2) {
    cout << "Sum is: " << obj1.a + obj2.b << endl;
}

int main() {
    A a1(5);
    B b1(7);
    sum(a1, b1);  // Output: Sum is: 12
    return 0;
}
```

---

## Friend Function vs Member Function

| Feature              | Member Function    | Friend Function          |
| -------------------- | ------------------ | ------------------------ |
| Inside class         | Yes                | No                       |
| Access to private    | Yes                | Yes                      |
| Needs object to call | Yes (`obj.func()`) | Not always (`func(obj)`) |

---

## Summary

* A **friend function** is not a class member but can access private/protected data.
* Declared with the `friend` keyword **inside the class**.
* Useful for:

  * Operator overloading
  * External operations involving private data
  * Working with multiple classes

---

## **Friend Class**

A **friend class** can access **all private and protected members** of the class in which it is declared as a friend.

### Syntax:

```cpp
class A {
    friend class B; // B is a friend of A
};
```

### Example:

```cpp
#include <iostream>
using namespace std;

class A {
private:
    int secret = 42;
public:
    friend class B; // Friend class declaration
};

class B {
public:
    void showSecret(A obj) {
        cout << "Accessing A's private data: " << obj.secret << endl;
    }
};

int main() {
    A a;
    B b;
    b.showSecret(a);
    return 0;
}
```

---

## Key Points:

| Feature               | Friend Function                     | Friend Class                                     |
| --------------------- | ----------------------------------- | ------------------------------------------------ |
| Access to             | Specific function gets access       | Entire class gets access                         |
| Membership            | Not a member of the class           | Not a subclass                                   |
| Use Case              | When only one function needs access | When many functions in another class need access |
| Breaks Encapsulation? | Yes, partially (use with care)      | Yes, more broadly                                |

---
## Static
static keyword in C++ changes the lifetime or visibility of a variable or function. the `static` keyword has **multiple uses**, depending on **where** and **how** it's used. 

---
### 1. **Static Local Variables (Function Scope)**

#### Concept:

A local variable declared `static` inside a function:

* **Is initialized only once** (at first function call).
* **Persists until the program ends**.
* Retains its value between function calls.

#### Behind the Scenes:

* Stored in the **Data Segment** (not on the stack like regular locals).
* Lifetime is **entire duration of the program**, but scope is **local** to the function.

#### Example:

```cpp
void func() {
    static int counter = 0; // Initialized only once
    counter++;
    std::cout << counter << std::endl;
}
```

Calling `func()` three times outputs: `1`, `2`, `3`.

---

### 2. **Static Data Members (Class-Level Variables)**

#### Concept:

* Shared across **all instances** of a class.
* Not tied to any one object.
* Needs to be **defined outside** the class.

#### Use Case:

Great for counting objects, caching values, or shared configuration.

#### Example:

```cpp
class MyClass {
public:
    static int count;
    MyClass() { count++; }
};

int MyClass::count = 0;

int main() {
    MyClass a, b;
    std::cout << MyClass::count << std::endl; // Output: 2
}
```

#### Under the Hood:

* Stored in **Data Segment**.
* Exists **even if no object is created**.

---

### 3. **Static Member Functions**

#### Concept:

* Belongs to the **class**, not any instance.
* Can only access **static data members** (no `this` pointer).
* Can be called via `ClassName::function()`.

#### Example:

```cpp
class Utility {
public:
    static void printHello() {
        std::cout << "Hello\n";
    }
};

int main() {
    Utility::printHello();  // No object needed
}
```

#### Why Use?

* Utility functions inside classes.
* Factory methods, settings, etc.

---

### 4. **Static Global Variables / Functions (File Scope)**

#### Concept:

* Restricts visibility to **only that translation unit** (i.e., source file).
* Prevents external linkage.

####  Example:

```cpp
// file1.cpp
static int x = 100;   // Can't be accessed from other files

static void greet() {
    std::cout << "Hi\n";
}
```

> It's equivalent to `internal linkage`. Modern C++ prefers `anonymous namespaces` over this.

---

## Memory Layout Summary

| Type                 | Scope      | Lifetime       | Stored In    |
| -------------------- | ---------- | -------------- | ------------ |
| `static` in function | Local      | Entire program | Data Segment |
| `static` data member | Class-wide | Entire program | Data Segment |
| `static` function    | Class/File | Entire program | Code Segment |
| `static` global var  | File-wide  | Entire program | Data Segment |

---

## What is a Template in C++?

A **template** is a way to write **generic and reusable code** that works with **any data type**.

Instead of writing the same function or class for `int`, `float`, `double`, etc., you write one **template** and let the compiler generate the appropriate versions.

---

## Types of Templates

1. **Function Templates**
2. **Class Templates**

---

## 1. **Function Template Example**

```cpp
#include <iostream>
using namespace std;

// Template for a function that returns the maximum of two values
template <typename T>
T getMax(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    cout << getMax(5, 10) << endl;       // Works with int
    cout << getMax(3.5, 2.1) << endl;    // Works with double
    cout << getMax('a', 'z') << endl;    // Works with char

    return 0;
}
```

---

## 2. **Class Template Example**

```cpp
#include <iostream>
using namespace std;

// Template for a simple class holding a value
template <typename T>
class Box {
public:
    T value;

    Box(T val) {
        value = val;
    }

    void display() {
        cout << "Value: " << value << endl;
    }
};

int main() {
    Box<int> intBox(123);
    Box<string> strBox("Hello");

    intBox.display();  // Output: Value: 123
    strBox.display();  // Output: Value: Hello

    return 0;
}
```

---

## Summary:

| Feature                | Description                                                             |
| ---------------------- | ----------------------------------------------------------------------- |
| Purpose                | Write generic, reusable code                                            |
| `template<typename T>` | `T` is a placeholder for any data type                                  |
| Compiler Role          | Creates actual functions/classes during compilation based on types used |

