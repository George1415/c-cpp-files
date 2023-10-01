/*
program to print all primes smaller or equal to n
using the sieve of Eratosthenes
*/
#include <cstring>
#include <iostream>
using namespace std;

void SieveOfEratosthenes(const int n)
{
    /*
    Create a boolean array from 0 to n and 
    initalise all entries in it as true
    non prime values will then be turned to false
    */

   bool prime[n+1];
   memset(prime, true, sizeof(prime));

   for (int i = 2; i*i<=n; i++)
   {
    // if prime[i] is not changed, then it is prime
    if (prime[i] == true)
    {
        // update all multiples of i
        for (int j =i*2; j<=n; j += i)
        {
            prime[j] = false;
        }
    }
   }

   // print prime numbers
   for (int i = 2; i<=n; i++)
   {
    if (prime[i])
        cout << i << " ";
   }
}

int main()
{
    const int n = 1000;
    cout << "prime numbers smaller or equal to " << n << ":\n";
    SieveOfEratosthenes(n);
    return 0;
}


