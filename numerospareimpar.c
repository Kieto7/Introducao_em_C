/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<stdlib.h>
int
main ()
{
  printf ("Escolha dois numeros");
  int a, b;

  printf ("Digite um numero :");
  scanf ("%d", &a);

  printf ("Digite outro numero :");
  scanf ("%d", &b);
  if ((a % 2 == 0) && (b % 2 == 0));
  printf ("o primeiro e o segundo sao pares");
  system ("return 0");
  system ("pause");
  if ((a % 3 == 0) && (b % 3 == 0));
  printf ("o primeiro e o segundo numero sao impares");
  system ("return 0");
  system ("pause");
  if ((a % 3 == 0) && (b % 2 == 0));
  printf ("O primeiro valor e impar e o segundo e par");
  system ("return 0");
  system ("pause");
  if ((a % 2 == 0) && (b % 3 == 0));
  printf (("o primeiro valor e par e o segundo valor e impar"));
  system ("pause");
  
}
