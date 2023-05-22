// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 14. Crie uma enumeração representando os itens de uma lista de compras. Agora, escreva um programa que leia um valor inteiro do
teclado e exiba o nome do item comprado e o seu preço.*/
#include <stdio.h>

enum ShoppingList {
    JUICE = 1,
    RICE,
    OIL,
    BEER,
    CHEESE
};

int main() {
    int item;

    printf("Enter an item of the shopping list (1-5): ");
    scanf("%d", &item);

    switch (item) {
        case JUICE:
            printf("Juice 1L...........................R$5.00\n");

            break;
        case RICE:
            printf("Rice 1kg...........................R$4.59\n");

            break;
        case OIL:
            printf("Oil 900ml..........................R$6.79\n");

            break;
        case BEER:
            printf("Brahma Duplo Malte 350ml...........R$3.29\n");

            break;
        case CHEESE:
            printf("Cheese.............................R$7.99\n");

            break;
    }   

    return 0;
}