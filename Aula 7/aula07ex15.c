// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 15. Crie uma união contendo dois tipos básicos diferentes. Agora, escreva um programa
que inicialize um dos tipos dessa união e exiba em tela o valor do outro tipo.*/
#include <stdio.h>

union MyUnion {
    char myChar;
    int myInt;
};

int main() {
    union MyUnion u;

    u.myChar = 'a';
    printf("%d\n", u.myInt);

    return 0;
}