// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 7. Faça um programa que permita que o usuário entre com diversos nomes e telefone
para cadastro. Crie um arquivo com essas informações, uma por linha. O usuário
ﬁnaliza a entrada com o valor 0 para o telefone.*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

FILE* openFile(char *fname, const char * restrict mode) {
    FILE* filePtr = fopen(fname, mode);

    if (filePtr == NULL) {
        printf("Error while openning %s\n", fname);

        exit(1);
    }

    return filePtr;
}

int main() {
    FILE* registration = openFile("registration.txt", "w");
    char name[50];
    int phoneNumber = 0;

    do {
        printf("Enter a name: ");
        fgets(name, sizeof(name), stdin);
        name[strcspn(name, "\n")] = '\0';

        printf("Enter a phone number (0 to exit): ");
        scanf("%d", &phoneNumber);
        getchar();

        fprintf(registration, "%s\n%d\n", name, phoneNumber);

    } while (phoneNumber != 0);

    return 0;
}