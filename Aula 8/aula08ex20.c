// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 20)
Faça uma função que calcule e retorne o número neperiano e, e = 2,71828183, usando
a série a seguir:
A função deve ter como parâmetro o número de termos que serão somados, N. Note
que quanto maior esse número, mais próxima do valor e estará a resposta.*/
#include <stdio.h>

int factorial(int num) {
    if (num == 1) {
        return 1;
    } else {
        return num * factorial(num - 1);
    }
}

double neper(int N) {
    double result = 0;

    for (int n = 1; n <= N; n++) {
        result += 1.0 / factorial(n);
    }

    return result;
}

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    double neperNum = neper(num);

    printf("e = %lf\n", neperNum);

    return 0;
}