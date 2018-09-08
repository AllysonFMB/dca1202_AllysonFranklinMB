#include<stdio.h> 
#include<stdlib.h> 

void OrdemCrescente (float n, float *pont){
    int aux, i, j;
    for(i = 0; i < n; i++){
        for(j = 0; j < n-1; j++){
            if(pont[j]>pont[j+1]){
                aux = pont[j];
                pont[j] = pont[j+1];
                pont[j+1] = aux;
            }
        }
    }
}

int main (){
    float *pont;
    int i,n;
    printf("Informe a quantidade de valores:");
    scanf("%d", &n);

    pont = (int*) malloc(sizeof(int)*n);
    for(i = 0; i < n; i++){
        scanf("%f", &pont[i]);
    }
    printf("\nValores alocados:\n");
    for(i = 0; i < n; i++){
        printf("%f, ", pont[i]);
    }
    printf("\nOrdem crescente: \n");
   OrdemCrescente(n, pont);
    for(i = 0; i < n; i++){
        printf(" %f ", pont[i]);
    }
    free(pont);
    return 0 ;
}

