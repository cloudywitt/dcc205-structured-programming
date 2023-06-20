// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 19. Crie uma estrutura representando um atleta. Essa estrutura deve conter o nome do
atleta, seu esporte, idade e altura. Agora, escreva um programa que leia os dados
de cinco atletas e os armazene em um arquivo binário.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

FILE* openFile(char *fname, const char * restrict mode) {
    FILE* file = fopen(fname, mode);

    if (file == NULL) {
        printf("Couldn't open %s\n", fname);

        exit(1);
    }

    return file;
}

void getStr(char* str, int size) {
    fgets(str, size, stdin);
    str[strcspn(str, "\n")] = '\0';
}

struct Athlete;

void writeAThletes(char* fname, struct Athlete* athletes, int numberOfAthletes);

struct Athlete {
    char name[30];
    char sport[20];
    int age;
    float height;
};

void writeAThletes(char* fname, struct Athlete* athletes, int numberOfAthletes) {
    FILE* athletesPtr = openFile(fname, "wb");
    
    int structuresWritten = fwrite(athletes, sizeof(struct Athlete), numberOfAthletes, athletesPtr);

    if (structuresWritten == 0) {
        printf("Error while writing to file\n");
    }

    fclose(athletesPtr);
}

int main() {
    struct Athlete athletes[5];

    // Input
    for (int i = 0; i < 5; i++) {
        printf("Enter athelete %d stats:\n", i + 1);
        printf("Name: ");
        getStr(athletes[i].name, sizeof(athletes[i].name));

        printf("Sport: ");
        getStr(athletes[i].sport, sizeof(athletes[i].sport));

        printf("Age: ");
        scanf("%d", &athletes[i].age);

        printf("Height: ");
        scanf("%f", &athletes[i].height);
        getchar();
    }

    // File operation
    writeAThletes("Files/athletes-info.bin", athletes, 5);

    return 0;
}