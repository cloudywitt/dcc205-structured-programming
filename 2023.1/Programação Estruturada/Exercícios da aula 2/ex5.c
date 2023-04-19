// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
// 5. Faça um programa que leia um valor do tipo float e depois o imprima usando o operador “%d”. Veja o que aconteceu.
#include <stdio.h>

int main() {
    float num;

    printf("Digite um valor do tipo float: ");
    scanf("%f", &num);

    printf("Usando o operador %%d, fica: %d\n", num);

    return 0;
}
// O que acontece: um número estranho é printado, independente do valor do input.