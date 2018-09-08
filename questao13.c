//Em C e C++, além de ponteiros normais é possível criar ponteiros para funções. 
//Assim como um ponteiro normal aponta para uma região de memória de onde você pode ler ou escrever um valor, 
//um ponteiro para função aponta para uma função, que pode ser chamada como uma função normal.

#include<stdio.h>

int soma(int a , int b){
    return a+b;
}

int main (){
    
    int (*SUM_)(int , int ); 
    SUM_ = &soma; 
    
    printf("Funcao soma: %d\n", soma(3,4));
    printf("Ponteiro para funcao: %d\n ", SUM_(4,4));
    return 0;
}
