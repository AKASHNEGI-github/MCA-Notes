# HASHMAP

---

### Un-Ordered Map
```c++
#include<bits/stdc++.h>
using namespace std;

int main()
{
    unordered_map<string , int> m;

    m["A"] = 1;
    pair<string , int> p1("B" , 2);
    m.insert(p1);
    pair<string , int> p2 = make_pair("C" , 3);
    m.insert(p2);

    cout << "Unordered Map" << endl;
    for(auto i:m)
    {
        cout << i.first << " " << i.second << endl;
    }

    /*
    Unordered Map
    C 3
    B 2
    A 1
    */

    cout << "Search : " << m["A"] << endl; // 1
    cout << "Search : " << m.at("A") << endl; // 1

    m.erase("C");
    cout << "Size : " << m.size() << endl; // 2
    cout << "Present : " << m.count("D") << endl; // 0

    return 0;
}
```

### Ordered Map
```c++
#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<string , int> m;

    m["A"] = 1;
    pair<string , int> p1("B" , 2);
    m.insert(p1);
    pair<string , int> p2 = make_pair("C" , 3);
    m.insert(p2);

    cout << "Ordered Map" << endl;
    map<string , int> :: iterator it = m.begin();
    while(it != m.end())
    {
        cout << it->first << " " << it->second << endl;
        it++;
    }

    /*
    Ordered Map
    A 1
    B 2
    C 3
    */

    cout << "Search : " << m["A"] << endl; // 1
    cout << "Search : " << m.at("A") << endl; // 1

    m.erase("C");
    cout << "Size : " << m.size() << endl; // 2
    cout << "Present : " << m.count("D") << endl; // 0

    return 0;
}
```

### Questions

- Roman to Integer
```c++
class Solution {
public:
    int romanToInt(string s) 
    {
        int ans = 0;
        unordered_map<char , int> m{
            {'I',1} , {'V',5} , {'X',10} , {'L',50} , {'C',100} , {'D',500} , {'M',1000}
        }; 
        for(int i=0 ; i<s.size() ; i++)
        {
            if(m[s[i]] < m[s[i+1]])
            {
                ans = ans - m[s[i]];
            }
            else
            {
                ans = ans + m[s[i]];
            }
        }
        return ans;
    }
};
```



---
