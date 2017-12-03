#include<stdio.h>
#include<stdlib.h>


int max(int m[5][5]);

int main(){

    int max_n, m[5][5] = {{2,3,4,4,5},{23,11,23,44,2},{231,11,222,1,2},{33,22,55,366,34},{231,12,11,112,13}}, i, j, l=5, c;

    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            printf("  %4d |", m[i][j]);
        }
        printf("\n");
    }

    max_n = max(m);
    printf("Max : %d\n", max_n);

    return 0;
}

int max(int m[5][5]){

    int i, j, l = 5, c = 5;
    int max = m[0][0];

    for(i = 0; i<l; i++){
        for(j = 0; j<c; j++){
            if(max<m[i][j])
                max = m[i][j];
        }
    }
    return max;
}
