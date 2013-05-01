#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long long fact_inv_mod(int r);
long long powmod(int a, long long b);
//long long factorial(int n);
long long ncr(int n, int r);
long long compute(int n, int r);

long long M=107;

int main()
{
    int t,n,k;
    long long total;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        scanf("%d",&k);
        printf("%li\n", fact_inv_mod(n));
        //printf("%li\n",ncr(n,k));
        printf("%li\n",powmod(n,k));
        //total = compute(n,k);
        //printf("%li\n",total);
    }

    return 0;
}

/*long long factorial(int n)
{
    long long result = 1;
    int i;
    for(i = 0; i < n; i++)
    result = ((result * (n - i)) % M);
    return (result % M);
}*/

long long ncr(int n, int r)
{
    int i = 0;
    long long num = 1,denom,result;
    while(i < r)
    {
        num = ((num * (n-i)) % M);
        i++;
    }
    denom = fact_inv_mod(r);
    result = (((num%M)*(denom%M)) % M);
    return result;
}

long long fact_inv_mod(int r)
{
    long long result = 1;
    while(r--)
        result = ((result * powmod(r,(M-2))) % M);
    return result;
}
long long compute(int n, int k)
{
    int i;
    long long result = 0;
    i = (n - 2)/2;
    while(i > 0)
    {
        result = ((result + ((((ncr((n-2-i),i) * powmod(k,(i+1)))%M) * powmod((k-1),(n-2-(2*i))))%M) )%M);
        i--;
    }
    result = ((result + ((k * powmod((k-1),(n-2))) % M)) % M);
    return result;
}

long long powmod(int a, long long b)
{
    long long result = 1;
    while(b--)
    {
        result = ((result * a) % M);
    }
    return result;
}
