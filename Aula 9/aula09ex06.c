// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 6. Faça um programa que leia um arquivo texto contendo uma lista de compras. Cada
linha do arquivo possui nome, quantidade e valor unitário do produto. O programa
então exibe o total da compra.*/
#include <stdio.h>
#include <stdlib.h>

FILE* openFile(char *fname, const char * restrict mode) {
    FILE* filePtr = fopen(fname, mode);

    if (filePtr == NULL) {
        printf("Error while openning %s\n", fname);

        exit(1);
    }

    return filePtr;
}

int main() {
    FILE* shoppingList = openFile("shopping-list.txt", "r");

    char name[20];
    int quantity = 0;
    float price = 0;
    float totalPrice = 0;

    while (fscanf(shoppingList, "%s %d %f", name, &quantity, &price) != EOF) {
        totalPrice += quantity * price;
        }

    printf("Total price: $%.2f\n", totalPrice);

    return 0;
}