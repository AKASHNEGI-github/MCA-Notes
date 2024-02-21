// DSA NOTES

// LEETCODE - GENERAL

371. Sum of Two Integers
class Solution {
public:
    int getSum(int a, int b) 
    {
      while(b != 0)
      {
        int temp = (a & b) << 1;
        a = a ^ b;
        b = temp;
      } 
      return a;   
    }
};

231. Power of Two
class Solution {
public:
    bool isPowerOfTwo(int n) 
    {
      for(int i=0 ; i<=30 ; i++)
      {
        int ans = pow(2 , i);
        if(ans == n)
        {
          return true;
        } 
      }
      return false;   
    }
};

7. Reverse Integer
class Solution {
public:
    int reverse(int x) 
    {
      int ans = 0;
      while(x != 0)
      {
        if( ( ans < INT_MIN/10 ) || ( ans > INT_MAX/10) )
        {
          return 0;
        }
        int mod = x % 10;
        ans = (ans * 10) + mod;
        x = x / 10;
      }
      return ans;    
    }
};

202. Happy Number
class Solution {
public:
    bool isHappy(int n) 
    {
      set<int> myset;
      while(1)
      {
        int sum = 0;
        while(n)
        {
          int mod = n%10;
          sum = sum + mod * mod;
          n = n/10;
        }
        if(sum == 1)
        {
          return true;
        }
        else if( myset.find(sum) != myset.end() )
        {
          return false;
        }
        myset.insert(sum);
        n = sum;
      }
      return false;
    }
};

69. Sqrt(x)
class Solution {
public:
    int mySqrt(int x) 
    {
        int start = 1;
        int end = x;
        if(x == 0)
        {
            return x;
        }
        while(start <= end)
        {
            int mid = start + (end - start)/2;
            if(mid == x / mid)
            {
                return mid;
                
            }
            else if(mid < x / mid)
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }    
        return end;
    }
};

// LEETCODE - ARRAYS

66. Plus One
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) 
    {
      for(int i=digits.size()-1 ; i>=0 ; i--)
      {
        if(digits[i] != 9)
        {
          digits[i]++;
          break;
        }
        else
        {
          digits[i] = 0;
        }
      }
      if(digits[0] == 0)
      {
        digits.push_back(0);
        digits[0] = 1;
      }
      return digits;
    }
};

268. Missing Number
class Solution {
public:
    int missingNumber(vector<int>& nums) 
    {
        int n = nums.size();
        int expected_sum =  n*(n+1)/2;
        int current_sum = 0;
        for(int i=0 ; i<n ; i++)
        {
            current_sum = current_sum + nums[i];
        }
        return (expected_sum - current_sum);
    }
};

1486. XOR Operation in an Array
class Solution {
public:
    int xorOperation(int n, int start) 
    {
        int ans = 0;
        vector<int> nums(n);
        for(int i=0 ; i<n ; i++)
        {
            nums[i] = start + 2 * i;
        }  
        for(int i=0 ; i<n ; i++)
        {
            ans = ans^nums[i];
        } 
        return ans; 
    }
};

189. Rotate Array
class Solution {
public:
    void rotate(vector<int>& nums, int k) 
    {
      vector<int> v(nums.size());
      for(int i=0 ; i<nums.size() ; i++)
      {
        v[(i+k) % nums.size()] = nums[i];
      }    
      nums = v;
    }
};

724. Find Pivot Index
class Solution {
public:
    int sum(vector<int>& v , int start , int end)
    {
        int sum = 0;
        for(int i=start ; i<=end ; i++)
        {
            sum = sum + v[i];
        }
        return sum;
    }
    
    int pivotIndex(vector<int>& nums) 
    {
        for(int i=0 ; i<nums.size() ; i++)
        {
            int left_sum = sum(nums , 0 , i-1);
            int right_sum = sum(nums , i+1 , nums.size()-1);
            if(left_sum == right_sum)
            {
                return i;
            }
        }
        return -1;    
    }
};

