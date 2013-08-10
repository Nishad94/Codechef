#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LIMIT 25001

int search_C_in_X(void);
int search_string(void);
int search_char(void);

int comparator(const void * a, const void * b){
  char c1 = *(char*)a;
  char c2 = *(char*)b;
  return c1 - c2;
}

char M[LIMIT], W[LIMIT];
int i, j=0;

int main()
{
    int T;
    scanf("%d",&T);
    while(T--){
         scanf("%s %s",X,C);

         if(search_C_in_X())
             printf("YES\n");

         else
            printf("NO\n");

        current_pos=0;
    }
    return 0;
}

int search_C_in_X(void){
    j=0;
   if(strcmp(X,C)){
       qsort(X,strlen(X),sizeof(char),comparator);
       qsort(C,strlen(C),sizeof(char),comparator);
       //printf("%s\n%s\n",X,C);
       if(search_string())
       return 1;
       else
       return 0;
   }
   else
   return 1;
}

int search_string(void){
  int l1 = strlen(C);
  for(i = 0; i < l1; i++){
      if(search_char())
      ;
      else
      return 0;
  }
  return 1;
}

int search_char(void){
     int l2 = strlen(X);
     while(j < l2){
         if(X[j] == C[i]){
             j++;
             return 1;
         }
         j++;
     }
     return 0;
}
