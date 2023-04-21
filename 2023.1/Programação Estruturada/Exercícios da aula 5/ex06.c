// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 6. Faça um programa que mostre uma contagem regressiva na tela, iniciando em 10 e terminando em
0. Mostre uma mensagem “FIM!” após a contagem*/
#include <stdio.h>
#include <unistd.h> // Para usar o sleep(), que faz o programa esperar pelo tempo determinado (segundos).

int main() {
    int contagem = 10;

    printf("%d\n", contagem);

    while (contagem > 0) {
        sleep(1);       
        contagem--;
        printf("%d\n", contagem);
    }

    printf("FIM!\n");

    return 0;
}