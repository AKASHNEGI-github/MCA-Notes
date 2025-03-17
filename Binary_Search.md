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

- Search Insert Position
```c++
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) 
    {
        int start = 0;
        int end = nums.size()-1;
        while(start <= end)
        {
            int mid = start + (end - start)/2;
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
        return start;
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

- Maximum Candies Allocated to K Children
```c++
class Solution {
public:
    long long countChildren(vector<int>& candies , int mid)
    {
        long long children = 0;
        for(int i=0 ; i<candies.size() ; i++)
        {
            children = children + (candies[i]/mid);
        }
        return children;
    }

    int maximumCandies(vector<int>& candies, long long k) 
    {
        int maxChildren = 0;
        int low = 1;
        int high = *max_element(candies.begin() , candies.end());
        while(low <= high)
        {
            int mid = low + (high - low)/2;
            long long children = countChildren(candies , mid);
            if(children >= k)
            {
                maxChildren = mid;
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
        return maxChildren;
    }
};
```

- Koko Eating Bananas
```c++
class Solution {
public:
    long long countHours(vector<int>& piles , int BananasPerHour)
    {
        long long totalHours = 0;
        for(int i=0 ; i<piles.size() ; i++)
        {
            totalHours = totalHours + (piles[i]/BananasPerHour); 
            if(piles[i] % BananasPerHour != 0)
            {
                totalHours++;
            }
        }
        return totalHours;
    }

    int minEatingSpeed(vector<int>& piles, int h) 
    {
        int low = 1;
        int high = *max_element(piles.begin() , piles.end());
        while(low <= high)
        {
            int BananasPerHour = low + (high - low)/2;
            long long totalHours = countHours(piles , BananasPerHour);
            if(totalHours <= h)
            {
                high = BananasPerHour - 1;
            }
            else
            {
                low = BananasPerHour + 1;
            }
        }
        return low;
    }
};
```

- Capacity To Ship Packages Within D Days
```c++
class Solution {
public:
    int countDays(vector<int>& weights , int averageCapacity)
    {
        int sumWeight = 0;
        int totalDays = 1;
        for(int i=0 ; i<weights.size() ; i++)
        {
            if(sumWeight + weights[i] <= averageCapacity)
            {
                sumWeight = sumWeight + weights[i]; 
            }
            else
            {
                totalDays++;
                sumWeight = weights[i];
            }
        }
        return totalDays;
    }

    int shipWithinDays(vector<int>& weights, int days) 
    {
        int low = *max_element(weights.begin() , weights.end());
        int high = accumulate(weights.begin() , weights.end() , 0);
        while(low < high)
        {
            int averageCapacity = low + (high - low)/2;
            int totalDays = countDays(weights , averageCapacity);
            if(totalDays > days)
            {
                low = averageCapacity + 1;
            }
            else
            {
                high = averageCapacity;
            }
        }
        return high; // return low
    }
};
```

- Split Array Largest Sum
```c++
class Solution {
public:
    int countSubarray(vector<int>& nums , int mid)
    {
        int sumSubarray = 0;
        int countSubarray = 1; 
        for(int i=0 ; i<nums.size() ; i++)
        {
            if(sumSubarray + nums[i] <= mid)
            {
                sumSubarray = sumSubarray + nums[i];
            }
            else
            {
                countSubarray++;
                sumSubarray = nums[i];
            }
        }
        return countSubarray;
    }

    int splitArray(vector<int>& nums, int k) // Book Allocation Problem
    {
        int low = *max_element(nums.begin() , nums.end());
        int high = accumulate(nums.begin() , nums.end() , 0);
        while(low < high)
        {
            int mid = low + (high - low)/2;
            int subarrays = countSubarray(nums , mid);
            if(subarrays > k)
            {
                low = mid + 1;
            }
            else
            {
                high = mid;
            }

        }
        return high; // return low
    }
};
```























---
