// RECURSION

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

int min(int arr[] , int size)
{
    if(size == 1)
    {
        return arr[0];
    }
    return min(arr[size-1] , min(arr , size-1));
}

int max(int arr[] , int size)
{
    if(size == 1)
    {
        return arr[0];
    }
    return max(arr[size-1] , max(arr , size-1));
}

/*
int max(int arr[] , int size)
{
    int maxi = INT_MIN;
    if(size == 0)
    {
        return maxi;
    }
    if(arr[size-1] > max(arr , size-1))
    {
        return arr[size-1];
    }
}
*/

int search(int arr[] , int size , int key)
{
    if(size == 0)
    {
        return -1;
    }
    if(arr[size-1] == key)
    {
        return size-1;
    }
    return search(arr , size-1 , key);
}
