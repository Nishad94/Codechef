//Small Factorial: Program to calculate factorial of numbers uptill 100
//CodeChef problem code: FCTRL2 [FINAL PROGRAM]
//Trial: Multiplication of 2 numbers using created data type
// time taken to complete program with debugging/testing = 4 hours
#include <stdio.h>
int main()
{

    int /*a[100][3]*/result[170], i, j, num, p, t, carry = 0,flag = 1,cases;
    /*for(i = 0; k <= 100; k++,i++)
    {
        for(j = 0,num = k; j < 3; j++)
        {
            a[i][j] = num % 10;
            num = num / 10;
        }
    }*/
   scanf("%d",&cases);
   for(; cases > 0; cases--)
   {
   scanf("%d", &num);
   result[0] = 1;
   for(i = 1; i < 170; i++)
   result[i] = 0;
    for(p = 1; p <= num; p++)
    {
        flag = 1;
        for(j = 0; flag == 1; j++)
        {
            t = p * result[j] + carry;
            result[j] = t % 10;
            carry = t / 10;
            if(j > 0 && result[j] == 0 && carry == 0 && result[j-1] != 0 && result[j+1] == 0)
                flag = 0;
        }
    }
    for(j = j - 2; j >= 0; j--)
    printf("%d",result[j]);
    printf("\n");
   }



    /*for(j = 0,l = 0; dummy > 0; j++,l++)
    {
        if(j > 2)
        {
        temp = carry;
        t = temp % 10;
        result[l] = t;
        carry = temp / 10;
        dummy = carry;
        }

        else
        {
        temp = (num * a[num - 2][j]) + carry;
        t = temp % 10;
        result[l] = t;
        carry = temp / 10;
        dummy = carry;
        }
    } */
    return 0;
}

/*Clean code without comments:
#include <stdio.h>

int main()
{

    int result[170], i, j, num, p, t, carry = 0,flag = 1,cases;
    scanf("%d",&cases);
   for(; cases > 0; cases--)
   {
   scanf("%d", &num);
   result[0] = 1;
   for(i = 1; i < 170; i++)
   result[i] = 0;
    for(p = 1; p <= num; p++)
    {
        flag = 1;
        for(j = 0; flag == 1; j++)
        {
            t = p * result[j] + carry;
            result[j] = t % 10;
            carry = t / 10;
            if(j > 0 && result[j] == 0 && carry == 0 && result[j-1] != 0 && result[j+1] == 0)
                flag = 0;
        }
     }
    for(j = j - 2; j >= 0; j--)
    printf("%d",result[j]);
    printf("\n");
   }
   return 0;
   }
   */
