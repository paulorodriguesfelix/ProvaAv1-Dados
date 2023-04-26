#include <stdio.h>
/*Estruture os dados, usando condicionais e laços de repetição ou outros.
Faça um programa que inserido um número inteiro, mostre todos os números
ímpares menores e/ou iguais a esse número inserido e maiores ou igual a um.
Assuma: o número inserido será positivo. */


int main()
{
   int n;
   int impar;
   printf("Digite um número inteiro: ");
   scanf("%d", &n);
   printf("Números ímpares menores: \n");
   
   for(int i =0; i < n; i++){
       if( i % 2 == 1){
        printf("%d\n ", i);   
       }
       
   }

}