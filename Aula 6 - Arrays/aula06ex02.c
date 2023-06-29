// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 2. Crie um programa que leia do teclado seis valores inteiros e em seguida mostre na
tela os valores lidos na ordem inversa.*/
#include <stdio.h>

int main() {
    int num, count, numVector[6];

    printf("Enter 6 integers: \n");
    for (count = 0; count < 6; count++) {
        printf("%d: ", count + 1);
        scanf("%d", &numVector[count]);
    }

    printf("In reverse order: ");
    for (count = 5; count > -1; count--) {
        printf("%d ", numVector[count]);
    }

    printf("\n");

    return 0;
}