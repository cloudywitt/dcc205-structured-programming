// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 10. Elabore um programa que solicite ao usuário entrar com o valor do dia, mês e ano (inteiros). Em seguida, imprima os
valores lidos separados por uma barra (\). */
#include <stdio.h>

int main() {
   int dia, mes, ano;

   printf("Digite um dia, mês e ano: ");
   scanf("%d %d %d", &dia, &mes, &ano);

   printf("Data digitada: ");
   printf("%d/%d/%d\n", dia, mes, ano);

   return 0;
}