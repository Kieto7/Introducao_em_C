#include <stdio.h>

int main()
{
    char nome[50], sobrenome[50], endereco[150], genero[15];
int idade;
    printf("Escreva seu nome\n ");
    gets (nome);
        printf ("Escreva seu sobrenome\n ");
        gets (sobrenome);
            printf("escreva seu endereco\n ");
            gets (endereco);
                printf("escreva seu genero\n ");
                gets (genero);
                    printf("qual a sua idade\n ");
                    scanf ("%d", &idade);

    return 0;
}

