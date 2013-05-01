#include <stdio.h>

int main()
{
    int t, length;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&length);
        printf("%d\n",length - (length&1));
    }
    return 0;
}
