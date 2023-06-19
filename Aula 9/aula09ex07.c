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

FILE* openFile(char* name, const char * restrict mode) {
    FILE* fname = fopen(name, mode);

    if (fname == NULL) {
        printf("Error while oppening %s\n", name);

        exit(1);
    }

    return fname;
}

void getStr(char* str, int size) {
    fgets(str, size, stdin);
    str[strcspn(str, "\n")] = '\0';
}

int main() {
    FILE* registrationFilePtr = openFile("registration.txt", "w");
    
    char name[50];
    int phoneNumber = 0;

    do {
        //Input
        printf("Enter a name: ");
        getStr(name, sizeof(name));

        printf("Enter a phone number (0 to exit): ");
        scanf("%d", &phoneNumber);
        getchar();

        // Write to file
        fprintf(registrationFilePtr, "%s\n%d\n", name, phoneNumber);
    } while (phoneNumber != 0);

    fclose(registrationFilePtr);
    
    return 0;
}