# 1D-Array
---

| Table Of Content |
| ---------------- |
| Implementation |
| Sort an Array |
| Two Sum |
| Two Sum II - Input Array Is Sorted |
| 3Sum |
| 3Sum Closest |
| Plus One |
| Rotate Array |
| Check if Array Is Sorted and Rotated |
| Container With Most Water |
| Sort Colors |
| Find the Duplicate Number |
| Remove Duplicates from Sorted Array |
| Remove Duplicates from Sorted Array II |
| Remove Duplicates from Unsorted Array |
| Majority Element |
| Majority Element II |

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
    vector<int> sortArray(vector<int>& nums) 
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

- Two Sum II - Input Array Is Sorted
```c++
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) 
    {
        vector<int> ans;
        int start = 0;
        int end = numbers.size()-1;
        while(start < end)
        {
            int sum = numbers[start] + numbers[end];
            if(sum == target)
            {
                ans = {start+1 , end+1};
                break;
            }
            else if(sum < target)
            {
                start++;
            }
            else if(sum > target)
            {
                end--;
            }
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
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) 
    {
        set<vector<int>> uniqueTriplets;
        for(int i=0 ; i<nums.size() ; i++)
        {
            set<int> s;
            for(int j=(i+1) ; j<nums.size() ; j++)
            {
                int first = nums[i];
                int second = nums[j];
                int third = -first - second;
                if(s.find(third) != s.end())
                {
                    vector<int> triplet = {first , second , third};
                    sort(triplet.begin() , triplet.end());
                    uniqueTriplets.insert(triplet);
                }
                s.insert(second);
            }
        }
        vector<vector<int>> ans(uniqueTriplets.begin() , uniqueTriplets.end());
        return ans;
    }
};
```

```c++
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) 
    {
        vector<vector<int>> ans;
        sort(nums.begin() , nums.end());
        for(int i=0 ; i<nums.size() ; i++)
        {
            if(i > 0 && nums[i] == nums[i-1])
            {
                continue;
            }
            int j = (i+1);
            int k = nums.size()-1;
            while(j < k)
            {
                int sum = nums[i]+ nums[j] + nums[k];
                if(sum == 0)
                {
                    ans.push_back({nums[i] , nums[j] , nums[k]});
                    j++;
                    k--;
                    while(j < k && nums[j] == nums[j-1])
                    {
                        j++;
                    }
                }
                else if(sum < 0)
                {
                    j++;
                }
                else if(sum > 0)
                {
                    k--;
                }
            }
        }
        return ans;
    }
};
```

- 3Sum Closest
```c++
public:
    int threeSumClosest(vector<int>& nums, int target) 
    {
        int closestSum = INT_MAX/2; // A large value but not overflow
        for(int i=0 ; i<nums.size() ; i++)
        {
            for(int j=(i+1) ; j<nums.size() ; j++)
            {
                for(int k=(j+1) ; k<nums.size() ; k++)
                {
                    int currentSum = nums[i]+ nums[j] + nums[k];
                    if(abs(currentSum - target) < abs(closestSum - target))
                    {
                        closestSum = currentSum;
                    }
                }
            }
        }
        return closestSum;
    }
};
```

```c++
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) 
    {
        int closestSum = INT_MAX/2; // A large value but not overflow
        sort(nums.begin() , nums.end());
        for(int i=0 ; i<nums.size()-2 ; i++)
        {
            int j = (i+1);
            int k = nums.size()-1;
            while(j < k)
            {
                int currentSum = nums[i]+ nums[j] + nums[k];
                if(abs(currentSum - target) < abs(closestSum - target))
                {
                    closestSum = currentSum;
                }
                if(currentSum < target)
                {
                    j++;
                }
                else if(currentSum > target)
                {
                    k--;
                }
                else
                {
                    return closestSum;
                }
            }
        }
        return closestSum;
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

- Sort Colors
```c++
class Solution {
public:
    void sortColors(vector<int>& nums) // Dutch National Flag Algorithm
    {
        int low = 0;
        int mid = 0;
        int high = nums.size()-1;
        while(mid <= high)
        {
            if(nums[mid] == 0)
            {
                swap(nums[low] , nums[mid]);
                low++;
                mid++;
            }
            else if(nums[mid] == 1)
            {
                mid++;
            }
            else if(nums[mid] == 2)
            {
                swap(nums[mid] , nums[high]);
                high--;
            }
        }
    }
};
```

- Find the Duplicate Number
```c++
class Solution {
public:
    int findDuplicate(vector<int>& nums) 
    {
        int ans;
        sort(nums.begin() , nums.end());
        for(int i=0 ; i<nums.size()-1 ; i++)
        {
            if(nums[i] == nums[i+1])
            {
                ans = nums[i];
            }
        }    
        return ans;
    }
};
```

```c++
class Solution {
public:
    int findDuplicate(vector<int>& nums) // Slow & Fast Pointer
    {   
        int slow = 0;
        int fast = 0;
        do{
            slow = nums[slow];
            fast = nums[nums[fast]];
        }while(slow != fast);
        slow = 0;
        while(slow != fast)
        {
            slow = nums[slow];
            fast = nums[fast];
        }
        return slow;
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

- Remove Duplicates from Sorted Array II
```c++
class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        if(nums.size() < 3)
        {
            return nums.size();
        }
        int left = 2;
        int right = 2;
        while(right < nums.size())
        {
            if(nums[left-2] != nums[right])
            {
                nums[left] = nums[right];
                left++;
            }
            right++;
        }
        return left;
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

- Majority Element II
```c++
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) 
    {
        vector<int> ans;
        map<int , int> m;
        int elementMajority = (int)(nums.size()/3) + 1;
        for(int i=0 ; i<nums.size() ; i++)
        {
            m[nums[i]]++;
            if(m[nums[i]] == elementMajority)
            {
                ans.push_back(nums[i]);
            }
            if(ans.size() == 2)
            {
                break;
            }
        }   
        sort(ans.begin() , ans.end());
        return ans;
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
