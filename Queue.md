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
// QUEUE USING LINKED LIST

#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int data;
        Node* next;

        Node(int data)
        {
            this->data = data;
            this->next = NULL;
        }
};

class Queue
{
    public:
        Node *head;
        Node *tail;

        Queue()
        {
            head = NULL;
            tail = NULL;
        }

        bool Empty()
        {
            if(head == NULL)
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
            Node *new_node = new Node(data);
            if(Empty())
            {
                head = new_node;
                tail = new_node;
            }
            else
            {
                tail->next = new_node;
                tail = new_node;
            }
        }

        void Pop()
        {
            if(Empty())
            {
                cout << "Queue is Empty" << endl;
            }
            else
            {
                Node *temp = head;
                head = head->next;
                delete temp;
            }
        }

        int Front()
        {
            if(Empty())
            {
                return -1;
            }
            else
            {
                return head->data;
            }
        }
};

int main()
{
    Queue q;
    q.Push(1);
    q.Push(2);
    q.Push(3);
    while(!q.Empty())
    {
        cout << q.Front() << " "; // 1 2 3 
        q.Pop();
    }
    return 0;
}
```

### Circular Queue
```c++
// CIRCULAR QUEUE

#include<bits/stdc++.h>
using namespace std;

class CircularQueue
{
    public:
        int *arr;
        int front;
        int rear;
        int capacity;
        int currentSize;

        CircularQueue(int size)
        {
            arr = new int[size];
            this->capacity = size;
            this->currentSize = 0;
            this->front = 0;
            this->rear = -1;
        }

        bool Empty()
        {
            if(currentSize == 0)
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
            if(currentSize == capacity)
            {
                cout << "Circular Queue is Full" << endl;
            }
            else
            {
                rear = (rear+1)%capacity;
                arr[rear] = data;
                currentSize++;
            }
        }

        void Pop()
        {
            if(Empty())
            {
                cout << "Circular Queue is Empty" << endl;
            }
            else
            {
                front = (front+1)%capacity;
                currentSize--;
            }
        }

        int Front()
        {
            if(Empty())
            {
                return -1;
            }
            else
            {
                return arr[front];
            }
        }

        void PrintQueue()
        {
            for(int i=0 ; i<capacity ; i++)
            {
                cout << arr[i] << " ";
            }
        }
};

int main()
{
    CircularQueue cq(3);
    cq.Push(1);
    cq.Push(2);
    cq.Push(3);
    //cq.Push(4); // Circular Queue is Full
    cq.Pop();
    cq.Push(4);
    cq.PrintQueue(); // 4 2 3 
    while(!cq.Empty())
    {
        cout << cq.Front() << " "; // 2 3 4
        cq.Pop();
    }
    return 0;
}
```

### DeQueue(Doubly Ended Queue)
```c++
// DEQUEUE


```

### Questions

-
```c++

```

-
```c++

```

-
```c++

```

-
```c++

```

-
```c++

```







---
