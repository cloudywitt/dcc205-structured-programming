// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 11. Escreva uma função que receba por parâmetros dois valores inteiros x e y e calcule e
retorne o resultado de x elevado a y para o programa principal. Não use nenhuma função pronta
para isso.*/
#include <stdio.h>

int myPow(int x, int y) {
    int result = 1;

    if (y > 0) {
        for (int i = 0; i < y; i++) {
            result *= x;
        }
    }

    return result;
}

int main() {
    int base, power;

    printf("Enter the base: ");
    scanf("%d", &base);

    printf("Enter the power (>= 0): ");
    scanf("%d", &power);

    int result = myPow(base, power);

    printf("%d raised to the power of %d is %d\n", base, power, result);

    return 0;
}