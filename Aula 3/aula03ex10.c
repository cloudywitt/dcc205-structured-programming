// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 10. A importância de R$ 780.000,00 será dividida entre três ganhadores de um
concurso, sendo que:
i. O primeiro ganhador receberá 46% do total.
ii. O segundo receberá 32% do total.
iii. O terceiro receberá o restante.
Calcule e imprima a quantia recebida por cada um dos ganhadores.*/
#include <stdio.h>

int main() {
    float premio = 780000.0;
    float quantiaPrimeiro = premio * (46.0 / 100.0); // 46% de prêmio
    float quantiaSegundo = premio * (32.0 / 100.0);  // 32% de prêmio
    float quantiaTerceiro = premio * (22.0 / 100.0); // 22% de prêmio

    printf("Primeiro lugar: R$%.2f\n", quantiaPrimeiro);
    printf("Segundo lugar: R$%.2f\n", quantiaSegundo);
    printf("Terceiro lugar: R$%.2f\n", quantiaTerceiro);

    return 0;
}