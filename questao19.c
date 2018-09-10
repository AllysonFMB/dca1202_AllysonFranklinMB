#include<stdio.h>
#include<stdlib.h>

void multMatriz(float *ptrC, float *ptrA, float *ptrB, int nlA, int ncA, int ncB){
    int i,j,k;
    int *aux;
    
    for(i = 0; i< nlA; i++){
        for(j=0; j<ncB;j++ ){
            ptrC[i][j] = 0;
            for(k=0;k <ncA; k++){
                aux += ptrA[i][k] * ptrB[k][j];
            }
            ptrC = aux;
            aux=0;
        }
    }
}
void printando (int vetor[][], int nl, int nc){
    int i,j;
    for(i=0;i<nl; i++){
        for(j=0;j<nc;j++){
            printf("%d", vetor[i][j]);
        }
        printf("\n");
    }
}
int main (){
    void (*PTR)(float*, float*,float*, int, int, int);
    PTR = &multMatriz;
    int i,j,k,nlA,ncA,ncB;
    int *ptrA, *ptrB, *ptrC;
    
    printf("Informe o numero de linhas da Matriz A: ");
    scanf("%d", nlA);
    printf("Informe o numero de colunas da Matriz A: ");
    scanf("%d", ncA);
    printf("Informe o numero de colunas da Matriz B: ");
    scanf("%d", ncB);
    
    ptrA = (int**)malloc(nlA*sizeof(int*));
    for(i=0; i<nlA; i++){
        y[i]=(int*)malloc(ncA*sizeof(int));
    }
    
    ptrB = (int**)malloc(ncA*sizeof(int*));
    for(i=0; i<nlA; i++){
        y[i]=(int*)malloc(ncB*sizeof(int));
    }
    
    ptrC = (int**)malloc(nlA*sizeof(int*));
    for(i=0; i<nlA; i++){
        y[i]=(int*)malloc(ncB*sizeof(int));
    }
    
    for(i=0;i<nlA;i++){
        for(j=0;j<ncA;j++){
            ptrA[i][j] = rand()%10;
        }
    }
    
    for(i=0;i<ncA;i++){
        for(j=0;j<ncB;j++){
            ptrB[i][j] = rand()%10;
        }
    }
    
    (*PTR)(ptrC, ptrA, ptrB, nlA, ncA, ncB);
   
    printando(ptrA, nlA,ncA);
    printf("\n");
    printando(ptrB, ncA,ncB);
    printf("\n");
    printando(ptrC, nlA,ncB);
    
    free(ptrA);
    free(ptrB);
    free(ptrC);
    return 0;
}
