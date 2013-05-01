#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    long a, n;
    scanf("%d",&t);
    while(t > 0)
    {
        scanf("%li",&n);
        a = ((n / 2) + 1);
        printf("%li\n",a);
        t--;

    }
}
