#include<stdio.h>
#define M 2
#define N 3
#define P 4

int main(){

    int a[M][N] = {
        {1,2,3},
        {4,5,6}
    };
    int b[N][P] = {
        {1,2,3,4},
        {2,4,6,8},
        {3,5,7,9}
    };

    int c[M][P];

    for(int i = 0; i<M; i++){
        for(int j = 0; j < P; j++){
            //c[i][j] = 
            int sum = 0;
            for(int k = 0; k<N; k++){
                sum += a[i][k] * b[k][j];
            }
            c[i][j] = sum;
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
    return 0;

}