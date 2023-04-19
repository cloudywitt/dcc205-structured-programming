// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 3. Escreva um programa que leia um número inteiro e depois imprima a mensagem “Valor lido:”,
seguido do valor inteiro. Use apenas um comando printf(). */
#include <stdio.h>

int main() {
    int num;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);
    
    printf("Valor lido: %d\n", num);

    return 0;
}