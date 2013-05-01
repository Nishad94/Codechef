#include<stdio.h>
int main()
{
    long a;
    int n,k ;
    scanf("%ld %d %d",&a,&n,&k);
    for( ; k > 0; k--)
    {
        printf("%d ", a % (n+1));
        a = a/(n+1);
    }
    return 0;
    }
