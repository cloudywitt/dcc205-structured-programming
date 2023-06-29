// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 13. Faça um programa que leia um arquivo texto contendo os dados de um aluno. Cada
linha do arquivo contém o número de matrícula, o nome e as notas de três provas de
um aluno. Os dados devem ser lidos e armazenados em uma estrutura. Em seguida,
exiba os dados lidos em tela.*/
#include <stdio.h>
#include <stdlib.h>

FILE* openFile(char* fname, const char * restrict mode) {
    FILE* filePtr = fopen(fname, mode);

    if (filePtr == NULL) {
        printf("Error while openning %s\n", fname);

        exit(1);
    }

    return filePtr;
}

typedef struct {
    unsigned int id;
    char name[30];
    float scores[3];
} Student;

int main() {
    FILE* studentsInfoPtr = openFile("Files/students-info.txt", "r");

    Student students[4];

    int i = 0;

    // Read students' data
    while (fscanf(studentsInfoPtr, "%u %s %f %f %f", &students[i].id, students[i].name, &students[i].scores[0], &students[i].scores[1], &students[i].scores[2]) != EOF) {
        i++;

        if (feof(studentsInfoPtr)) {
            break;
        }
    }

    // Print the data
    printf("--------------------\n");
    for (int i = 0; i < 4; i++) {
        printf("ID: %u\n", students[i].id);
        printf("Name: %s\n", students[i].name);
        printf("Scores: %.1f %.1f %.1f\n", students[i].scores[0], students[i].scores[1], students[i].scores[2]);
        printf("--------------------\n");

    }

    fclose(studentsInfoPtr);

    return 0;
}