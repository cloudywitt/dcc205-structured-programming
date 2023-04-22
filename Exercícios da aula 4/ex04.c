// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 4. Faça um programa que leia o salário de um trabalhador e o valor da prestação de
um empréstimo. Se a prestação:
• For maior que 20% do salário, imprima: “Empréstimo não concedido.”
• Caso contrário, imprima: “Empréstimo concedido.” */
#include <stdio.h>

int main() {
    float salario, prestacao;

    printf("Valor do salário: ");
    scanf("%f", &salario);
    
    printf("Valor da prestação do empréstimo: ");
    scanf("%f", &prestacao);

    if (prestacao > 20.0 / 100 * salario) {
        printf("Empréstimo não concedido.\n");
    }
    else {
        printf("Empréstimo concedido.\n");
    }

    return 0;
}