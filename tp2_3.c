#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 5
#define M 7

int main (){
    int i,j;
    int mt[N][M];
    int* puntero = &mt[N][M];

    srand(time(NULL));

    for(i = 0;i<N; i++)
    {
        for(j = 0;j<M; j++)
        {
            *(puntero + (i * 7 + j)) = 1 + rand() % 100;
            printf("%i ", *(puntero + (i * 7 + j)));
        }
        printf("\n");
    }
}