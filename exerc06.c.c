#include <stdio.h>
/*Estruture os dados, usando Funções e Vetor ou outros.
Faça um programa que solicite as notas de quatro alunos ao usuário e apresente na
tela a menor e a maior nota.
Deve possuir uma função para verificar a menor e a maior nota dos alunos
possuindo um vetor de entrada.
*/

float maior541(float n541[], int t541) {
    float maior541 = n541[0];

    for (int i541 = 1; i541 < t541; i541++) {
        if (n541[i541] > maior541) {
            maior541 = n541[i541];
        }
    }

    return maior541;
}


float menor541(float n541[], int t541) {
    float menor541 = n541[0];

    for (int i541 = 1; i541 < t541; i541++) {
        if (n541[i541] < menor541) {
            menor541 = n541[i541];
        }
    }

    return menor541;
}

int main() {
    float n541[4];
    float mai541;
    float men541;

    for (int i541 = 0; i541 < 4; i541++) {
        printf("Digite a nota do aluno %d: ", i541+1);
        scanf("%f", &n541[i541]);
    }

    mai541 = maior541(n541, 4);
    men541 = menor541(n541, 4);

    printf("Maior nota é: %.2d\n", mai541);
    printf("Menor nota é: %.2d\n", men541);

    return 0;
}