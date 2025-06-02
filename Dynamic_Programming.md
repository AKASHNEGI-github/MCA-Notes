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



---
