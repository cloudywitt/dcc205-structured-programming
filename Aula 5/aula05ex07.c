// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 7. Elabore um programa que peça ao usuário para digitar 10 valores. Some esses valores e apresente
o resultado na tela.*/
#include <stdio.h>

int main() {
    int contador;
    float valorUsuario, soma;

    for (contador = 0; contador < 10; contador++) {
        printf("Digite um número: ");
        scanf("%f", &valorUsuario);

        soma += valorUsuario;
    }

    printf("A soma dos valores informados deu %.1f.\n", soma);
}