// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 5. Faça um programa que leia números positivos e os converta em binário. Cada número
binário deverá ser salvo em uma linha de um arquivo texto. O programa termina
quando o usuário digitar um número negativo.*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

FILE* openFile(char* name, const char * restrict mode) {
    FILE* fname = fopen(name, mode);

    if (fname == NULL) {
        printf("Error while oppening %s\n", name);

        exit(1);
    }

    return fname;
}

unsigned int convertToBinary(int decimal) {
    unsigned int binary = 0;
    int i = 0;

    while (true) {
        if (decimal == 0) {
            break;
        } else if (decimal > 0 && decimal < 2) {
            binary += pow(10, i);

            break;
        }

        if (decimal % 2 == 1) {
            binary += pow(10, i);
        }

        decimal /= 2;
        i++;
    }
    
    return binary;
}

int main() {
    int numDecimal = 0;
    FILE* binNumsFile = openFile("binary-numbers.txt", "w");    

    while (true) {
        printf("Enter a number (negative to stop): ");
        scanf("%d", &numDecimal);

        if (numDecimal < 0) {
            break;
        }

        unsigned int numBinary = convertToBinary(numDecimal);

        fprintf(binNumsFile, "%d\n", numBinary);
    }

    fclose(binNumsFile);

    return 0;
}