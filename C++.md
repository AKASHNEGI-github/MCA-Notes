# C++

---

### What is C++

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



















---
