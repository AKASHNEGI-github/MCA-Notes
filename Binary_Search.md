# BINARY SEARCH

---

### Questions

- Binary Search
```c++
class Solution {
public:
    int search(vector<int>& nums, int target) 
    {
        int start = 0;
        int end = nums.size()-1;
        while(start <= end)
        {
            int mid = start + (end-start)/2;
            if(nums[mid] == target)
            {
                return mid;
            }
            else if(nums[mid] < target)
            {
                start = mid + 1;
            }
            else if(nums[mid] > target)
            {
                end = mid - 1;
            }
        } 
        return -1;
    }
};
```

- Find First and Last Position of Element in Sorted Array
```c++
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
```

- Peak Index in a Mountain Array
```c++
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
```

- Find Peak Element
```c++
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
```

- Search in Rotated Sorted Array
```c++
class Solution {
public:
    int search(vector<int>& nums, int target) 
    {
        int start = 0;
        int end = nums.size()-1;
        while(start <= end)
        {
            int mid = start + (end-start)/2;
            if(nums[mid] == target)
            {
                return mid;
            }
            else if(nums[start] <= nums[mid]) // Left-Half Sorted
            {
                if(nums[start] <= target && target <= nums[mid])
                {
                    end = mid-1;
                }
                else
                {
                    start = mid+1;
                }
            }
            else if(nums[mid] <= nums[end]) // Right-Half Sorted
            {
                if(nums[mid] <= target && target <= nums[end])
                {
                    start = mid+1;
                }
                else
                {
                    end = mid-1;
                }
            }
        }    
        return -1;
    }
};
```

- Search in Rotated Sorted Array II
```c++
class Solution {
public:
    bool search(vector<int>& nums, int target) 
    {
        int start = 0;
        int end = nums.size()-1;
        while(start <= end)
        {
            int mid = start + (end-start)/2;
            if(nums[mid] == target)
            {
                return true;
            }
            else if(nums[start] == nums[mid] && nums[mid] == nums[end])
            {
                start++;
                end--;
            }
            else if(nums[start] <= nums[mid]) // Left-Half Sorted
            {
                if(nums[start] <= target && target <= nums[mid])
                {
                    end = mid-1;
                }
                else
                {
                    start = mid+1;
                }
            }
            else if(nums[mid] <= nums[end]) // Right-Half Sorted
            {
                if(nums[mid] <= target && target <= nums[end])
                {
                    start = mid+1;
                }
                else
                {
                    end = mid-1;
                }
            }
        }    
        return false;    
    }
};
```

- Find Minimum in Rotated Sorted Array
```c++
class Solution {
public:
    int findMin(vector<int>& nums) 
    {
        int mini = nums[0];
        int start = 0;
        int end = nums.size()-1;
        while(start < end)
        {
            int mid = start + (end-start)/2;
            if(nums[start] <= nums[mid]) // Left-Half Sorted
            {
                mini = min(mini , nums[start]);
                start = mid+1;
            }
            else if(nums[mid] <= nums[end]) // Right-Half Sorted
            {
                mini = min(mini , nums[mid]);
                end = mid-1;
            }
        }
        if(start == end)
        {
            mini = min(mini , nums[start]);
        }
        return mini;
    }
};
```

- Find Minimum in Rotated Sorted Array II
```c++

```
























---
