#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 20

int main(){
    int i;
    int vt[N];
    int* puntero = vt;

    srand(time(NULL));

    for(i = 0; i < N; i++)
    {
        *puntero = 1 + rand() % 100;
        printf("%d ", *puntero);
        puntero++;
    }

    return 0;
}
