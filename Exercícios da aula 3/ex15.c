// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 15. Faça um programa para ler um número inteiro positivo de três dígitos. Em
seguida, calcule e mostre o número formado pelos dígitos invertidos do número
lido. Exemplo: Número lido = 123 Número gerado = 321 */
#include <stdio.h>

int main() {
    int num, unidadeDeNum, dezenaDeNum, centenaDeNum, numInvertido;
    
    printf("Digite um número inteiro positivo de 3 dígitos: ");
    scanf("%d", &num);
    
    unidadeDeNum = num % 10;
    dezenaDeNum = (num / 10) % 10;
    centenaDeNum = num / 100;

    /* 123 = 1 * 100 + 2 * 10 + 3, isto é, centena * 100 + dezena * 10 + unidade.
    Logo, para inverter os dígitos, usa-se: unidade * 100 + dezena * 10 + centena.*/
    numInvertido = unidadeDeNum * 100 + dezenaDeNum * 10 + centenaDeNum; 

    printf("Invertido: %03d\n", numInvertido);
    // alternativa, sem precisar da variável numInvertido: printf("Invertido: %d%d%d", unidadeDeNum, dezenaDeNum, centenaDeNum);
                                            
    return 0;
}