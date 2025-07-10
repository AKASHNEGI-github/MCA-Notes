# 1D-Array
---

| Table Of Content |
| ---------------- |
| Implementation |
| Two Sum |
| 3Sum |

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

int LinearSearch(int arr[] , int size , int key)
{
    for(int i=0 ; i<size ; i++)
    {
        if(arr[i] == key)
        {
            return i;
        }
    }
    return -1;
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
    cout << "Key Index : " << LinearSearch(arr , size , 4) << endl; // Key Index : 3
    cout << "Sum : " << Sum(arr , size) << endl; // Sum : 15
    cout << "Minimum : " << Min(arr , size) << endl; // Minimum : 1
    cout << "Maximum : " << Max(arr , size) << endl; // Maximum : 5
    Reverse(arr , size); // 5 4 3 2 1
    Print(arr , size);
    return 0;
}
```

### Questions

- Sort an Array
```c++
class Solution {
public:
    vector<int> sortArray(vector<int>& nums) // Counting Sort
    {
        int mini = *min_element(nums.begin() , nums.end());
        int maxi = *max_element(nums.begin() , nums.end());
        int range = maxi - mini + 1;
        vector<int> countArray(range , 0);
        for(int i=0 ; i<nums.size() ; i++) 
        {
            countArray[nums[i] - mini]++;
        }
        int index = 0;
        for(int i=0 ; i<range ; i++) 
        {
            while(countArray[i] > 0) 
            {
                nums[index] = i + mini;
                countArray[i]--;
                index++;
            }
        }
        return nums;
    }
};
```

```c++
class Solution {
public:
    vector<int> sortArray(vector<int>& nums) // Counting Sort
    {
        map<int , int> countMap;
        for(int i=0 ; i<nums.size() ; i++) 
        {
            countMap[nums[i]]++;
        }
        int arrIndex = 0;
        for(auto const& [key , val] : countMap) 
        {
            for(int i=0 ; i<val ; i++) 
            {
                nums[arrIndex++] = key;
            }
        }
        return nums;  
    }
};
```

- Two Sum
```c++
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        vector<int> ans;
        for(int i=0 ; i<nums.size() ; i++)
        {
            for(int j=(i+1) ; j<nums.size() ; j++)
            {
                if(nums[i] + nums[j] == target)
                {
                    ans = {i , j};
                }
            }
        }
        return ans;
    }
};
```

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

- 3Sum
```c++
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) 
    {
        set<vector<int>> s;
        vector<vector<int>> ans;
        for(int i=0 ; i<nums.size() ; i++)
        {
            for(int j=(i+1) ; j<nums.size() ; j++)
            {
                for(int k=(j+1) ; k<nums.size() ; k++)
                {
                    if(nums[i] + nums[j] + nums[k] == 0)
                    {
                        vector<int> triplet = {nums[i] , nums[j] , nums[k]};
                        sort(triplet.begin() , triplet.end());
                        if(s.find(triplet) == s.end())
                        {
                            s.insert(triplet);
                            ans.push_back(triplet);
                        }
                    }
                }
            }
        }
        return ans;
    }
};
```

```c++

```

```c++

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

- Remove Element
```c++
class Solution {
public:
    int removeElement(vector<int>& nums, int val)
    {
        int i = 0;
        for(int j=0 ; j<nums.size() ; j++)
        {
            if(nums[j] != val)
            {
                nums[i] = nums[j];
                i++;
            }
        }  
        return i;
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

- Majority Element
```c++
class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        sort(nums.begin() , nums.end());
        int n = nums.size();
        return nums[n/2];    
    }
};
```

```c++
class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        int n = nums.size();
        unordered_map<int , int> map;
        for(int i=0 ; i<n ; i++)
        {
            map[nums[i]]++;
        }  
        for(auto it:map)
        {
            if(it.second > n/2)
            {
                return it.first;
            }
        }
        return -1;
    }
};
```

```c++
class Solution {
public:
    int majorityElement(vector<int>& nums) // Moore's Voting Algorithm
    {
        int element = -1;
        int count = 0;
        for(int i=0 ;  i<nums.size() ; i++)
        {
            if(count == 0)
            {
                element = nums[i];
                count = 1;
            }
            else if(nums[i] == element) 
            {
                count++;
            }
            else
            {
                count--;
            }
        }
        return element;
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
