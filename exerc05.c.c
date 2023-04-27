#include <stdio.h>
/*Estruture os dados, usando Funções ou outros.
Faça um programa que solicite ao usuário a idade de três pessoas e apresente na
tela a maior e a menor idade.
Deve possuir uma função para verificar qual é a maior idade e outra para verificar a
menor idade.
*/


int maior541(int a541, int b541, int c541) {
    int maior541 = a541;

    if (b541 > maior541) {
        maior541 = b541;
    }

    if (c541 > maior541) {
        maior541 = c541;
    }

    return maior541;
}

int menor541(int a541, int b541, int c541) {
    int menor541 = a541;

    if (b541 < menor541) {
        menor541 = b541;
    }

    if (c541 < menor541) {
        menor541 = c541;
    }

    return menor541;
}

int main() {
    int a541, b541, c541;
    int mai541, men541;

  
    printf("Digite a idade da primeira pessoa: ");
    scanf("%d", &a541);

    printf("Digite a idade da segunda pessoa: ");
    scanf("%d", &b541);

    printf("Digite a idade da terceira pessoa: ");
    scanf("%d", &c541);

   
    mai541 = maior541(a541, b541, c541);
    men541 = menor541(a541, b541, c541);


    printf("A maior idade é: %d\n", mai541);
    printf("A menor idade é: %d\n", men541);

    return 0;
}