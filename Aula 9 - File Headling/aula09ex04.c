// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 4. Elabore um programa no qual o usuário informe o nome de um arquivo texto e uma
palavra, e o programa informe o número de vezes que aquela palavra aparece dentro
do arquivo.*/
#include <stdio.h>
#include <stdlib.h>
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

int countWordInFile(char* word, char* fname) {
    FILE* filePtr = openFile(fname, "r");

    char buffer[250];
    int occurrences = 0;

    while (fgets(buffer, sizeof(buffer), filePtr) != NULL) {
        char* wordPos = strstr(buffer, word);

        // Counts the occurrences of the word in line
        while (wordPos != NULL) {
            occurrences++;

            wordPos = strstr(wordPos + strlen(word), word);
        }

        if (feof(filePtr)) {
            break;
        }
    }

    fclose(filePtr);

    return occurrences;
}

int main() {
    // Input
    char fileName[30];

    printf("Enter the file name (with extension): ");
    getStr(fileName, sizeof(fileName));
    
    char word[20];

    printf("Enter a word: ");
    getStr(word, sizeof(word));
    
    // File operation
    int occurrences = countWordInFile(word, fileName);
    
    // Output
    printf("The word %s appears %d times in %s\n", word, occurrences, fileName);

    return 0;
}