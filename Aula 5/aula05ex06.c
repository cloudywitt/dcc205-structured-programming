// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 6. Faça um programa que mostre uma contagem regressiva na tela, iniciando em 10 e terminando em
0. Mostre uma mensagem “FIM!” após a contagem*/
#include <stdio.h>
#include <unistd.h> // For sleep() function

int main() {
    int countDown = 10;

    printf("%d\n", countDown);

    while (countDown > 0) {
        sleep(1);       
        countDown--;
        printf("%d\n", countDown);
    }

    printf("End\n");

    return 0;
}