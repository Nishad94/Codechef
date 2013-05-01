#include <stdio.h>
#include <stdlib.h>

int largest(int a, int b);
int rows, z[100][100],cache[101][101];
int main()
{
    int t,k,i,j;//o=1;
    scanf("%d",&t);
    while(t--)
    {
        memset(cache, -1, sizeof(cache[0][0]) * 100 * 100);
        scanf("%d",&rows);
        //rows = o++;
        for(k = 1,i = 0; i < rows; i++)
        {
            for(j = 0 ; j < k;j++)
            {
                scanf("%d",&z[i][j]);
                //z[i][j] = 1;
            }
            k++;
        }
        for(i = rows - 2;i >= 0;i--)
        {
            for(j = 0;j <= i;j++)
            {
                //if(i == (rows - 2))
                z[i][j] = z[i][j] + ((z[i+1][j] > z[i+1][j+1]) ? z[i+1][j] : z[i+1][j+1]);
                /*else
                cache[i][j] = z[i][j] + ((cache[i+1][j] > cache[i+1][j+1]) ? cache[i+1][j] : cache[i+1][j+1]);*/
            }
        }
        //printf("%d\n",largest(0,0));
        printf("%d\n",z[0][0]);
    }
    return 0;
}

int largest(int a, int b)
{
    int l,m;
    if(cache[a][b] != -1)
    return(cache[a][b]);
    else if(a == rows)
    {
    cache[a][b] = z[a][b];
    return(z[a][b]);
    }
    else
    {
     l = largest(a+1,b);
     m = largest(a+1,b+1);
     if(l > m)
     {
     cache[a][b] = z[a][b] + l;
     return(cache[a][b]);
     }
     else
     {
     cache[a][b] = z[a][b] + m;
     return(cache[a][b]);
     }
    }
}
