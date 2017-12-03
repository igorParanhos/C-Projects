#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){

    unsigned int m1[3][3], m2[3][3], mr[3][3], r, c;


    for(r=0; r<3; r++){
        for(c=0; c<3; c++){
            m1[r][c] = rand()%100;
            m2[r][c] = rand()%100;
            mr[r][c] = m1[r][c]-m2[r][c];
        }
    }

//    for(r=0; r<3; r++){
//        for(c=0; c<3; c++){
//            printf(" %d |", m1[r][c]);
//        }
//        printf("\n");
//    }
//    for(r=0; r<3; r++){
//        for(c=0; c<3; c++){
//            printf(" %d |", m2[r][c]);
//        }
//        printf("\n");
//    }
    for(r=0; r<3; r++){
        for(c=0; c<3; c++){
            printf(" %d |", mr[r][c]);
        }
        printf("\n");
    }


    return 0;
}
