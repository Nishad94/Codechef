#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LIMIT 25001

int subsequence(void);
int search(int ID, int pos);

char M[LIMIT], W[LIMIT];
int current_pos=0;

int main()
{
    int T;
    scanf("%d",&T);
    while(T--){
         scanf("%s %s",M,W);

         if(subsequence())
             printf("YES\n");

         else
            printf("NO\n");

        current_pos=0;
    }
    return 0;
}

int subsequence(void){
int length_M, length_W, i, smaller,send_to_search, temp;
int prev_position = -1;
length_M = strlen(M);
length_W = strlen(W);
if(strcmp(M,W)){
  if(length_M < length_W){
     smaller = length_M;
     send_to_search = 1;
     }
     else{
        smaller = length_W ;
        send_to_search = 0;
     }

  for(i = 0; i < smaller; i++) {
        temp = search(send_to_search,i);
        if(temp == -2)
        break;
        else{
          current_pos = temp + 1;
        }
    }

if(i == smaller)
   return 1;

else
   return 0;
}
else
return 1;
}

int search(int ID, int pos){
    int position_in_other;
    char * temp;

      if(ID == 1){ //M is shorter than W
          if((temp = strchr(W + current_pos,M[pos])) == NULL)
             return -2;
          else{
            position_in_other = (int)(temp - W);
            return position_in_other;
          }
      }

      else{
         if((temp = strchr(M + current_pos,W[pos])) == NULL)
             return -2;
          else{
            position_in_other = (int)(temp - M);
            return position_in_other;
          }
      }

}
