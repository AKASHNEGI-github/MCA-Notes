# QUEUE

---

### Queue using Array
```c++
// QUEUE USING ARRAYS

#include<bits/stdc++.h>
using namespace std;

class Queue
{
    public:
        int *arr;
        int size;
        int front;
        int rear;

    Queue(int size)
    {
        arr = new int[size];
        this->size = size;
        front = -1;
        rear = -1;
    }

    bool Empty()
    {
        if(front == -1 || front > rear)
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
        if(rear == size-1)
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
        if(rear == size-1)
        {
            cout << "Queue is Full" << endl;
        }
        else
        {
            rear++;
            arr[rear] = data;
            if(front == -1)
            {
                front++;
            }
        }
    }

    void Pop()
    {
        if(front == -1 || front > rear)
        {
            cout << "Queue is Empty" << endl;
        }
        else
        {
            front++;
        }
    }

    int Peek()
    {
        if(front == -1 || front > rear)
        {
            return -1;
        }
        else
        {
            return arr[front];
        }
    }

};

int main()
{
    Queue q(5);

    cout << q.Empty() << endl; // true=1
    cout << q.Peek() << endl;  // -1
    cout << q.Full() << endl;  // false=0
    q.Push(1);
    q.Push(2);
    q.Push(3);
    cout << q.Empty() << endl; // false=0
    cout << q.Peek() << endl;  // 1
    cout << q.Full() << endl;  // false=0
    q.Push(4);
    q.Push(5);
    cout << q.Empty() << endl; // false=0
    cout << q.Peek() << endl;  // 1
    cout << q.Full() << endl;  // true=1
    q.Push(6); // Queue is Full
    q.Pop();
    q.Pop();
    q.Pop();
    cout << q.Peek() << endl; // 4
    q.Pop();
    q.Pop();
    cout << q.Empty() << endl; // true=1
    cout << q.Peek() << endl;  // -1
    cout << q.Full() << endl;  // false=0
    q.Pop(); // Queue is Empty

    return 0;
}
```

### Queue using Linked List
```c++

```






---
