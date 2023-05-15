// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 41. Escreva um programa que leia o nome e o valor de determinada mercadoria de uma
loja. Sabendo que o desconto para pagamento à vista é de 10% sobre o valor total,
calcule o valor a ser pago à vista. Escreva o nome da mercadoria, o valor total, o valor
do desconto e o valor a ser pago à vista.*/
#include <stdio.h>
#include <string.h>

int main() {
    char productName[50];
    float productPrice;

    printf("Enter the product name: ");
    fgets(productName, sizeof(productName), stdin);

    productName[strlen(productName) - 1] = '\0';

    printf("Enter its price: ");
    scanf("%f", &productPrice);

    float discount = 10.0 / 100 * productPrice;
    float discountedPrice = productPrice - discount;

    printf("Product name: %s\n", productName);
    printf("Price: R$%.2f\n", productPrice);
    printf("Discount: R$%.2f\n", discount);
    printf("Discounted price: R$%.2f\n", discountedPrice);

    return 0;
}