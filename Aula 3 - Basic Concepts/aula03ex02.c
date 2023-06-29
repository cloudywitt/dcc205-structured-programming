// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
// 2. Faça um programa que leia um número real e imprima a quinta parte desse número.
#include <stdio.h>

int main() {
    double num; // Usei "double" para maior precisão nas casas decimais.
    int quintaParteDeNum;

    printf("Digite um número real: ");
    scanf("%lf", &num);

    quintaParteDeNum = (int) (num * 100000) % 10; // Movo a casa decimal 5x à direita e pego a quinta parte com o resto da divisão por 10

    printf("A quinta parte de %.5f é %d\n", num, quintaParteDeNum);

    return 0;
}