# DATA STRUCTURES & ALGORITHM

### Numbers

- Check Even or Odd
```c++
{
    if(n % 2 == 0)
    {
        cout << "Even" << endl;
    }
    else
    {
        cout << "Odd" << endl;
    }
}
```

- Sum of first N natural numbers
```c++
int sumNaturalNumbers(int n)
{
    return n*(n+1)/2;
}
```

- Swap two numbers
```c++
void swap(int &n1 , int &n2)
{
    n1 = n1 + n2;
    n2 = n1 - n2;
    n1 = n1 - n2;
}
```

```c++
void swap(int &n1 , int &n2)
{
    n1 = n1 ^ n2;
    n2 = n1 ^ n2;
    n1 = n1 ^ n2;
}
```

- Reverse Integer
```c++
int reverseNumber(int num)
{
    int reversed = 0;
    while(num > 0 )
    {
        reversed = (reversed*10) + (num%10);
        num = num/10;
    }
    return reversed;
}
```

```c++
int reverseNumberSTOI(int num)
{
    string s = to_string(num);
    reverse(s.begin() , s.end());
    int reversed = stoi(s);
    return reversed;
}
```

- Sum of Digits of a Number
```c++
int sumOfDigits(int num)
{
    int sum = 0;
    while(num > 0)
    {
        sum = sum + (num % 10);
        num = num/10;
    }
    return sum;
}
```

- Check Leap Year
```c++
isLeapYear(int year)
{
    if( ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0) )
    {
        return true;
    }
    return false;
}
```

- Check Prime
```c++
bool isPrime(int num)
{
    if(num > 1)
    {
        for(int i=2 ; i<num ; i++)
        {
            if(num % i == 0)
            {
                return false;
            }
        }
        return true;
    }
    return false;
}
```

- Check Palindrome
```c++
bool isPalindrome(int num)
{
    int original = num;
    int reversed = 0;
    while(num > 0 )
    {
        reversed = (reversed*10) + (num%10);
        num = num/10;
    }
    if(original == reversed)
    {
        return true;
    }
    return false;
}
```

- Convert Decimal to Binary
```c++
int DecimalToBinary(int num)
{
    int binary = 0;
    int i = 1;
    while (num != 0)
    {
        binary = binary + ((num % 2) * i);
        i = i * 10;
        num = num/2;
    }
    return binary;
}
```

- Convert Binary to Decimal
```c++
int BinaryToDecimal(int num)
{
    int decimal = 0;
    int i = 0;
    while (num != 0) 
    {
        decimal = decimal + (pow(2, i) * (num % 10));
        num = num/10;
        i++;
    }
    return decimal;
}
```

- Power of a Number
```c++
int powerOfNumber(int x , int n)
{
    int ans = 1;
    for (int i = 0; i < n; i++) 
    {
        ans = ans * x;
    }
    return ans;
}
```

- GCD of two Numbers
```c++
int GCD(int n1 , int n2)
{
    while(n1 > 0 && n2 > 0)
    {
        if(n1 > n2) 
        {
            n1 = n1 % n2;
        }
        else
        {
            n2 = n2 % n1; 
        }
    }
    if(n1 == 0)
    {
        return n2;
    }
    return n1;
}
```

- LCM of two Numbers
```c++
int GCD(int n1, int n2) 
{
    if(n2 == 0)
    {
		return n1;
	}
	return GCD(n1 , n1%n2);
}

int LCM(int n1 , int n2)
{
	return (n1*n2) / GCD(n1 , n2);
}
```

- Factorial of a Number
```c++
int factorial(int n)
{
   int ans = 1;
   for(int i = 1; i <= n; i++)
   {
        ans = ans * i;
   }
   return ans;
}
```

```c++
int factorial(int n)
{
   if(n == 0)
   {
       return 1;
   }
   return ( n * factorial(n-1) );

}
```

- Check Armstrong Number
```c++
bool isArmstrong(int n)
{
    int k = to_string(n).length();
    int sum = 0;
    int num = n;
    while(num > 0)
    {
        int mod = num%10;
        sum = sum + pow(mod , k);
        num = num/10;
    }
    if(sum == n)
    {
        return true;
    }
    return false;
}
```

- Add two Fractions

- Roots of a Quadratic Equation


- Check Perfect Number
- Check Abundant Number 
- Sum of AP Series
- Sum of GP Series


### Arrays

- Second Smallest
```c++
int secondSmallest(int arr[] , int n)
{
    int smallest = arr[0];
    int secSmallest = -1;
    for(int i=1 ; i<n ; i++)
    {
        if(arr[i] < smallest)
        {
            secSmallest = smallest;
            smallest = arr[i];
        }
        else if(arr[i] < secSmallest && arr[i] != smallest)
        {
            secSmallest = arr[i];
        }
    }
    return secSmallest;
}
```
- Second Largest
```c++
int secondLargest(int arr[] , int n)
{
    int largest = arr[0];
    int secLargest = -1;
    for(int i=1 ; i<n ; i++)
    {
        if(arr[i] > largest)
        {
            secLargest = largest;
            largest = arr[i];
        }
        else if(arr[i] > secLargest && arr[i] != largest)
        {
            secLargest = arr[i];
        }
    }
    return secLargest;
}
```

- Remove duplicates from a sorted array
```c++
class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        int i = 0;
        for(int j=1 ; j<nums.size() ; j++)
        {
            if(nums[i] != nums[j])
            {
                i++;
                nums[i] = nums[j];
            }
        }
        return (i+1);
    }
};
```
- Remove duplicates from unsorted array
```c++

```

- Find the median of the given array
```c++

```

Count frequency of each element in an array
```c++

```

Rearrange array in increasing-decreasing order
Rotate array by K elements - Block Swap Algorithm
```c++

```

Adding Element in an array
```c++

```

Find all repeating elements in an array
```c++

```

Find all non-repeating elements in an array
```c++

```

Find all symmetric pairs in array
Maximum product subarray in an array
Replace each element of the array by its rank in the array
Sorting elements of an array by frequency
Rotation of elements of array- left and right
Finding equilibrium index of an array
Finding Circular rotation of an array by K positions
Sort an array according to the order defined by another array
Check if Array is a subset of another array or not

### Strings

- Check if a given string is palindrome or not
Count number of vowels, consonants, spaces in String
Find the ASCII value of a character
Remove all vowels from the string
Remove spaces from a string
Remove characters from a string except alphabets
Reverse a String
Remove brackets from an algebraic expression
Sum of the numbers in a String
Capitalize first and last character of each word
Calculate frequency of characters in a string
Find Non-repeating characters of a String
Check if two strings are anagram of each other
Count common sub-sequence in two strings
Check if two strings match where one string contains wildcard characters
Return maximum occurring character in the input string
Remove all duplicates from the input string.
Print all the duplicates in the input string.
Remove characters from first string present in the second string
Change every letter with the next lexicographic alphabet in the given string
Write a program to find the largest word in a given string.
Write a program to sort characters in a string
Count number of words in a given string
Write a program to find a word in a given string which has the highest number of repeated letters
Change case of each character in a string
Concatenate one string to another
Write a program to find a substring within a string. If found display its starting position
Reverse words in a string


























