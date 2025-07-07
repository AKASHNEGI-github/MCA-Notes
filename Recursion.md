# RECURSION
---

| RECURSION |
| --------- |
| Reverse String |
| Fibonacci Number |
| Climbing Stairs |
| Binary Search |

---
### Questions

- Reverse String
```c++
class Solution {
public:
    void reverse(vector<char>& s , int start , int end)
    {
        if(start >= end)
        {
            return;
        }
        swap(s[start] , s[end]);
        reverse(s , start+1 , end-1);
    }
    void reverseString(vector<char>& s) 
    {
        int start = 0;
        int end = s.size()-1;
        reverse(s , start , end);
    }
};
```

- Fibonacci Number
```c++
class Solution {
public:
    int fib(int n) 
    {
        if(n == 0 || n == 1)
        {
            return n;
        }
        return fib(n-1) + fib(n-2);
    }
};
```

- Climbing Stairs
```c++
class Solution {
public:
    int climbStairs(int n) 
    {
        if(n == 0 || n == 1)
        {
            return 1;
        }    
        return climbStairs(n-1) + climbStairs(n-2);
    }
};
```

- Binary Search
```c++
class Solution {
public:
    int binarySearchRecursive(vector<int>& nums , int target , int start , int end)
    {
        if(start <= end)
        {
            int mid = start + (end - start)/2;
            if(nums[mid] == target)
            {
                return mid;
            }
            else if(nums[mid] < target)
            {
                return binarySearchRecursive(nums , target , mid+1 , end);
            }
            else if(nums[mid] > target)
            {
                return binarySearchRecursive(nums , target , start , mid-1);
            }
        }
        return -1;
    }

    int search(vector<int>& nums, int target) 
    {
        return binarySearchRecursive(nums , target , 0 , nums.size()-1);    
    }
};
```







---
