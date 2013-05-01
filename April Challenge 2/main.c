#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    long i,j,a[100001];
    a[0] = -1;
    for(i = 1; i < 100001; i++)
    a[i] = i;
    fp = fopen("primes.txt","w");
    for(i = 2; i < 50001 ; i++)
    {
        if(a[i] != -1)
        {
            for(j = 2; (j * a[i]) <= 100000; j++)
            {
                a[(j*a[i])] = -1;
            }
        }
    }
    for(i = 2; i < 100001; i++)
    {
        if(a[i] != -1)
        fprintf(fp,"%d,",a[i]);
    }


    return 0;
}
