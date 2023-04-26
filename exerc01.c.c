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
    float valor541;
    float desconto541;
    float total541;
    printf("Digite o valor da compra: R$ ");
    scanf("%f", &valor541);
    
    if(valor541 <= 5000){
        desconto541 = valor541 * 12 / 100;
        total541 = valor541 - desconto541;
        
    } else if(valor541 > 5000 && valor541 <= 8000){
        desconto541 = valor541 * 7 / 100;
        total541 = valor541 - desconto541;
        
    } else if(valor541 > 8000 && valor541 <= 10000){
        desconto541 = valor541 * 4 / 100;
        total541 = valor541 - desconto541;
        
    } else {
        desconto541 = valor541 * 3 / 100;
        total541 = valor541 - desconto541;
        
    }
    printf("Valor do desconto: %.2f\n", desconto541);
    printf("Valor Total a se pagar: %.2f", total541);

}
