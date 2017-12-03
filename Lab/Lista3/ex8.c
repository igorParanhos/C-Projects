#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){

    int m[5][5] = {{1,3,5,7,8},{12,15,22,33,37},{40,45,49,50,54},{60,67,70,74,84},{88,89,90,91,92}};
    int search, r, c, exist=0;

    printf("Digite um número para procurar na matriz: ");
    scanf("%d", &search);

    for(r=0; r<5; r++){
        for(c=0; c<5; c++){
            if(search==m[r][c]) exist=1;
        }
    }

    if(exist==1)
        printf("O número %d existe na matriz\n\n", search);
    else
        printf("O número %d NAO existe na matriz\n\n", search);

    return 0;
}