75. Sort Colors
class Solution {
public:
    void sortColors(vector<int>& nums) 
    {
      for(int i=0 ; i<nums.size()-1 ; i++)
      {
        int min_index = i;
        for(int j=i+1 ; j<nums.size() ; j++)
        {
          if(nums[j] < nums[min_index])
          {
            min_index = j;
          }
        }
        swap(nums[i] , nums[min_index]);
      }    
    }
};

1877. Minimize Maximum Pair Sum in Array
class Solution {
public:
    int minPairSum(vector<int>& nums) 
    {
      sort(nums.begin() , nums.end());
      int i = 0;
      int j = nums.size() - 1;
      int max_sum = 0;
      while(i < j)
      {
        int sum = nums[i] + nums[j];
        max_sum = max(sum , max_sum);
        i++;
        j--;
      }
      return max_sum;
    }
};

1551. Minimum Operations to Make Array Equal
class Solution {
public:
    int minOperations(int n) 
    {
      if(n % 2 != 0)
      {
        n = n / 2;
        return n * (n + 1);
      }
      else
      {
        n = n / 2;
        return n * n;
      }
    }    
};

1833. Maximum Ice Cream Bars
class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) 
    {
      int ice_cream_bars = 0;
      sort(costs.begin() , costs.end());
      int price = 0;
      for(int i = 0 ; i < costs.size() ; i++)
      {
        price = price + costs[i];
        if(price <= coins)
        {
          ice_cream_bars++;
        }
        else
        {
          break;
        }
      }
      return ice_cream_bars;
    }
};

1769. Minimum Number of Operations to Move All Balls to Each Box
class Solution {
public:
    vector<int> minOperations(string boxes) 
    {
      vector<int> ans;
      for(int i=0 ; i<boxes.size() ; i++)
      {
        int operations = 0;
        for(int j=0 ; j<boxes.size() ; j++)
        {
          if(boxes[j] == '1')
          {
            operations = operations + abs(j - i);
          }
        }
        ans.push_back(operations);
      }
      return ans;    
    }
};

1561. Maximum Number of Coins You Can Get
class Solution {
public:
    int maxCoins(vector<int>& piles) 
    {
      int max_coins = 0;
      sort(piles.begin() , piles.end());
      int  max_coins_index = (piles.size() - 2);
      for(int i=0 ; i<piles.size()/3 ; i++)
      {
        max_coins = max_coins + piles[ max_coins_index];
         max_coins_index =  max_coins_index - 2;
      }
      return max_coins;
    }
};

2079. Watering Plants
class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) 
    {
      int steps = 0;
      int current_capacity = capacity;
      for(int i=0 ; i<plants.size() ; i++)
      {
        if(plants[i] <= current_capacity)
        {
          current_capacity = current_capacity - plants[i];
          steps++;
        }
        else
        {
          current_capacity = capacity;
          current_capacity = current_capacity - plants[i];
          steps = steps + (2*i + 1);
        }
      }
      return steps;      
    }
};

2149. Rearrange Array Elements by Sign
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) 
    {
      vector<int> v1;
      vector<int> v2;
      for(int i=0 ; i<nums.size() ; i++)
      {
        if(nums[i] > 0)
        {
          v1.push_back(nums[i]);
        }
        else if(nums[i] < 0)
        {
          v2.push_back(nums[i]);
        }
      }
      nums.clear();
      for(int i=0 ; i<v1.size() ; i++)
      {
        nums.push_back(v1[i]);
        nums.push_back(v2[i]);
      } 
      return nums;
    }
};

1282. Group the People Given the Group Size They Belong To
class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) 
    {
      vector<vector<int>> ans;
      for(int i=1 ; i<=*max_element(groupSizes.begin() , groupSizes.end()) ; i++)
      {
        vector<int> subans;
        for(int j=0 ; j<groupSizes.size() ; j++)
        {
          if(groupSizes[j] == i)
          {
            if(subans.size() >= i)
            {
              ans.push_back(subans);
              subans.clear();
            }
            subans.push_back(j);
          }
        }
        if(subans.size() > 0)
        {
          ans.push_back(subans);
        }
      }
      return ans;
    }
};

442. Find All Duplicates in an Array
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) 
    {
      vector<int> ans;
      sort(nums.begin() , nums.end());
      for(int i=0 ; i<nums.size()-1 ; i++)
      {
        if(nums[i] == nums[i+1])
        {
          ans.push_back(nums[i]);
        }
      }
      return ans;    
    }
};

