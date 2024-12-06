# C++

---


What is Tokens
What is Identifiers
What is Keywords
Difference between Keyword and Identifier
What is Variables and Constants
What is Variables
What is Constants
Scope of C++ Variables
What is Storage Classes
What is Static Variables
What is Data Types and Literals
What is Data Types
What is Literals

C++ Data Type Ranges and Their Macros
C++ Type Modifiers
C++ Data Type Conversion
C++ Typecasting Operators
What is Operators

What is Control Statements

What is Loops


What is Functions

What is Parameter Passing Techniques
Difference between Call by Value and Call by Reference
C++ Default Arguments
C++ Recursion

What is Lambda Expression

What is References
Can references refer to an invalid location in C++?
Difference Between Pointers and References in C++
Passing by pointer Vs Passing by Reference in C++
When do we pass arguments by reference or pointer?
C++ Arrays
C++ Arrays
C++ Multidimensional Arrays
C++ Pointer to an Array
Size of Array parameter
Passing Arrays to Functions in C++
What is Array Decay in C++? How can it be prevented?
C++ Strings
C++ Strings
C++ std::string Class
C++ Array of Strings
C++ String Functions
C++ String Concatenation
Tokenizing a String in C++
C++ Substring
C++ Structures and Unions
C++ Structures, Unions, and Enumerations
C++ Structures
C++ Pointer to Structure
C++ Self-Referential Structures
Difference Between C Structures and C++ Structures
C++ Unions
C++ Bit Fields
C++ Enumeration
C++ typedef
Array of Structures vs Array within a Structure in C/C++
C++ Dynamic Memory Management
C++ Dynamic Memory Management
C++ new and delete Operators
new vs malloc() and free() vs delete in C++
Memory leak in C++
Difference between Static and Dynamic Memory Allocation in C++

### What is C++
C++ is a general-purpose programming language that was developed as an enhancement of the C language to include object-oriented paradigm. It is an imperative and a compiled language. 

### What is a Pionter
A pointer in C++ is a variable that stores the memory address of another variable. Instead of holding a direct value like an integer or a character, it holds the address where that value is stored in memory.

- Address-of Operator (&) : This operator returns the memory address of a variable.
- Dereference Operator (*) : This operator is used to access the value at the memory address stored by the pointer.

**Types of Pointers in C++**

- Null Pointer : A null pointer is a pointer that doesn’t point to any valid memory location. In C++, it is initialized with the keyword nullptr or the constant NULL.
```c++
int* ptr = nullptr;  // ptr does not point to any memory location
```

- Void Pointer : A void pointer is a pointer that can point to a variable of any data type. It’s a generic pointer, but it cannot be dereferenced directly without casting to another pointer type.
```c++
void* ptr;          // Generic pointer
int num = 10;
ptr = &num;         // Valid, ptr now points to an integer

// To access the value, cast it to the appropriate type
cout << "Value: " << *(int*)ptr << endl;
```

- Dangling Pointer : A dangling pointer is a pointer that points to a memory location that has already been freed or deleted. Using a dangling pointer can lead to undefined behavior.
```c++
int* ptr = new int(5);  // Dynamically allocate memory
delete ptr;             // Free the allocated memory
// Now ptr is a dangling pointer since the memory has been released
```

- Wild Pointer : A wild pointer is a pointer that has not been initialized to anything and may contain a garbage value. This can cause the program to crash if dereferenced.
```c++
int* ptr;  // Wild pointer (uninitialized)
```

- Constant Pointer : A constant pointer is one that can point to a specific memory address, and the pointer itself cannot be changed to point to another address. However, the value at the address it points to can still be modified.
```c++
int num = 10;
int* const ptr = &num;  // Pointer is constant, cannot change where it points
*ptr = 20;              // Modifying the value at the pointed location
```

- Pointer to Constant : A pointer to a constant is a pointer that can point to a variable, but the value at the pointed location cannot be modified through the pointer. However, the pointer can still point to other memory locations.
```c++
int num = 10;
const int* ptr = &num;  // The value at the pointed location cannot be modified
// *ptr = 20;           // Error: Cannot modify value through this pointer
ptr = &anotherNum;      // Can change the pointer to point to another variable
```

- Constant Pointer to Constant : A constant pointer to a constant is a combination of the two concepts. It points to a constant value, and the pointer itself cannot be changed to point to another address.
```c++
const int num = 10;
const int* const ptr = &num;  // Cannot change the pointer or the value
// *ptr = 20;                // Error: Cannot modify value
// ptr = &anotherNum;         // Error: Cannot modify the pointer itself
```

- Function Pointer : A function pointer is used to store the address of a function. It can be used to call a function indirectly, which is useful in cases like callbacks.
```c++
void display() {
    cout << "Hello, World!" << endl;
}

int main() {
    void (*funcPtr)() = display;  // Pointer to the function 'display'
    funcPtr();                    // Calling the function through the pointer
    return 0;
}
```

- Pointer to Pointer : A pointer to pointer is a pointer that holds the address of another pointer.
```c++
int num = 10;
int* ptr = &num;   // Pointer to int
int** ptr2 = &ptr; // Pointer to pointer

cout << "Value: " << **ptr2 << endl;  // Dereferencing twice to get the value of num
```












---
