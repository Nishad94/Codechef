#include <stdio.h>
#include <stdlib.h>
#define N 100001
int main()
{
    int x, j, i, a[N], b[N],f = 1;
    while(1)
    {
        f = 1;
        scanf("%d",&x);
        if(x == 0)
        break;
        else
        {
        for(i = 0; i < x; i++)
        {
        scanf("%d",&j);
        a[i] = j;
        b[j-1] = i + 1;
        }
        a[x] = '\0';
        b[x] = '\0';
        for(i = 0; i < x; )
        {
            if(a[i] == b[i])
                i++;
            else
            {
            f = 0;
            break;
            }
        }
        if(f == 1)
        printf("ambiguous\n");
        else
        printf("not ambiguous\n");
        }

    }
    return 0;
}
