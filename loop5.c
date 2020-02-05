#include <stdio.h>

void main(){

    int tabuada = 0;
    int total = 0;
    printf("Digite a tabuada que você deseja: ");
    scanf("%d", &tabuada);

    for(int x = 1; x<=10; ++x){
       total= x * tabuada;
        printf("%dx%d = %d \n", x, tabuada, total);

    }

    
    
}