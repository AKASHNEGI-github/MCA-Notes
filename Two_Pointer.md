# TWO - Pointer
---

| TWO - Pointer |
| ------------- |
| Container With Most Water |
| Trapping Rain Water |

---
### Questions

- Container With Most Water
```c++
class Solution {
public:
    int maxArea(vector<int>& height) // Brute-Force Solution
    {
        int maxWater = 0;
        for(int i=0 ; i<height.size() ; i++)
        {
            for(int j=(i+1) ; j<height.size() ; j++)
            {
                int widths = j - i;
                int heights = min(height[i] , height[j]);
                int area = widths * heights;
                maxWater = max(area , maxWater);
            }
        }
        return maxWater;
    }
};
```

```c++
class Solution {
public:
    int maxArea(vector<int>& height) // Optimal Solution -> Two Pointer
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

- Trapping Rain Water
```c++
class Solution {
public:
    int trap(vector<int>& height) // Brute-Force Solution
    {
        int n = height.size();
        int waterTrapped = 0;
        for(int i=0 ; i<(n-1) ; i++)
        {
            int leftMax = 0;
            int rightMax = 0;
            // Find the highest bar to the left of i (including i)
            for(int j=0 ; j<=i ; j++) 
            {
                leftMax = max(leftMax , height[j]);
            }
            // Find the highest bar to the right of i (including i)
            for(int j=i ; j<n ; j++) 
            {
                rightMax = max(rightMax , height[j]);
            }
            // Water trapped on top of height[i]
            waterTrapped = waterTrapped + (min(leftMax , rightMax) - height[i]);
        }
        return waterTrapped;
    }
};
```

```c++
class Solution {
public:
    int trap(vector<int>& height) // Better Solution
    {
        int n = height.size();
        vector<int> leftMax(n , 0);
        vector<int> rightMax(n , 0);
        leftMax[0] = height[0];
        rightMax[n-1] = height[n-1];
        int waterTrapped = 0;
        for(int i=1 ; i<n ; i++)
        {
            leftMax[i] = max(leftMax[i-1] , height[i]);
        }
        for(int j=(n-2) ; j>=0 ; j--)
        {
            rightMax[j] = max(rightMax[j+1] , height[j]);
        }
        for(int k=0 ; k<n ; k++)
        {
            waterTrapped = waterTrapped + (min(leftMax[k] , rightMax[k]) - height[k]);
        }
        return waterTrapped;
    }
};
```

```c++
class Solution {
public:
    int trap(vector<int>& height) // Optimal Solution -> Two Pointer
    {
        int left = 0;
        int right = height.size()-1;
        int leftMax = 0;
        int rightMax = 0;
        int waterTrapped = 0;
        while(left < right)
        {
            leftMax = max(leftMax , height[left]);
            rightMax = max(rightMax , height[right]);
            if(leftMax < rightMax)
            {
                waterTrapped = waterTrapped + leftMax - height[left];
                left++;
            }
            else
            {
                waterTrapped = waterTrapped + rightMax - height[right];
                right--;
            }
        }
        return waterTrapped;
    }
};
```
