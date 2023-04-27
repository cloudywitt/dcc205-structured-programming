// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 14. Escreva um programa que leia um número inteiro, maior ou igual a zero, do usuário. Imprima o
enésimo termo da sequência de Fibonacci. Essa sequência começa no termo de ordem zero, e, a
partir do segundo termo, seu valor é dado pela soma dos dois termos anteriores. Alguns termos
dessa sequência são: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34.*/
#include <stdio.h>

int main() {
    int counter, nthFiboNum, previousNum, prevPreviousNum, nthChoosed;

    printf("Enter an integer greater or equal to 0: ");
    scanf("%d", &nthChoosed);

    for (counter = 0; counter < nthChoosed; counter++) {
        if (counter == 0) {
            nthFiboNum = 0;
        } else if (counter == 1) {
            previousNum = 0;
            nthFiboNum = 1;
        } else {
            prevPreviousNum = previousNum; // The old previousNum is now before previousNum
            previousNum = nthFiboNum; // The now previousNum is the fibonacci sequence number before
            nthFiboNum = previousNum + prevPreviousNum; // Fibonacci = (Fn - 1) + (Fn - 2)
        }
    }

    printf("The %dth fibonacci sequence number is %d.\n", nthChoosed ,nthFiboNum);
}