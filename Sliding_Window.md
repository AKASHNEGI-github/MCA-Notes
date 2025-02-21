# SLIDING WINDOW

--- 

### Questions

- Maximum Points You Can Obtain from Cards
```c++
class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) 
    {
        int leftSum = 0;
        int rightSum = 0;
        for(int i=0 ; i<k ; i++)
        {
            leftSum = leftSum + cardPoints[i];
        }   
        int maxSum = leftSum + rightSum;
        int end = cardPoints.size()-1;
        for(int i=(k-1) ; i>=0 ; i--)
        {
            leftSum = leftSum - cardPoints[i];
            rightSum = rightSum + cardPoints[end];
            maxSum = max(maxSum , (leftSum+rightSum));
            end--;
        }
        return maxSum;
    }
};
```

- Longest Substring Without Repeating Characters
```c++
class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
        int start = 0;
        int maxLength = 0;
        vector<int> charIndex(128 , -1);
        for(int end=0 ; end<s.size() ; end++)
        {
            //if((charIndex[s[end]] != -1) && (start <= charIndex[s[end]]))
            if(start <= charIndex[s[end]])
            {
                start = charIndex[s[end]] + 1;
            }
            charIndex[s[end]] = end;
            maxLength = max(maxLength , end-start+1);
        }    
        return maxLength;
    }
};
```

- Zero Sum Subarrays 
```C++
class Solution{
public:
    int findSubarray(vector<int> &arr) 
    {
        int count = 0;
        for(int i=0 ; i<arr.size() ; i++)
        {
            for(int j=i ; j<arr.size() ; j++)
            {
                int sum = 0;
                for(int k=i ; k<=j ; k++)
                {
                    sum = sum + arr[k];
                }
                if(sum == 0)
                {
                    count++;
                }
            }
        }
        return count;
    }
};        
```

```C++
class Solution{
public:
    int findSubarray(vector<int> &arr) 
    {
        int count = 0;
        for(int i=0 ; i<arr.size() ; i++)
        {
            int sum = 0;
            for(int j=i ; j<arr.size() ; j++)
            {
                sum = sum + arr[j];
                if(sum == 0)
                {
                    count++;
                }
            }
        }
        return count;
    }
};     
```

```C++
class Solution{
public:
    long long int findSubarray(vector<int> &arr) 
    {
        long long int count = 0;
        long long int prefixSum = 0;
        unordered_map<long long int , long long int> m;
        m[0] = 1;
        for(int i=0 ; i<arr.size() ; i++)
        {
            prefixSum = prefixSum + arr[i];
            if(m.count(prefixSum))
            {
                count = count + m[prefixSum];
                m[prefixSum]++;
            }
            else
            {
                m[prefixSum] = 1;
            }
        }
        return count;
    }
};    
```

- Subarray Sum Equals K
```c++
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) 
    {
        int count = 0;
        int prefixSum = 0;
        unordered_map<int , int> m;
        m[0] = 1;
        for(int i=0 ; i<nums.size() ; i++)
        {
            prefixSum = prefixSum + nums[i];
            if(m.count(prefixSum-k))
            {
                count = count + m[prefixSum-k];
                m[prefixSum]++;
            }
            else
            {
                m[prefixSum]++;
            }
        }
        return count;  
    }
};
```








---
