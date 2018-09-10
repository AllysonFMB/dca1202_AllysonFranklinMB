#include<stdio.h>
#include<stdlib.h>

void multMatriz(int **ptrC, int **ptrA, int **ptrB, int nlA, int ncA, int ncB){
    int i,j,k;
    int aux;

    for(i=0; i<nlA; i++){
        for(j=0; j<ncB;j++){
            aux = 0;
            for(k=0;k <ncA; k++){
                aux = aux+ ptrA[i][k]*ptrB[k][j];
            }
            ptrC[i][j] = aux;

        }
    }
}
void printando (int **ptrC, int nl, int nc){
    int i,j;
    for(i=0;i<nl; i++){
        for(j=0;j<nc;j++){
            printf("%d  ", ptrC[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    void (*PTR)(int*, int*,int*, int, int, int);
    PTR = &multMatriz;
    int i,j,k,nlA,ncA,ncB;
    int **ptrA, **ptrB, **ptrC;

    printf("Informe o numero de linhas da Matriz A: ");
    scanf("%d", &nlA);
    printf("Informe o numero de colunas da Matriz A: ");
    scanf("%d", &ncA);
    printf("Informe o numero de colunas da Matriz B: ");
    scanf("%d", &ncB);

    ptrA = (int**)malloc(nlA*sizeof(int*));
    for(i=0; i<nlA; i++){
        ptrA[i]=(int*)malloc(ncA*sizeof(int));
    }

    ptrB = (int**)malloc(ncA*sizeof(int*));
    for(i=0; i<nlA; i++){
        ptrB[i]=(int*)malloc(ncB*sizeof(int));
    }

    ptrC = (int**)malloc(nlA*sizeof(int*));
    for(i=0; i<nlA; i++){
        ptrC[i]=(int*)malloc(ncB*sizeof(int));
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

    for(i=0; i<nlA; i++){
      free(ptrA[i]);
    }
    for(i=0; i<nlA; i++){
      free(ptrB[i]);
    }
    for(i=0; i<nlA; i++){
      free(ptrC[i]);
    }

    free(ptrA);
    free(ptrB);
    free(ptrC);

    return 0;
}

