// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
// 4. Faça um programa que leia um número inteiro e depois o imprima usando o operador “%f”. Veja o que aconteceu.
#include <stdio.h>

int main() {
    int num;

    printf("Digite um valor inteiro: ");
    scanf("%d", &num);

    printf("Usando o operador %%f, fica: %f\n", num);

    return 0;
}

// O que acontece: Não importa o que se digite, o output é 0.000000