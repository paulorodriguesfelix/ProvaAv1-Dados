#include <stdio.h>
/*Faça um programa que leia dez números que representem as notas de dez alunos, e
no final apresente as seguintes informações:
• a soma dos números;
• a média dos números;
• o maior número;
• o menor número.
Assuma: As notas são informadas corretamente no intervalo de 1 a 10.*/
int main() {
    float n541[10];
    int i541;
    float soma541;
    float media541;
    float maior541;
    float menor541;

  
    for (int i541 = 0; i541 < 10; i541++) {
        printf("Digite a nota do aluno %d: ", i541+1);
        scanf("%f", &n541[i541]);

        soma541 += n541[i541];
        
        if (n541[i541] > maior541) {
            maior541 = n541[i541];
        }
        if (n541[i541] < menor541) {
            menor541 = n541[i541];
        }
    }
    
    media541 = soma541 / 10.0;

    
    printf("Soma: %.2f\n", soma541);
    printf("Média: %.2f\n", media541);
    printf("Maior nota: %.2f\n", maior541);
    printf("Menor nota: %.2f\n", menor541);

    return 0;
}