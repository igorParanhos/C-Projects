#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool isPresent(int num, int vetor[10]);

int main(){

    int num, v[10] = {1,22,32,11,21,33,44,23,122,12};
    printf("Digite um numero: ");
    scanf("%d", &num);

    (isPresent(num, v)) ? printf("O valor está presente!") : printf("O valor não está presente!");
    
    return 0;
}

bool isPresent(int num, int vetor[10]){
    int i;
    for(i=0; i < 10; i++){
        if(num == vetor[i])
            return true;
    }
    return false;
}
