#include <stdio.h>
#include <stdlib.h>

float choose(float n, float r);

int main()
{
    float temp;
    temp = choose(1000,500);
    printf("%f",temp);
    return 0;
}

float choose(float n, float r){
    float i, j, result = 1;
        if(r > n / 2){
           for(i = n, j = (n - r); j > 0; i--, j--){
               result *= (i / j);
            }
        }
        else{
            for(i = n, j = r; j > 0; i--, j--){
               result *= (i / j);
            }
        }
    return result;
}
