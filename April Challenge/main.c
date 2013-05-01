#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t,n,k,i,j,z;
    long a[100], sum1,sum2,d1,d2,total,p;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        scanf("%d",&k);
        for(total = 0,i = 0; i < n; i++)
        {
        scanf("%ld",&a[i]);
        total += a[i];
        }
        for(i = 1; i < n; i++)
        {
            z = i;
            for(j = (i-1); j >=0 ; j--)
            {
                if(a[z] < a[j])
                {
                p = a[z];
                a[z] = a[j];
                a[j] = p;
                z = j;
                }
            }
        }
        for(sum1 = 0, sum2 = 0,i = 0; i < k; i++)
        {
            sum1 += a[i];
            sum2 += a[(n-i-1)];
        }
        d1 = total - (2*sum1);
        d2 = (2*sum2) - total;
        if(d1 > d2)
        printf("%ld\n",d1);
        else
        printf("%ld\n",d2);
    }
    return 0;
}
