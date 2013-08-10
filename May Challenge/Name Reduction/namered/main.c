#include <stdio.h>
#include <stdlib.h>

void clear(void);

int letters_in_X[124];

int main()
{
    int T, children, letter_not_found;
    int c;
    scanf("%d",&T);
    getchar();
    while(T--){
       clear(); //resets all letter counts to 0
       letter_not_found = 0;
       while((c = getchar()) != '\n'){
             if(c == ' ')
             ;
             else
             letters_in_X[c]++; //increase letter count by 1

       }
       scanf("%d",&children);
       getchar();
       while(children--){
           while((c = getchar()) != '\n'){
               //if(!letter_not_found){
               letters_in_X[c]--; //letter used up, hence decrease letter count by 1
               if(letters_in_X[c] < 0)
               letter_not_found = 1; //letter not found
               //}
           }
       }
       if(letter_not_found)
         printf("NO\n");
       else
         printf("YES\n");
    }
    return 0;
}

void clear(void){
int i;
for(i = 0; i < 124; i++)
   letters_in_X[i] = 0;
}
//http://ww2.codechef.com/MAY13/submit/NAME1/
