#include <stdio.h>

void main(){

    int casa[10] = {10,20,30,40,50,60,70,80,90,100};
    int x;
    int total = 0;

    for ( x = 0; x < 10; x++)
    total = total + casa[x];
    {
        printf("%d\n", total);
    }
    
}