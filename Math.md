# MATH

---

### Questions

- Count Primes
```c++
class Solution {
public:
    int countPrimes(int n) // Sieve of Eratosthenes
    {
        int count = 0;
        vector<bool> prime(n+1 , true);
        for(int i=2 ; (i*i)<=n ; i++)
        {
            if(prime[i] == true)
            {
                for(int j=(i*i) ; j<=n ; j=j+i)
                {
                    prime[j] = false;
                }
            }
        }
        for(int i=2 ; i<n ; i++)
        {
            if(prime[i] == true)
            {
                count++;
            }
        }
        return count;
    }
};
```

- Pow(x, n)
```c++
class Solution {
public:
    double myPow(double x, int n) 
    {
        long power = abs(long(n)); // Convert (int -> long) to handle INT_MIN
        double ans = 1.0;
        while(power > 0)
        {
            if(power%2 == 1)
            {
                ans = ans*x;
            }
            x = x*x;
            power = power/2;
        }
        return (n < 0) ? 1/ans : ans;    
    }
};
```






---
