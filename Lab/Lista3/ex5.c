#include<stdio.h>
#include<stdlib.h>

int main(){

    int m[3][5], res[5]={0}, r, c;

    for(r=0; r<3; r++){
        printf("   %d   |", r);
        for(c=0; c<5; c++){
            //m[r][c] = rand()%100;
            scanf("%d", &m[r][c]);

            res[c] += m[r][c];
            printf(" %3d |", m[r][c]);
        }
        printf("\n");
    }

    printf(" Res   |");

    for(c=0; c<5; c++){
        printf(" %3d |", res[c]);
    }


    return 0;
}
