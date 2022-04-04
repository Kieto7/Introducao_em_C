#include <stdio.h>
#include<stdlib.h>
int main(void){
    printf("Some dois números.");
    int a, b, soma;
    
    printf ("Digite um número inteiro:");
    scanf("%d", &a);
    
    printf ("Digite outro número inteiro:");
    scanf ("%d", &b);
    soma = a+b;
    printf ("O valor da soma = %d\n", soma);
    
    system ("pause");
}