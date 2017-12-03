#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){

    float m[12][13], res[12][13];
    int  maior, r, c;

    printf("Matrix Origem\n\n");
    for(r=0; r<12; r++){
        for(c=0; c<13; c++){
            m[r][c] = rand()%20;
            maior = (c==0 || sqrt(pow(m[r][c], 2))>maior) ? m[r][c] : maior;
            printf(" %3.0f |", m[r][c]);
        }
        for(c=0; c<13; c++){
            res[r][c] = m[r][c]/maior;
        }
        printf("\n");
    }

    printf("\nMatriz Resultante\n\n");
    for(r=0; r<12; r++){
        for(c=0; c<13; c++){
            printf(" %.2f |", res[r][c]);
        }
        printf("\n");
    }

    return 0;
}
