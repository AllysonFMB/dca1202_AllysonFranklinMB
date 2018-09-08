#include<stdio.h>
#include<stdlib.h> //para usar a função qsort

//Função "compare" é um ponteiro para uma função que compara dois elementos.
//Esta função é chamada repetidamente por qsort para comparar dois elementos.
int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}
//Tomando dois ponteiros como argumentos (ambos convertidos para const void * ).
//A função define a ordem dos elementos retornando (de maneira estável e transitiva).

int main (){

    float *pont; //ponteiro para array.
    int i,n; //interador e quantidade de valor que desejam.

    printf("Informe a quantidade de valores:");//Imprimo na tela a informação.
    scanf("%d", &n); //usuário irá digitar o valor.

    pont = (float*) malloc(sizeof(float)*n); //Alocação dinámica de memória do ponteiro para array.


    for(i = 0; i < n; i++){
        scanf("%f", &pont[i]); //o usuário informa os valores para o array.
    }

    printf("\nValores alocados:\n");
    for(i = 0; i < n; i++){      //Imprimo a sequência dos números na ordem que foi digitado.
        printf("%f, ", pont[i]);
    }

   printf("\nOrdem crescente: \n");
   qsort (pont, n, sizeof(int), compare); //uso do qsort( valor que queremos organizar, tamanho
    for(i = 0; i < n; i++){              //                      e função de comparação).
        printf(" %f ", pont[i]);
    }
    free(pont); //liberar a memória da alocação.
    return 0 ;
}
