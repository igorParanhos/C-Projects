#include<stdio.h>
#include<stdlib.h>
#include <time.h>

int main(){

    int n[100][10], r, c;
    int rows = sizeof(n)/sizeof(int)/10;
    int pont[rows];


    char res[4] = {'a','b','c','d'}, gab[10] = {'d','a','d','b','d','c','b','b','a','c'};

    srand((unsigned) time(NULL));

    printf("GABARITO\n");


    printf(" ----------------------------------------\n|");
    for(c=0; c<10; c++){
        printf(" %c |", gab[c]);
    }
    printf("\n ----------------------------------------\n\n");

    printf("RESPOSTAS\n\n");

    //preenche notas
    for(r=0; r<rows; r++){
        pont[r] = 0;
        for(c=0; c<10; c++){
            n[r][c] = res[rand()%4];
        }
    }

    //compara notas
    for(r=0; r<rows; r++){
        for(c=0; c<10; c++){
            pont[r] = n[r][c]==gab[c] ? pont[r]+1 : pont[r];
        }
    }

    //exibe matriz
    for(r=0; r<rows; r++){
        printf(" %2d |", r);
        for(c=0; c<10; c++){
            printf(" %c |", n[r][c]);
        }
        printf(" %d |\n", pont[r]);
    }

    return 0;
}
