# 1D-Array

---

### Implementation
```c++
#include<bits/stdc++.h>
using namespace std;

void Input(int arr[] , int size)
{
    cout << "Enter Array Elements" << endl;
    for(int i=0 ; i<size ; i++)
    {
        cin >> arr[i];
    }
}

void Print(int arr[] , int size)
{
    cout << "Array Elements" << endl;
    for(int i=0 ; i<size ; i++)
    {
        cout << arr[i] << " ";
    }
}

void Reverse(int arr[] , int size)
{
    int start = 0;
    int end = size - 1;
    while(start <= end)
    {
        swap(arr[start++] , arr[end--]);
    }
}

int Sum(int arr[] , int size)
{
    int sum = 0;
    for(int i=0 ; i<size ; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}

int Min(int arr[] , int size)
{
    int mini = INT_MAX;
    for(int i=0 ; i<size ; i++)
    {
        mini = min(arr[i] , mini);
    }
    return mini;
}

int Max(int arr[] , int size)
{
    int maxi = INT_MIN;
    for(int i=0 ; i<size ; i++)
    {
        maxi = max(arr[i] , maxi);
    }
    return maxi;
}

int main()
{
    int size;
    cout << "Enter size : ";
    cin >> size;
    int arr[size];
    Input(arr , size); // 1 2 3 4 5
    Print(arr , size);
    cout << "Sum : " << Sum(arr , size) << endl; // Sum : 15
    cout << "Minimum : " << Min(arr , size) << endl; // Minimum : 1
    cout << "Maximum : " << Max(arr , size) << endl; // Maximum : 5
    Reverse(arr , size); // 5 4 3 2 1
    Print(arr , size);
    return 0;
}
```

### Questions

- Two Sum
```c++
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        vector<int> ans;
        unordered_map<int , int> map;
        for(int i=0 ; i<nums.size() ; i++)
        {
            int first = nums[i];
            int second = target - first;
            if(map.find(second) != map.end())
            {
                ans.push_back(i);
                ans.push_back(map[second]);
                break;
            }
            map[first] = i;
        }
        return ans;
    }
};
```

- Plus One
```c++
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
```

- Rotate Array
```c++
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
```

- Check if Array Is Sorted and Rotated
```c++
class Solution {
public:
    bool check(vector<int>& nums) 
    {
        int count = 0;
        for(int i=0 ; i<nums.size()-1 ; i++)
        {
            if(nums[i] > nums[i+1])
            {
                count++;
            }
        }  
        if(nums[0] < nums[nums.size()-1])
        {
            count++;
        }
        if(count <= 1)
        {
            return true;
        }  
        return false;
    }
};
```

- Container With Most Water
```c++
class Solution {
public:
    int maxArea(vector<int>& height) 
    {
        int maxWater = 0;
        int left = 0;
        int right = height.size()-1;
        while(left < right)
        {
            int widths = right - left;
            int heights = min(height[left] , height[right]);
            int area = widths * heights;
            maxWater = max(area , maxWater);
            if(height[left] < height[right])
            {
                left++;
            }
            else
            {
                right--;
            }
        }
        return maxWater;
    }
};
```

- Remove Duplicates from Sorted Array
```c++
class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        int i = 0;
        for(int j=1 ; j<nums.size() ; j++)
        {
            if(nums[i] != nums[j])
            {
                i++;
                nums[i] = nums[j];
            }
        }
        return (i+1);
    }
};
```

- Remove Duplicates from Unsorted Array
```c++

```

- Merge Sorted Array
```c++
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) 
    {
        int i = m-1;
        int j = n-1;
        int index = m+n-1;
        while(i >= 0 && j >= 0)
        {
            if(nums1[i] >= nums2[j])
            {
                nums1[index] = nums1[i];
                i--;
                index--;
            }
            else
            {
                nums1[index] = nums2[j];
                j--;
                index--;
            }
        }
        while(j >= 0)
        {
            nums1[index] = nums2[j];
            j--;
            index--;  
        }
    }
};
```

- Move Zeroes
```c++
class Solution {
public:
    void moveZeroes(vector<int>& nums) 
    {
        int j = -1;
        for(int i=0 ; i<nums.size() ; i++)
        {
            if(nums[i] == 0)
            {
                j = i;
                break;
            }
        }    
        for(int i=(j+1) ; i<nums.size() ; i++)
        {
            if(nums[i] != 0 && j != -1)
            {
                swap(nums[i] , nums[j]);
                j++;
            }
        }
    }
};
```

- Next Permutation
```c++
class Solution {
public:
    void nextPermutation(vector<int>& nums) 
    {
        next_permutation(nums.begin() , nums.end());    
    }
};
```

```c++
class Solution {
public:
    void nextPermutation(vector<int>& nums) 
    {
        int pivot = -1;
        for(int i=nums.size()-2 ; i>=0 ; i--)
        {
            if(nums[i] < nums[i+1])
            {
                pivot = i;
                break;
            }
        }
        if(pivot != -1)
        {
            for(int i=nums.size()-1 ; i>pivot ; i--)
            {
                if(nums[i] > nums[pivot])
                {
                    swap(nums[i] , nums[pivot]);
                    break;
                }
            }
            reverse(nums.begin()+pivot+1 , nums.end());
        }
        else
        {
            reverse(nums.begin() , nums.end());
        }
    }
};
```







---
