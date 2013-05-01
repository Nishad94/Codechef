#include <stdio.h>
#include <stdlib.h>
#define N 1000000

void mergesorta(long a[],long p,long r);
void merge(long a[],long p,long q,long r);

long a[N], temp[N];

int main()
{
    long i,t;
    scanf("%li",&t);
    for(i = 0; i < t; i++)
    scanf("%li", &a[i]);
    mergesorta(a,0,(t-1));
    for(i = 0; i < t; i++)
    printf("%li\n", a[i]);
    return 0;
}

void mergesorta(long a[],long p,long r)
{
    long q;
    q = (p + r) / 2;
    if(p == r)
    merge(a,p,q,r);
    else
    {
        mergesorta(a,p,q);
        mergesorta(a,q+1,r);
        merge(a,p,q,r);
    }
}

void merge(long a[],long p,long q,long r)
{
    long i, j, k, t1, t2 = (r + 1);
    i = p;
    j = q+1;
    for(t1 = i; t1 < t2; t1++)
    temp[t1] = a[t1];
    for(k = p; k < t2; k++)
    {
        if(i > q)
        {
        a[k] = temp[j];
        j++;
        }
        else if(j > r)
        {
        a[k] = temp[i];
        i++;
        }
        else
        {
        if(temp[i] < temp[j])
        {
            a[k] = temp[i];
            i++;
        }
        else
        {
            a[k] = temp[j];
            j++;
        }
        }
    }
}
