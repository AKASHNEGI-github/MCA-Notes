# GREEDY
---

| GREEDY |
| ------ |
| Assign Cookies |
| Lemonade Change |

---
### Questions

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
class Solution {
public:
    bool lemonadeChange(vector<int>& bills) 
    {
        int countFive = 0;
        int countTen = 0;
        for(int i=0 ; i<bills.size() ; i++)
        {
            if(bills[i] == 5)
            {
                countFive = countFive + 1;
            }
            else if(bills[i] == 10)
            {
                if(countFive)
                {
                    countTen = countTen + 1;
                    countFive = countFive - 1;
                }
                else
                {
                    return false;
                }
            }
            else if(bills[i] == 20)
            {
                if(countFive && countTen)
                {
                    countTen = countTen - 1;
                    countFive = countFive - 1;
                }
                else if(countFive >= 3)
                {
                    countFive = countFive - 3;
                }
                else
                {
                    return false;
                }
            }
        }
        return true;
    }
};
```





---
