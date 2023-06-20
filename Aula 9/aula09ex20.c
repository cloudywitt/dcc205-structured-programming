// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 20. Considerando a estrutura atleta do exercício anterior, escreva um programa que leia
um arquivo binário contendo os dados de cinco atletas. Calcule e exiba o nome do
atleta mais alto e do mais velho*/
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

typedef struct {
  char name[30];
    char sport[20];
    int age;
    float height;
} Athlete;

int main() {
    FILE* athletesFilePtr = openFile("Files/athletes-info.bin", "rb");

    Athlete athletes[5];

    fread(athletes, sizeof(Athlete), 5, athletesFilePtr);

    char tallestName[30];
    char oldestName[30];
    float tallestHeight;
    int oldestAge;

    for (int i = 0; i < 5; i++) {
        if (i == 0) {
            strcpy(tallestName, athletes[i].name);
            strcpy(oldestName, athletes[i].name);
        } else {
            if (athletes[i].age > oldestAge) {
                oldestAge = athletes[i].age;
                strcpy(oldestName, athletes[i].name);
            }
            
            if (athletes[i].height > tallestHeight) {
                tallestHeight = athletes[i].height;
                strcpy(tallestName, athletes[i].name);
            }
        }
    }

    printf("The tallest athlete is %s\n", tallestName);
    printf("The oldest athlete is %s\n", oldestName);

    fclose(athletesFilePtr);

    return 0;
}