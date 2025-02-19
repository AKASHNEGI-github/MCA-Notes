# STRING

### Implementation
```c++

```

### Questions

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

    Length of String
    Reverse a String
    Check Palindrome 
    Valid Palindrome 
    Reverse words 
    Maximum occurring character
    Remove all occurrences of substring
    Remove all adjacent duplicates
    String Compression
    Check that a string is a palindrome
    Permutation of string
    Rreplace spaces
