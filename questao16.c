#include<stdio.h>
#include<stdlib.h>

int compare (float ptr [], int i)
{
    if(ptr[i] < ptr[i-1]){
        return 1;
    }
    else
        return 0;
}

void swap(float *a, float *b){
    float temp= *a;
    *a=*b;
    *b= temp;
}

void myqsort(float *vetor[],int n){
    int comparando;
    for(int i= 1; i< n;i++){
        for(int j = i;j > 0;j--){
            comparando = compare(vetor,j);
            if(comparando == 1 )
                swap(&vetor[j],&vetor[j-1]);
            else break;
        }
    }
}

void printando(float vetor[], int n){
    for(int i = 0; i<n;i++){
        printf("%f, ",vetor[i]);
    }
}

int main() {
    float *pont; //ponteiro para array.
    int i,n; //interador e quantidade de valor que desejam.
    
    printf("Informe a quantidade de valores:");//Imprimo na tela a informação.
    scanf("%d", &n); //usuário irá digitar o valor.
    
    pont = (float*) malloc(sizeof(float)*n); //Alocação dinámica de memória do ponteiro para array.
    
    
    for(i = 0; i < n; i++){
        scanf("%f", &pont[i]); //o usuário informa os valores para o array.
    }
    
    printf("\nValores alocados:\n");
    printando(pont,n);
    
    myqsort (pont,n);
    
    printf("\nOrdem crescente: \n");
    printando (pont,n);
    free(pont); //liberar a memória da alocação.
    
    return 0;
}
