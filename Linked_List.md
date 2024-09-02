# LINKED LIST

---

### Single Linked List
```c++
// SINGLE LINKED LIST

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

Node* head = NULL;

void Display(Node* &head)
{
    if(head == NULL)
    {
        cout << "No Linked List" << endl;
    }
    else
    {
        cout << "Linked List" << endl;
        Node* ptr = head;
        while(ptr != NULL)
        {
            cout << ptr->data << "  ";
            ptr = ptr->next;
        }
    }
    cout << endl;
}

void InsertAtHead(Node* &head , int data)
{
    Node* new_node = new Node(data);
    new_node->next = head;
    head = new_node;
}

void InsertAtTail(Node* &head , int data)
{
    Node* new_node = new Node(data);
    if(head == NULL)
    {
        head = new_node;
    }
    else
    {
        Node* ptr = head;
        while(ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = new_node;
    }
}

void InsertAtBefore(Node* &head , int data , int num)
{
    Node* ptr = head;
    Node* new_node = new Node(data);
    while(ptr->next->data != num)
    {
        ptr = ptr->next;
    }
    new_node->next = ptr->next;
    ptr->next = new_node;
}

void InsertAtAfter(Node* &head , int data , int num)
{
    Node* ptr = head;
    Node* new_node = new Node(data);
    while(ptr->data != num)
    {
        ptr = ptr->next;
    }
    new_node->next = ptr->next;
    ptr->next = new_node;
}

void DeleteAtHead(Node* &head)
{
    Node* ptr = head;
    head = head->next;
    free(ptr);
}

void DeleteAtTail(Node* &head)
{
    Node* ptr = head;
    Node* preptr = ptr;
    while(ptr->next != NULL)
    {
        preptr = ptr;
        ptr = ptr->next;
    }
    preptr->next = NULL;
    free(ptr);
}

void DeleteAtMiddle(Node* &head , int num)
{
    Node* ptr = head;
    Node* preptr = ptr;
    while(ptr->data != num)
    {
        preptr = ptr;
        ptr = ptr->next;
    }
    preptr->next = ptr->next;
    free(ptr);
}

void Reverse(Node* &head)
{
    Node* current = head;
    Node* next = NULL;
    Node* prev = NULL;
    while(current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
}

void Search(Node* &head , int num)
{
    Node* ptr = head;
    while(ptr->data != num)
    {
        ptr = ptr->next;
    }
    if(ptr->data == num)
    {
        cout << "Data " << num << " present" << endl;
    }
}

int FindLength(Node* &head)
{
    Node* ptr = head;
    int length = 0;
    while(ptr != NULL)
    {
        length++;
        ptr = ptr->next;
    }
    return length;
}

int FindMiddle(Node* &head)
{
    if(head == NULL)
    {
        return 0;
    }
    else
    {
        Node* ptr = head;
        int length = FindLength(head);
        if(length % 2 == 0)
        {
            int count = 1;
            while(count != length/2)
            {
                count++;
                ptr = ptr->next;
            }
            return ptr->data;
        }
        else
        {
            int count = 0;
            while(count != length/2)
            {
                count++;
                ptr = ptr->next;
            }
            return ptr->data;
        }
    }
}

int main()
{
    Display(head);
    cout << "Length : " << FindLength(head) << endl;
    cout << "Middle : " << FindMiddle(head) << endl;
    InsertAtHead(head , 0);
    InsertAtTail(head , 1);
    InsertAtTail(head , 3);
    InsertAtTail(head , 5);
    Display(head);
    InsertAtBefore(head , 2 , 3);
    Display(head);
    InsertAtAfter(head , 4 , 3);
    Display(head);
    Reverse(head);
    Display(head);
    Reverse(head);
    Display(head);
    cout << "Length : " << FindLength(head) << endl;
    cout << "Middle : " << FindMiddle(head) << endl;
    DeleteAtHead(head);
    Display(head);
    DeleteAtTail(head);
    Display(head);
    DeleteAtMiddle(head , 3);
    Display(head);
    cout << "Length : " << FindLength(head) << endl;
    Display(head);
    cout << "Middle : " << FindMiddle(head) << endl;
    Search(head , 4);
    Display(head);

    return 0;
}
```

### Double Linked List
```c++

```

### Questions

- Middle of the Linked List
```c++
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
      if(head == NULL || head->next == NULL)
      {
        return head;
      }
      if(head->next->next == NULL)
      {
        return head->next;
      }
      ListNode* slow = head;
      ListNode* fast = head->next;
      while(fast != NULL)
      {
        fast = fast->next;
        if(fast != NULL)
        {
          fast = fast->next;
        }
        slow = slow->next;
      }
      return slow;
    }
};
```

- Reverse Linked List
```c++
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
      ListNode* curr = head;
      ListNode* next = NULL;
      ListNode* prev = NULL;
      while(curr != NULL)
      {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
      }
      return prev;
    }
};
```

- Convert Binary Number in a Linked List to Integer
```c++
class Solution {
public:
    int getDecimalValue(ListNode* head) {
      int ans = 0;
      vector<int> v;
      ListNode* ptr = head;
      while(ptr != NULL)
      {
        v.push_back(ptr->val);
        ptr = ptr->next;
      }
      int n = 0;
      for(int i=v.size()-1; i>=0; i--)
      {
        ans = ans + ( pow(2 , n) * v[i] );
        n++;
      }
      return ans;
    }
};
```

