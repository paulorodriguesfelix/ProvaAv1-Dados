#include <stdio.h>
/*Estruture os dados, usando condicionais e laços de repetição ou outros.
Faça um programa que inserido um número inteiro, mostre todos os números
ímpares menores e/ou iguais a esse número inserido e maiores ou igual a um.
Assuma: o número inserido será positivo. */


int main()
{
   int n541;
   int i541
   printf("Digite um número inteiro: ");
   scanf("%d", &n541);
   printf("Números ímpares menores: \n");
   
   for(i541 =0; i541 < n541; i541++){
       if( i541 % 2 == 1){
        printf("%d\n ", i541);   
       }
       
   }

}
