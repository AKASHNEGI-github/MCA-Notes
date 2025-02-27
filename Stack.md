# STACK

---

### Stack using Array
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

### Stack using Linked List
```c++
// STACK USING LINKED LIST

#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int data;
        Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

class Stack
{
    public:
        Node *top;

    Stack()
    {
        top = NULL;
    }

    bool Empty()
    {
        if(top == NULL)
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
        new_node->data = data;
        new_node->next = top;
        top = new_node;
    }

    void Pop()
    {
        if(top == NULL)
        {
            cout << "Stack is Empty" << endl;
        }
        else
        {
            Node *temp = top;
            top = top->next;
            delete temp;
        }
    }

    int Peek()
    {
        if(top == NULL)
        {
            return -1;
        }
        else
        {
            return top->data;
        }
    }
};
```

### Questions

- Remove All Adjacent Duplicates In String
```c++
class Solution {
public:
    string removeDuplicates(string s) 
    {
        stack<char> st;
        for(int i=0 ; i<s.size() ; i++)
        {
            if(!st.empty() && s[i] == st.top())
            {
                st.pop();
            }
            else
            {
                st.push(s[i]);
            }
        }   
        s = "";
        while(!st.empty())
        {
            s = s + st.top();
            st.pop();
        }
        reverse(s.begin() , s.end());
        return s;
    }
};
```

- Clear Digits
```c++
class Solution {
public:
    string clearDigits(string s) 
    {
        stack<char> st;
        for(int i=0 ; i<s.size() ; i++)
        {
            if(s[i] >= 'a' && s[i] <= 'z')
            {
                st.push(s[i]);
            }
            else
            {
                st.pop();
            }
        }   
        s = "";
        while(!st.empty())
        {
            s = s + st.top();
            st.pop();
        } 
        reverse(s.begin() , s.end());
        return s;
    }
};
```

- Valid Parentheses
```c++
class Solution {
public:
    bool isValid(string s) 
    {
        stack<int> st;
        for(int i=0 ; i<s.size() ; i++)
        {
            if(s[i] == '(' || s[i] == '{' || s[i] == '[')
            {
                st.push(s[i]);
            }
            else
            {
                if(! st.empty())
                {
                    if(s[i] == ')' && st.top() == '(')
                    {
                        st.pop();
                    }
                    else if(s[i] == '}' && st.top() == '{')
                    {
                        st.pop();
                    }
                    else if(s[i] == ']' && st.top() == '[')
                    {
                        st.pop();
                    }
                    else
                    {
                        return false;
                    }
                }
                else
                {
                    return false;
                }
            }
        }
        if(st.empty())
        {
            return true;
        } 
        else
        {
            return false;
        }
    }
};
```

- Implement two stacks in an array
```c++
class twoStacks 
{
    int *arr;
    int size;
    int top1;
    int top2;
    
    public:

        twoStacks() 
        {
            this->size = 100;
            arr = new int[size];
            top1 = -1;
            top2 = size;
        }

        // Function to push an integer into the stack1.
        void push1(int x) 
        {
            if(top2 - top1 > 1)
            {
                top1++;
                arr[top1] = x;
            }
        }

        // Function to push an integer into the stack2.
        void push2(int x) 
        {
            if(top2 - top1 > 1)
            {
                top2--;
                arr[top2] = x;
            }
        }

        // Function to remove an element from top of the stack1.
        int pop1() 
        {
            if(top1 >= 0)
            {
                int ans = arr[top1];
                top1--;
                return ans;
            }
            else
            {
                return -1;
            }
        }

        // Function to remove an element from top of the stack2.
        int pop2() 
        {
            if(top2 < size)
            {
                int ans = arr[top2];
                top2++;
                return ans;
            }
            else
            {
                return -1;
            }
        }
};
```

- Min Stack
```c++
class MinStack 
{
    vector<pair<int , int>> stack;

    public:
    MinStack() 
    {}
    
    void push(int val) 
    {   
        if(stack.empty())
        {
            stack.push_back({val , val});
        }
        else
        {
            stack.push_back({val , min(stack.back().second,val)});    
        }
    }
    
    void pop() 
    {
        stack.pop_back();
    }
    
    int top() 
    {
        return stack.back().first;
    }
    
    int getMin() 
    {
        return stack.back().second; 
    }
};
```

- Next Greater Element I
```c++
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) \
    {
        stack<int> st;
        unordered_map<int , int> map;
        for(int i=nums2.size()-1 ; i>=0 ; i--)    
        {
            while(!st.empty() && st.top() <= nums2[i])
            {
                st.pop();
            }
            if(st.empty())
            {
                map[nums2[i]] = -1;
            }
            else
            {
                map[nums2[i]] = st.top();
            }
            st.push(nums2[i]);
        }
        vector<int> ans;
        for(int i=0 ; i<nums1.size() ; i++)
        {
            ans.push_back(map[nums1[i]]);
        }
        return ans;
    }
};
```

- Delete Mid of a Stack
```c++
class Solution 
{
    public:
    void deleteMiddleElement(stack<int>& s , int sizeOfStack , int count)
    {
        if(count == sizeOfStack/2)
        {
            s.pop();
            return;
        }
        int num = s.top();
        s.pop();
        count++;
        deleteMiddleElement(s , sizeOfStack , count);
        s.push(num);
    }
    
    void deleteMid(stack<int>& s, int sizeOfStack) 
    {
        int count = 0;
        deleteMiddleElement(s , sizeOfStack , count);
    }
};
```

- Sort a stack
```c++
void sortStackElements(stack<int>& s , int num)
{
    if( (s.empty()) || (!s.empty() && s.top() < num) )
    {
        s.push(num);
        return;
    }
    int n = s.top();
    s.pop();
    sortStackElements(s , num);
    s.push(n);
}

void SortedStack :: sort()
{
    if(s.empty())
    {
        return;
    }
    int num = s.top();
    s.pop();
    sort();
    sortStackElements(s , num);
}
```







---
