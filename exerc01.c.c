#include <stdio.h>
/*Estruture os dados, usando condicionais ou outros.
Faça um programa que calcule o desconto de uma compra efetuada obedecendo os
seguintes requisitos:
• 12% de desconto se a compra for menor ou igual que R$5.000,00;
• 7% de desconto se a compra for maior que R$ 5.000,00 e menor ou igual a R$
8.000,00;
• 4% de desconto se for maior que R$ 8.000,00 e menor ou igual a R$
10.000,00;
• 3% de desconto para compras acima de R$ 10.000,00.
No final deverá mostrar o desconto equivalente e o total a pagar.  */


int main()
{
    float valor;
    float desconto;
    float total;
    printf("Digite o valor da compra: R$ ");
    scanf("%f", &valor);
    
    if(valor <= 5000){
        desconto = valor * 12 / 100;
        total = valor - desconto;
        
    } else if(valor > 5000 && valor <= 8000){
        desconto = valor * 7 / 100;
        total = valor - desconto;
        
    } else if(valor > 8000 && valor <= 10000){
        desconto = valor * 4 / 100;
        total = valor - desconto;
        
    } else {
        desconto = valor * 3 / 100;
        total = valor - desconto;
        
    }
    printf("Valor do desconto: %.2f\n", desconto);
    printf("Valor Total a se pagar: %.2f", total);

}