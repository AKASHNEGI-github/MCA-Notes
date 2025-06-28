# QUEUE
---

| Table Of Content |
| ---------------- |
| Queue using Array |
| Queue using Linked List |
| Implement Stack using Queues |
| Implement Queue using Stacks |
| Design Circular Queue |
| Design Circular Deque |
| Design Front Middle Back Queue |

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

- Implement Stack using Queues
```c++
class MyStack {
public:
    queue<int> q1;
    queue<int> q2;

    MyStack() 
    {}
    
    void push(int x) 
    {
        while(!q1.empty())
        {
            q2.push(q1.front());
            q1.pop();
        }
        q1.push(x);
        while(!q2.empty())
        {
            q1.push(q2.front());
            q2.pop();
        }
    }
    
    int pop() 
    {
        int ans = q1.front();
        q1.pop();
        return ans;
    }
    
    int top() 
    {
        return q1.front();
    }
    
    bool empty() 
    {
        return q1.empty();    
    }
};
```

- Implement Queue using Stacks
```c++
class MyQueue {
public:
    stack<int> s1;
    stack<int> s2;

    MyQueue() 
    {}
    
    void push(int x) 
    {
        while(!s1.empty())
        {
            s2.push(s1.top());
            s1.pop();
        }
        s1.push(x);
        while(!s2.empty())
        {
            s1.push(s2.top());
            s2.pop();
        }
    }
    
    int pop() 
    {
        int ans = s1.top();
        s1.pop();
        return ans;
    }
    
    int peek() 
    {
        return s1.top();    
    }
    
    bool empty() 
    {
        return s1.empty();        
    }
};
```

- Design Circular Queue
```c++
class MyCircularQueue {
public:
    int *arr;
    int front;
    int rear;
    int capacity;
    int currentSize;

    MyCircularQueue(int k) 
    {
        arr = new int[k];
        capacity = k;
        currentSize = 0;
        front = 0;
        rear = -1;
    }
    
    bool enQueue(int value) 
    {
        if(isFull())
        {
            return false;
        }
        rear = (rear+1)%capacity;
        arr[rear] = value;
        currentSize++;
        return true;
    }
    
    bool deQueue() 
    {
        if(isEmpty())
        {
            return false;
        }
        front = (front+1)%capacity;
        currentSize--;
        return true;
    }
    
    int Front() 
    {
        if(isEmpty())
        {
            return -1;
        }
        return arr[front];    
    }
    
    int Rear()
    {
        if(isEmpty())
        {
            return -1;
        }
        return arr[rear]; 
    }
    
    bool isEmpty() 
    {
        if(currentSize == 0)
        {
            return true;
        }
        return false;
    }
    
    bool isFull() 
    {
        if(currentSize == capacity)
        {
            return true;
        }
        return false;
    }
};
```

- Design Circular Deque
```c++
class MyCircularDeque {
public:
    int *arr;
    int front;
    int rear;
    int capacity;
    int currentSize;

    MyCircularDeque(int k) 
    {
        arr = new int[k];
        capacity = k;
        currentSize = 0;
        front = 0;
        rear = k-1;
    }
    
    bool insertFront(int value) 
    {
        if(isFull())
        {
            return false;
        }
        front = (front-1+capacity)%capacity;
        arr[front] = value;
        currentSize++;
        return true;
    }
    
    bool insertLast(int value) 
    {
        if(isFull())
        {
            return false;
        }
        rear = (rear+1)%capacity;
        arr[rear] = value;
        currentSize++;
        return true;
    }
    
    bool deleteFront() 
    {
        if(isEmpty())
        {
            return false;
        }
        front = (front+1)%capacity;
        currentSize--;
        return true;
    }
    
    bool deleteLast() 
    {
        if(isEmpty())
        {
            return false;
        }
        rear = (rear-1+capacity)%capacity;
        currentSize--;
        return true;
    }
    
    int getFront() 
    {
        if(isEmpty())
        {
            return -1;
        }
        return arr[front];
    }
    
    int getRear() 
    {
        if(isEmpty())
        {
            return -1;
        }
        return arr[rear]; 
    }
    
    bool isEmpty() 
    {
        if(currentSize == 0)
        {
            return true;
        }
        return false;
    }
    
    bool isFull() 
    {
        if(currentSize == capacity)
        {
            return true;
        }
        return false;
    }
};
```

- Design Front Middle Back Queue
```c++

```







---
