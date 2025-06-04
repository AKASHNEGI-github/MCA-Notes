# DYNAMIC PROGRAMMING

---

### Questions

- Climbing Stairs
```c++
class Solution {
public:
    int climbStairs(int n) // Tabulation
    {
        vector<int> dp(n+1);
        dp[0] = 1;
        dp[1] = 1;
        for(int i=2 ; i<=n ; i++)
        {
            dp[i] = dp[i-1] + dp[i-2];
        }   
        return dp[n];
    }
};
```

```c++
class Solution {
public:
    int climbStairs(int n) // Space Optimization
    {
        int ans = 1;
        int first = 1;
        int second = 1;
        for(int i=2 ; i<=n ; i++)
        {
            int current = first + second;
            ans = current;
            first = second;
            second = current;
        }   
        return ans;
    }
};
```

- Min Cost Climbing Stairs
```c++
class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) // Tabulation
    {
        int n = cost.size();
        vector<int> dp(n+1);
        dp[0] = cost[0];
        dp[1] = cost[1];
        for(int i=2 ; i<n ; i++)
        {
            dp[i] = cost[i] + min(dp[i-1] , dp[i-2]);
        }    
        return min(dp[n-1] , dp[n-2]);
    }
};
```

```c++
class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) // Space Optimization
    {
        int n = cost.size();
        int first = cost[0];
        int second = cost[1];
        for(int i=2 ; i<n ; i++)
        {
            int current = cost[i] + min(first , second);
            first = second;
            second = current;
        }    
        return min(first , second);
    }
};
```

- House Robber
```c++
class Solution {
public:
    int rob(vector<int>& nums) // Tabulation
    {
        int n = nums.size();
        vector<int> dp(n+1);
        dp[0] = 0;
        dp[1] = nums[0];
        for(int i=2 ; i<=n ; i++)
        {
            int value = nums[i-1];
            int include = dp[i-2] + value;
            int exclude = dp[i-1] + 0;
            dp[i] = max(include , exclude);
        }
        return dp[n];
    }
};
```

```c++
class Solution {
public:
    int rob(vector<int>& nums) // Space Optimization
    {
        int first = 0;
        int second = 0;
        int current = 0;
        for(int i=0 ; i<nums.size() ; i++)
        {
            int include = first + nums[i];
            int exclude = second + 0;
            current = max(include , exclude);
            first = second;
            second = current;
        }
        return current;
    }
};
```



---
