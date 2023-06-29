// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 6. Faça um programa que leia um arquivo texto contendo uma lista de compras. Cada
linha do arquivo possui nome, quantidade e valor unitário do produto. O programa
então exibe o total da compra.*/
#include <stdio.h>
#include <stdlib.h>

FILE* openFile(char* name, const char * restrict mode) {
    FILE* fname = fopen(name, mode);

    if (fname == NULL) {
        printf("Error while oppening %s\n", name);

        exit(1);
    }

    return fname;
}

int main() {
    FILE* shoppingListFilePtr = openFile("Files/shopping-list.txt", "r");

    char name[20];
    int quantity = 0;
    float price = 0.0;
    float totalCost = 0.0;

    while (fscanf(shoppingListFilePtr, "%s %d %f", name, &quantity, &price) != EOF) {
        totalCost += quantity * price;

        if (feof(shoppingListFilePtr)) {
            break;
        }
    }
    
    fclose(shoppingListFilePtr);

    printf("Total: $%.2f\n", totalCost);
    
    return 0;
}