1991. Find the Middle Index in Array
class Solution {
public:
    int sum(vector<int>& v , int start , int end)
    {
        int sum = 0;
        for(int i=start ; i<=end ; i++)
        {
            sum = sum + v[i];
        }
        return sum;
    }
    
    int findMiddleIndex(vector<int>& nums) 
    {
        for(int i=0 ; i<nums.size() ; i++)
        {
            int left_sum = sum(nums , 0 , i-1);
            int right_sum = sum(nums , i+1 , nums.size()-1);
            if(left_sum == right_sum)
            {
                return i;
            }
        }
        return -1;    
    }
};

852. Peak Index in a Mountain Array
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) 
    {
      int start = 0;
      int end = arr.size() - 1;
      while(start < end)
      {
        int mid = start + (end - start)/2;
        if(arr[mid] < arr[mid + 1])
        {
          start = mid + 1;
        }
        else
        {
          end = mid;
        }
      }
      return start;
    }
};

34. Find First and Last Position of Element in Sorted Array
class Solution {
public:
    int firstOccurrence(vector<int>& nums , int start , int end , int target)
    {
        int first_occurrence = -1;
        while(start <= end)
        {
            int mid = start + (end - start)/2;
            if(nums[mid] == target)
            {
            first_occurrence = mid;
            end = mid - 1;
            }
            else if(nums[mid] < target)
            {
            start = mid + 1;
            }
            else
            {
            end = mid - 1;
            }
        }
        return first_occurrence;
    }

    int lastOccurrence(vector<int>& nums , int start , int end , int target)
    {
        int last_occurrence = -1;
        while(start <= end)
        {
            int mid = start + (end - start)/2;
            if(nums[mid] == target)
            {
            last_occurrence = mid;
            start = mid + 1;
            }
            else if(nums[mid] < target)
            {
            start = mid + 1;
            }
            else
            {
            end = mid - 1;
            }
        }
        return last_occurrence;
    }

    vector<int> searchRange(vector<int>& nums, int target) 
    {
      vector<int> ans;    
      ans.push_back( firstOccurrence(nums , 0 , nums.size()-1 , target) );
      ans.push_back( lastOccurrence(nums , 0 , nums.size()-1 , target) );
      return ans;
    }
};

162. Find Peak Element
class Solution {
public:
    int findPeakElement(vector<int>& nums) 
    {
        int start = 0;
        int end = nums.size() - 1;
        while(start < end)
        {
            int mid = start + (end - start)/2;
            if(nums[mid] < nums[mid+1])
            {
                start = mid + 1;
            }
            else
            {
                end = mid;
            }
        }
        return start;   
    }
};



// LEETCODE - MATRIX
// LEETCODE - STRING

1844. Replace All Digits with Characters
class Solution {
public:
    string replaceDigits(string s) {
      string ans;
      for(int i=0; i<s.size(); i++)
      {
        if(s[i] >= 'a' && s[i] <= 'z')
        {
          ans.push_back(s[i]);
        }
        else
        {
          ans.push_back(s[i-1] + s[i] - '0');
        }
      }
      return ans;
    }
};

2785. Sort Vowels in a String
class Solution {
public:
    string sortVowels(string s) 
    {
      vector<int> v;
      string ans;
      for(int i=0 ; i<s.size() ; i++)
      {
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
           {
             v.push_back(s[i]);
           }
      }
      sort(v.begin() , v.end());
      int j = 0;
      for(int i=0 ; i<s.size() ; i++)
      {
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
        {
          ans.push_back(v[j]);
          j++;
        }
        else
        {
          ans.push_back(s[i]);
        }
      }
      return ans;
    }
};

// LEETCODE - LINKED LIST

141. Linked List Cycle
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

142. Linked List Cycle II
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

25. Reverse Nodes in k-Group
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
    

// LEETCODE - STACKS

20. Valid Parentheses
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

// LEETCODE - QUEUES










// SINGLE LINKED LIST

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

// STACKS USING ARRAYS

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

// STACKS USING LINKED LIST

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



