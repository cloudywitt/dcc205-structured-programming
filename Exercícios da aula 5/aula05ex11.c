// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 11) Faça um algoritmo que leia um número positivo e imprima seus divisores. Exemplo: Os divisores do
número 66 são: 1, 2, 3, 6, 11, 22, 33 e 66. */
#include <stdio.h>

int main() {
    int numero, contador;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &numero);

    printf("Os divisores do número %d são: 1", numero);
    for (contador = 2; contador <= numero; contador++) {
        if (contador == numero) {
            printf(" e %d", contador);
        } else if (numero % contador == 0) {
            printf(", %d", contador);
        }
    }

    printf(".\n");

    return 0;
}