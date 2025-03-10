# GREEDY

---

- Assign Cookies
```c++
class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) 
    {
        int count = 0;
        int greedIndex = 0;
        int cookieIndex = 0;
        sort(g.begin() , g.end());
        sort(s.begin() , s.end());
        while(greedIndex < g.size() && cookieIndex < s.size())
        {
            if(g[greedIndex] <= s[cookieIndex])
            {
                count++;
                greedIndex++;
            }
            cookieIndex++;
        }
        return count;
    }
};
```

- Lemonade Change
```c++

```





---
