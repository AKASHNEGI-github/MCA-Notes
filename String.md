# STRING

### Implementation
```c++

```

### Questions

-
```c++

```

-
```c++

```

-
```c++

```

- Find the Difference
```c++
class Solution {
public:
    char findTheDifference(string s, string t) 
    {
        int sumS = 0;
        int sumT = 0;
        for(int i=0 ; i<s.size() ; i++)
        {
            sumS = sumS + s[i];
        }
        for(int j=0 ; j<t.size() ; j++)
        {
            sumT = sumT + t[j];
        }
        return (sumT - sumS);
    }
};
```

```c++
class Solution {
public:
    char findTheDifference(string s, string t) 
    {
        int difference = 0;
        for(int i=0 ; i<s.size() ; i++)
        {
            difference = difference ^ s[i];
        }
        for(int j=0 ; j<t.size() ; j++)
        {
            difference = difference ^ t[j];
        }
        return difference;
    }
};
```

- Reverse Words in a String
```c++
class Solution {
public:
    string reverseWords(string s)
    {
        string ans = "";
        reverse(s.begin() , s.end());
        for(int i=0 ; i<s.size() ; i++)
        {
            string word = "";
            while(i < s.size() && s[i] != ' ')
            {
                word = word + s[i];
                i++;
            }
            reverse(word.begin() , word.end());
            if(word.size() > 0)
            {
                ans = ans + " " + word;
            }
        }
        ans = ans.substr(1);
        return ans;
    }
};
```

- String Compression
```c++
class Solution {
public:
    int compress(vector<char>& chars) 
    {
        int index = 0;
        for(int i=0 ; i<chars.size() ; i++)
        {
            char letter = chars[i];
            int count = 0;
            while(i < chars.size() && chars[i] == letter)
            {
                count++;
                i++;
            }
            if(count == 1)
            {
                chars[index++] = letter;
            }
            else if(count > 1)
            {
                chars[index++] = letter;
                string temp = to_string(count);
                for(int j=0 ; j<temp.size() ; j++)
                {
                    char digit = temp[j];
                    chars[index++] = digit;
                }
            }
            i--;
        }
        chars.resize(index);
        return index;
    }
};
```

- Remove All Occurrences of a Substring
```c++
class Solution {
public:
    string removeOccurrences(string s, string part)
    {
        while(s.size() > 0 && s.find(part) < s.size())
        {
            s.erase(s.find(part) , part.size());
        }
        return s;
    }
};
```

- Reverse Substrings Between Each Pair of Parentheses
```c++
class Solution {
public:
    string reverseParentheses(string s) 
    {
        string ans = "";
        stack<char> st;
        for(int i=0 ; i<s.size() ; i++)
        {
            if(s[i] == ')')
            {
                string temp = "";
                while(st.top() != '(')
                {
                    temp = temp + st.top();
                    st.pop();
                }
                st.pop();
                for(int j=0 ; j<temp.size() ; j++)
                {
                    st.push(temp[j]);
                }
            }
            else
            {
                st.push(s[i]);
            }
        }
        while(!st.empty())
        {
            ans = ans + st.top();
            st.pop();
        }
        reverse(ans.begin() , ans.end());
        return ans;
    }
};
```

```c++
class Solution {
public:
    string reverseParentheses(string s) 
    {
        string ans = "";
        stack<int> st;
        vector<int> oppositeV(s.size() , -1);
        for(int i=0 ; i<s.size() ; i++)
        {
            if(s[i] == '(')
            {
                st.push(i);
            }
            else if(s[i] == ')')
            {
                int openBracketIndex = st.top();
                oppositeV[i] = openBracketIndex;
                oppositeV[openBracketIndex] = i;
                st.pop();
            }
        }
        int direction = 1; // direction => Left->Right
        for(int i=0 ; i<s.size() ; i=i+direction)
        {
            if(s[i] == '(' || s[i] == ')')
            {
                i = oppositeV[i];
                direction = -1 * direction;
            }
            else
            {
                ans = ans + s[i];
            }
        }
        return ans;
    }
}
```

- Rearrange Words in a Sentence
```c++
class Solution {
public:
    string arrangeWords(string text) 
    {
        string ans = "";
        map<int , string> m;
        text[0] = tolower(text[0]);
        for(int i=0 ; i<text.size() ; i++)
        {
            string word = "";
            while(isalpha(text[i]))
            {
                word = word + text[i];
                i++;
            }
            int key = word.size();
            m[key] = m[key] + word + " ";
        }
        for(auto it:m)
        {
            ans = ans + it.second;
        }
        ans.pop_back();
        ans[0] = toupper(ans[0]);
        return ans;
    }
};
```

- 
```c++

```

- 
```c++

```

- 
```c++

```

- 
```c++

```

- String to Integer (atoi)
```c++
class Solution {
public:
    int myAtoi(string s) 
    {
        int i = 0;
        int sign = 1;
        long integer = 0;
        while(i < s.length() && s[i] == ' ')
        {
            i++;
        }
        if(s[i] == '-')
        {
            sign = -1;
            i++;
        }
        else if(s[i] == '+')
        {
            i++;
        }
        while(i < s.length() && s[i] >= '0' && s[i] <= '9')
        {
            integer = integer*10 + (s[i]-'0');
            if(integer > INT_MAX && sign == -1)
            {
                return INT_MIN;
            }
            else if(integer > INT_MAX && sign == 1)
            {
                return INT_MAX;
            }
            i++;
        }
        return (sign*integer);
    }
};
```

    Check Palindrome 
    Valid Palindrome 
    Reverse words 
    Maximum occurring character
    Remove all adjacent duplicates
    Check that a string is a palindrome
    Permutation of string
    Rreplace spaces
