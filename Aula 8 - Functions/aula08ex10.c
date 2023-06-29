// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 10. Escreva uma função que receba dois valores numéricos e um símbolo. Esse símbolo
representará a operação que se deseja efetuar com os números. Assim, se o símbolo
for “ + ”, deverá ser realizada uma adição, se for “ − ”, uma subtração, se for “/”, uma
divisão, e, se for “*”, será efetuada uma multiplicação. Retorne o resultado da operação
para o programa principal.*/
#include <stdio.h>

float calculator(float num1, float num2, char operation) {
    float result;

    switch (operation) {
        case '+':
            result = num1 + num2;

            break;
        case '-':
            result = num1 - num2;

            break;
        case '*':
            result = num1 * num2;

            break;
        case '/':
            result = num1 / num2;

            break;
    }

    return result;
}

int main() {
    float num1, num2;
    char operator;

    printf("Enter the first number: ");
    scanf("%f", &num1);
    getchar();

    printf("Enter the arithmetic operator (+, -, * or /): ");
    scanf("%c", &operator);
    getchar();

    printf("Enter the second number: ");
    scanf("%f", &num2);

    float result = calculator(num1, num2, operator);

    printf("%.1f %c %.1f = %.1f\n", num1, operator, num2, result);

    return 0;
}