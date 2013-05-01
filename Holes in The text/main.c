#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t,holes;
    char c;
    /*char a[6];
    a[6] = {A, D, O, P, Q, R};*/
    scanf("%d",&t);
    getchar();
    while(t>0)
    {
        holes = 0;
        while((c=getchar()) != '\n') //Limit of 100 characters, capitalization condition excluded for now.
        {
            if(c == 'B')
            holes = holes + 2;
            else if(c == 'A' || c == 'D' || c == 'O' || c == 'P' || c == 'Q' || c == 'R')
            holes = holes++;
            else
            ;
        }
        printf("%d\n",holes);
        t--;
    }
    return 0;
}
