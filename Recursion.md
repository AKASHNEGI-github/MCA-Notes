# RECURSION

---

### Questions

- Print name N times
- Forward Counting
- Forward Counting (Backtracking)
- Backward Counting
- Backward Counting (Backtracking)
- Sum of first N natural numbers
- Factorial of N
- Reverse an array
- Check Palinddrome
- Fibonacci Series

  
void forwardCounting(int n)
{
    if(n == 0)
    {
        return;
    }
    forwardCounting(n-1);
    cout << n << " ";
}

void backwardCounting(int n)
{
    if(n == 0)
    {
        return;
    }
    cout << n << " ";
    backwardCounting(n-1);
}

int factorial(int n)
{
    if(n == 1)
    {
        return 1;
    }
    return n * factorial(n-1);
}

int fibonacci(int term)
{
    if(term == 1)
    {
        return 0;
    }
    if(term == 2)
    {
        return 1;
    }
    return fibonacci(term-1) + fibonacci(term-2);
}

int powerOfTwo(int n)
{
    if(n == 1)
    {
        return 2;
    }
    return 2 * powerOfTwo(n-1);
}

void PrintDigits(int n)
{
    if(n == 0)
    {
        return;
    }
    PrintDigits(n/10);
    cout << n%10 << " ";
}

int climbStairs(int n)
{
    if(n == 0 || n == 1)
    {
        return 1;
    }
    return climbStairs(n-1) + climbStairs(n-2);
}

void printAray(int arr[] , int size , int i)
{
    if(i >= size)
    {
        return;
    }
    cout << arr[i] << " ";
    printAray(arr , size , i+1);
}

int max(int arr[] , int size , int i , int maxi)
{
    if(i >= size)
    {
        return maxi;
    }
    if(arr[i] > maxi)
    {
        maxi = arr[i];
    }
    return max(arr , size , i+1 , maxi);
}

int min(int arr[] , int size , int i ,  int mini)
{
    if(i >= size)
    {
        return mini;
    }
    if(arr[i] < mini)
    {
        mini = arr[i];
    }
    return min(arr , size , i+1 , mini);
}

int search(int arr[] , int size , int i , int key)
{
    if(i >= size)
    {
        return -1;
    }
    if(arr[i] == key)
    {
        return i;
    }
    return search(arr , size , i+1 , key);
}







---
