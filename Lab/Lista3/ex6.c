#include<stdio.h>
#include<stdlib.h>
#include <time.h>

int main(){
    int m[2][2], r, c, dp=0, ds=0, det=0;

    srand(time(NULL));

    for(r=0; r<2; r++){
        for(c=0; c<2; c++){
            m[r][c] = rand()%50;
            printf(" %2d |", m[r][c]);
        }
        printf("\n");
    }

    //diagonal principal
    c=0;
    for(r=0; r<2; r++){
        dp += m[r][c];
        c++;
    }

    //diagonal secundária
    c=1;
    for(r=0; r<2; r++){
        ds += m[r][c];
        c--;
    }

    det = dp - ds;

    printf("Valor do Determinante: %d", det);

    return 0;
}
