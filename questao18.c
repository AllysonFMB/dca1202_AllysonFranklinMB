#include<stdio.h>
#include<stdlib.h>

void soma(float *ptr3, float *ptr1, float *ptr2, int n){
    int i;
    for(i = 0; i< n; i++){
        ptr3[i]= ptr1[i]+ptr2[i];
    }
}

int main (){
    void (*PTR)(float*, float*,float*, int);
    PTR = &soma;
    int i,n;
    float *ptr3; float *ptr1; float *ptr2;
    printf("numero de termos:\n");
    scanf("%d", &n);
    
    ptr1 = (float*)malloc(n*sizeof(float));
    ptr2 = (float*)malloc(n*sizeof(float));
    ptr3 = (float*)malloc(n*sizeof(float));
    
    printf("Primeiro vetor:\n ");
    for(i=0; i<n; i++){
        scanf("%f", &ptr1[i]);
    }
    
    printf("Segundo vetor:\n ");
    for(i=0; i<n; i++){
        scanf("%f", &ptr2[i]);
    }
    
    (*PTR)(ptr3,ptr1,ptr2,n);
    
    printf("Terceiro vetor: ");
    for(i=0; i<n; i++){
        printf("%f, ", ptr3[i]);
    }
    
    free(ptr1);
    free(ptr2);
    free(ptr3);
    return 0;
}
