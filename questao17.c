Utilizando o função do qsort obtive o tempo de 3ms
e usando o meu qsort obtive o tempo 1181ms. 

Sistema de cálculo dos tempos. 

#include <stdio.h>
#include <time.h>
int main(void)
{
    clock_t Ticks[2];
    Ticks[0] = clock();
    //O código a ter seu tempo de execução medido ficaria neste ponto.
    Ticks[1] = clock();
    double Tempo = (Ticks[1] - Ticks[0]) * 1000.0 / CLOCKS_PER_SEC;
    printf("Tempo gasto: %g ms.", Tempo);
    getchar();
    return 0;
}