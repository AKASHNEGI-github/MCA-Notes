# SLIDING WINDOW

--- 

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











---
