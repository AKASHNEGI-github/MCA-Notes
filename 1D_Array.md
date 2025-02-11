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
