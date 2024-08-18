### STACK USING ARRAYS
```c++
// STACK USING ARRAYS

#include<bits/stdc++.h>
using namespace std;

class Stack
{
    public:
        int *arr;
        int size;
        int top;
    
    Stack(int size)
    {
        arr = new int[size];
        this->size = size;
        top = -1;
    }

    bool Empty()
    {
        if(top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    bool Full()
    {
        if(top == size-1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    void Push(int data)
    {
        if(top == size-1)
        {
            cout << "Stack is Full" << endl;
        }
        else
        {
            top++;
            arr[top] = data;
        }
    }

    void Pop()
    {
        if(top == -1)
        {
            cout << "Stack is Empty" << endl;
        }
        else
        {
            top--;
        }
    }

    int Peek()
    {
        if(top == -1)
        {
            return -1;
        }
        else
        {
            return arr[top];
        }
    }

    int Size()
    {
        return top + 1;
    }
};
```

### STACK USING Linked List
```c++

```

### Questions

