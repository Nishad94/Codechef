#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define LIMIT 1000000

int main()
{
    FILE *out;
    long long i,primes[LIMIT], temp_root,temp, k;
    out = fopen("primes.txt","w");
    for(i = 0; i<= LIMIT; i++)
    primes[i] = i;
    primes[0] = -1;
    primes[1] = -1;
    temp_root = sqrt(LIMIT);
    for(i = 2; i <= temp_root; i++){
       for(k = i; (temp = i * k) <= LIMIT; k++)
           primes[temp] = -1;
    }
    for(i = 2; i <= LIMIT; i++){
        if(primes[i] == -1)
        ;
        else
        fprintf(out,"%lld, ",primes[i]);
    }
    return 0;
}


