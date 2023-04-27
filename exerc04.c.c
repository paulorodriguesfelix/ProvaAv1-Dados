#include <stdio.h>
/*Faça um programa que solicite dois números inteiros ao usuário e que apresente na
tela como resultado o dobro desses números que devem ser somados e o resultado
da soma devem ser triplicados.
Deve possuir uma função para dobrar o valor de um número, outra para somar dois
números e uma terceira para triplicar um número.
*/
int dob541(int n541) {
    return n541 * 2;
}


int som541(int x541, int y541) {
    return x541 + y541;
}


int tri541(int n541) {
    return n541 * 3;
}

int main() {
    int x541, y541;
    int dobro541, dobro2541, soma541, res541;


    printf("Digite o primeiro número: ");
    scanf("%d", &x541);

    printf("Digite o segundo número: ");
    scanf("%d", &y541);


    dobro541 = dob541(x541);
    dobro2541 = dob541(y541);


    soma541 = som541(dobro541, dobro2541);


    res541 = tri541(soma541);

    printf("Dobro de %d + Dobro de %d é %d.\n", x541, y541, soma541);
    printf("triplo: %d.\n", res541);

    return 0;
}