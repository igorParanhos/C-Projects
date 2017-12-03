#include<stdio.h>
#include<stdlib.h>

int main(){

    int r, c, min_row, minmax_col;
    float min_val, minmax_val, matriz[4][7]={{12,32,44,12,22,45,66},{51,3,4,89,42,467,6},{2,32,414,99,22,55,33},{99,55,423,134,77,12,44}};


    min_row = 0;
    min_val = matriz[0][0];

    for(r=0; r<4; r++){

        printf("%d  |", r);
        for(c=0; c<7; c++){
            printf(" %.2f |", matriz[r][c]);

            min_row = (matriz[r][c]<min_val) ? r : min_row;
            min_val = (matriz[r][c]<min_val) ? matriz[r][c] : min_val;
        }
        printf("\n");
    }

    for(c=0; c<7; c++){

        minmax_col = (matriz[min_row][c]>minmax_val) || (c==0) ? c : minmax_col;
        minmax_val = (matriz[min_row][c]>minmax_val) || (c==0) ? matriz[min_row][c] : minmax_val;

    }

    printf("minmax: %f | linha : %d | coluna : %d\n", minmax_val, min_row, minmax_col);

    getchar();
    return 0;
}
