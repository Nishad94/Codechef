#include <stdio.h>
#include <stdlib.h>
#define LIMIT 1001000


long find_smallest_nsubtract(void);
double find_largest(void);

long match_time[LIMIT];
long L, R, num_of_matches, smallest_present;

int main()
{
    long i=0, Q;
    double largest;
    scanf("%ld",&num_of_matches);
    while(num_of_matches--)
    scanf("%ld",&match_time[i++]);
    num_of_matches = i;
    scanf("%ld",&Q);
    while(Q--){
    scanf("%ld %ld",&L,&R);
    smallest_present = find_smallest_nsubtract();
    largest = (find_largest() + (smallest_present));
    printf("%.1f\n",largest);
    }
    return 0;
}

long find_smallest_nsubtract(void){ //find smallest time between L and R, and subtract from the interval this num and divide by 2
  long i;
  long smallest = match_time[L];
  for(i = (L+1); i <= R; i++){
     if(match_time[i] < smallest)
     smallest = match_time[i];
  }
  /*for(i = L; i <= R; i++)
  temp[i] = (temp[i] - smallest) / 2;*/
  return smallest;
}

double find_largest(void){
 long i, largest1 = 0, temp_l2=0;
 double largest2;
 for(i = 0; i < num_of_matches; i++){
     if(i == L){
        while(i <= R){
           if(match_time[i] > temp_l2)
             temp_l2 = match_time[i];
           i++;
        }
        i--;
     }
     else{
     if(match_time[i] > largest1)
      largest1 = match_time[i];
     }
 }
 largest2 = temp_l2;
 largest2 = ((largest2 - (smallest_present)) * 0.5);
 if(largest2 > (largest1))
 return largest2;
 else
 return largest1;
}
