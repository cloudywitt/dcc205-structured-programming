// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 14. Escreva um programa que leia um número inteiro, maior ou igual a zero, do usuário. Imprima o
enésimo termo da sequência de Fibonacci. Essa sequência começa no termo de ordem zero, e, a
partir do segundo termo, seu valor é dado pela soma dos dois termos anteriores. Alguns termos
dessa sequência são: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34.*/
#include <stdio.h>

int main() {
    int contador, enesimoTermoFibonacci, numAnterior, anteriorAoAnterior, enesimoEscolhido;

    printf("Digite um iteiro maior ou igual a zero: ");
    scanf("%d", &enesimoEscolhido);

    for (contador = 0; contador < enesimoEscolhido; contador++) {
        if (contador == 0) {
            enesimoTermoFibonacci = 0;
        } else if (contador == 1) {
            numAnterior = 0;
            enesimoTermoFibonacci = 1;
        } else {
            anteriorAoAnterior = numAnterior; // O antigo número anterior agora fica anterior ao anterior
            numAnterior = enesimoTermoFibonacci; // O atual número anterior é o enésimo termo da fibonacci do número anterior
            enesimoTermoFibonacci = numAnterior + anteriorAoAnterior; // Fibonacci = (Fn - 1) + (Fn - 2)
        }
    }

    printf("O %dº termo da sequência de Fibonacci é %d.\n", enesimoEscolhido ,enesimoTermoFibonacci);
}
