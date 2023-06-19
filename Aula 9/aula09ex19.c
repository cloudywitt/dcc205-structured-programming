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

typedef struct {
    char name[30];
    char sport[20];
    int age;
    float height;
} Athlete;

int main() {
    Athlete athletes[5];

    FILE* athletesFilePtr = openFile("athletes-info.bin", "wb");

    for (int i = 0; i < 5; i++) {
        printf("Enter athelete %d stats:\n", i + 1);
        printf("Name: ");
        fgets(athletes[i].name, sizeof(athletes[i].name), stdin);
        athletes[i].name[strcspn(athletes[i].name, "\n")] = '\0';

        printf("Sport: ");
        fgets(athletes[i].sport, sizeof(athletes[i].sport), stdin);
        athletes[i].sport[strcspn(athletes[i].sport, "\n")] = '\0';

        printf("Age: ");
        scanf("%d", &athletes[i].age);

        printf("Height: ");
        scanf("%f", &athletes[i].height);
        getchar();
    }

    int structuresWritten = fwrite(athletes, sizeof(Athlete), 5, athletesFilePtr);

    if (structuresWritten == 0) {
        printf("Error while writing to file\n");
    }

    fclose(athletesFilePtr);

    return 0;
}