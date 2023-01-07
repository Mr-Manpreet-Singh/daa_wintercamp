//Check if the no is prime or not 
//check for factor
//check for its multiple like factor of 4 are 2,2
#include<iostream>
using namespace std;

bool isPrime(int number)
{
    if(number<2)
    return false;
    for (int i=2; i<number; i++)
    {
        if(number%i==0)
        return false;
    }
    return true;
}

void isPrimeFactor (int n)
{
    for(int i=2; i<n; i++)
    {
        if(isPrime(i))
        {
            int x=i;
            while(n%x==0)
            {
                cout<<i<<" ";
                x*=x;
            }
        }
    }
}

int main  ()
{
    int n;
    cin>>n;
    isPrimeFactor(n);
    return 0;
}



/* 
#include <bits/stdc++.h>
using namespace std;
 
bool isPrime(int n)
{
    // Corner cases
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
 
    // This is checked so that we can skip
    // middle five numbers in below loop
    if (n % 2 == 0 || n % 3 == 0)
        return false;
 
    // Using concept of prime number
    // can be represented in form of
    // (6*n + 1) or(6*n - 1) hence
    // we have to go for every multiple of 6 and
    // prime number would always be 1 less or 1 more than
    // the multiple of 6.
    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
 
    return true;
}

------------------------------------------------------------------------
string isPrime(int n) {
    for (int i = 2; i <= sqrt(n); i++) {
        if(n%i==0)
        return ("No");
        // Write your logic here
        // Return "Yes" if n is prime, else return "No"
        //n is prime only if it is not divisible by any i.
        //We will not reach till n and 1 is already discarded
    }
    if(n==1)
    return ("No");
    return ("Yes");
}




 */