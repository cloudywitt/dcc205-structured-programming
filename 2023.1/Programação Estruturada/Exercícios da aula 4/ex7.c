// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 7. Uma empresa vende o mesmo produto para quatro diferentes estados. Cada
estado possui uma taxa diferente de imposto sobre o produto. Faça um programa
em que o usuário entre com o valor e o estado de destino do produto e o
programa retorne o preço final do produto acrescido do imposto do estado em
que ele será vendido. Se o estado digitado não for válido, mostrará uma
mensagem de erro.
--------------------------------------
|Estado  |MG    |SP      |RJ      |MS|
|Imposto |7%    |12%     |15%     |8%|
--------------------------------------
*/
#include <stdio.h>

int main() {
    float preco;
    int estadoDestino;

    printf("Preço do produto: ");
    scanf("%f", &preco);

    printf("------------------------\n");
    printf("Destino:\n");
    printf("[1] MG\n");
    printf("[2] SP\n");
    printf("[3] RJ\n");
    printf("[4] MS\n");
    printf("------------------------\n");
    printf("Opção: ");
    scanf("%d", &estadoDestino);
    printf("------------------------\n");

    switch (estadoDestino) {
        case 1:
            float precoMaisImpostoMG = preco + 7.0 / 100 * preco;

            printf("Preço acrescido de imposto para MG: R$%.2f\n", precoMaisImpostoMG);

            break;
        case 2:
            float precoMaisImpostoSP = preco + 12.0 /100 * preco;

            printf("Preço acrescido de imposto para SP: R$%.2f\n", precoMaisImpostoSP);

            break;
        case 3:
            float precoMaisImpostoRJ = preco + 15.0 / 100 * preco;

            printf("Preço acrescido de imposto para RJ: R$%.2f\n", precoMaisImpostoRJ);

            break;
        case 4:
            float precoMaisImpostoMS = preco + 8.0 / 100 * preco;

            printf("Preço acrescido de imposto para MS: R$%.2f\n", precoMaisImpostoMS);

            break;
    }

    return 0;
}