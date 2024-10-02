# DATA STRUCTURES & ALGORITHM

### Numbers

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



