- Palindrome Linked List
```c++
class Solution {
public:
    bool isPalindrome(ListNode* head) {
      if(head == NULL || head->next == NULL)
      {
        return head;
      }
      ListNode* reverse_head = NULL;
      ListNode* ptr = head;
      while(ptr != NULL)
      {
        ListNode* new_node = new ListNode(ptr->val);
        new_node->next = reverse_head;
        reverse_head = new_node;
        ptr = ptr->next;
      }
      while(head != NULL && reverse_head != NULL)
      {
        if(head->val != reverse_head->val)
        {
          return false;
        }
        head = head->next;
        reverse_head = reverse_head->next;
      }
      return true;
    }
};
```

- Remove Duplicates from Sorted List

```c++
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
      ListNode* ptr = head;
      while(ptr != NULL && ptr->next != NULL)
      {
        if(ptr->val == ptr->next->val)
        {
          ptr->next = ptr->next->next;
        }
        else
        {
          ptr = ptr->next;
        }
      }
      return head;
    }
};
```

- Remove Linked List Elements
```c++
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
      if(head == NULL)
      {
        return head;
      }
      while(head != NULL && head->val == val)
      {
        head = head->next;
      }
      ListNode* ptr = head;
      while(ptr != NULL && ptr->next != NULL)
      {
        if(ptr->next->val == val)
        {
          ptr->next = ptr->next->next;
        }
        else
        {
          ptr = ptr->next;
        }
      }
      return head;
    }
};
```

- Odd Even Linked List
```c++
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
      if(head == NULL || head->next == NULL)
      {
        return head;
      }
      ListNode* odd = head;
      ListNode* even = head->next;
      ListNode* evenstart = even;
      while(odd->next != NULL && even->next != NULL)
      {
        odd->next = even->next;
        odd = odd->next;
        even->next = odd->next;
        even = even->next;
      }
      odd->next = evenstart;
      return head;
    }
};
```

- Insert Greatest Common Divisors in Linked List
```c++
class Solution {
public:
    int gcd(int n1 , int n2)
    {
      if(n2 == 0)
      {
        return n1;
      }
      return gcd(n2 , n1 % n2);
    }
    ListNode* insertGreatestCommonDivisors(ListNode* head) 
    {
      ListNode* ptr = head;
      while(ptr->next != NULL)
      {
        ListNode* temp = new ListNode( gcd(ptr->val , ptr->next->val) );
        temp->next = ptr->next;
        ptr->next = temp;
        ptr = temp->next;
      }
      return head;    
    }
};
```

- Delete Node in a Linked List
```c++
class Solution {
public:
    void deleteNode(ListNode* node) {
      node->val = node->next->val;
      node->next = node->next->next;
    }
};
```

- Delete the Middle Node of a Linked List
```c++
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
      int count = 0;
      ListNode* ptr = head;
      if(head->next == NULL)
      {
        return NULL;
      }
      while(ptr != NULL)
      {
        count++;
        ptr = ptr->next;
      }
      int mid = count/2;
      count = 0;
      ptr = head;
      ListNode* preptr = ptr;
      while(count != mid)
      {
        count++;
        preptr = ptr;
        ptr = ptr->next;
      } 
      preptr->next = ptr->next;
      return head;
    }
};
```

- Swap Nodes in Pairs
```c++
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
      ListNode* ptr = head;
      while(ptr != NULL && ptr->next != NULL)
      {
        swap(ptr->val , ptr->next->val);
        ptr = ptr->next->next;
      }
      return head;
    }
};
```

- Linked List Cycle
```c++
class Solution {
public:
    bool hasCycle(ListNode *head) // Floyd's Cycle Detection
    {
        if(head == NULL || head->next == NULL)
        {
            return false;
        }  
        ListNode *slow = head;
        ListNode *fast = head; 
        while(fast != NULL)
        {
            fast = fast->next;
            if(fast != NULL)
            {
                fast = fast->next;
                slow = slow->next;
            }
            if(fast == slow)
            {
                return true;
            }
        }
        return false;
    }
};
```

- Linked List Cycle II
```c++
class Solution {
public:
    bool hasCycle(ListNode *head) // Floyd's Cycle Detection
    {
        if(head == NULL || head->next == NULL)
        {
            return false;
        }  
        ListNode *slow = head;
        ListNode *fast = head; 
        while(fast != NULL)
        {
            fast = fast->next;
            if(fast != NULL)
            {
                fast = fast->next;
                slow = slow->next;
            }
            if(fast == slow)
            {
                return true;
            }
        }
        return false;
    }

    ListNode *detectCycle(ListNode *head) // Floyd's Cycle Detection
    {
        if(hasCycle(head))
        {
            ListNode *slow = head;
            ListNode *fast = head; 
            while(fast != NULL)
            {
                fast = fast->next;
                if(fast != NULL)
                {
                    fast = fast->next;
                    slow = slow->next;
                }
                if(fast == slow)
                {
                    slow = head;
                    break;
                }
            } 
            while(slow != fast)
            {
                fast = fast->next;
                slow = slow->next;
            }
            return fast;
        }
        return NULL;
    }
};
```

- Reverse Nodes in k-Group
```c++
class Solution {
public:
    int getLength(ListNode* head)
    {
        int length = 0;
        ListNode * ptr = head;
        while(ptr != NULL)
        {
            length++;
            ptr = ptr->next;
        }
        return length;
    }

    ListNode* reverseKGroup(ListNode* head, int k) 
    {
        if(head == NULL)
        {
            return NULL;
        }    
        if(k > getLength(head))
        {
            return head;
        }
        ListNode *current = head;
        ListNode *previous = NULL;
        ListNode *forward = NULL;
        int count = 0;
        while(count < k)
        {
            forward = current->next;
            current->next = previous;
            previous = current;
            current = forward;
            count++;
        }
        // Recursive call
        if(forward != NULL)    // Nodes still left
        {
            head->next = reverseKGroup(forward , k);
        }
        return previous;
    }
};
```



---
