// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 13. Faça um programa para ler 10 números diferentes a serem armazenados em um vetor.
Os números deverão ser armazenados no vetor na ordem em que forem lidos, sendo
que, caso o usuário digite um número que já foi digitado, o programa deverá pedir a ele
para digitar outro número. Note que cada valor digitado pelo usuário deve ser
pesquisado no vetor, veriﬁcando se ele existe entre os números que já foram
fornecidos. Exiba na tela o vetor ﬁnal que foi digitado.*/
#include <stdio.h> 

int main() {
    int nums[10];
    int i, n, number, isRepeated;

    for (i = 0; i < 10; i++) {
        do {
            isRepeated = 0;

            printf("Enter a number: ");
            scanf("%d", &number);

            for (n = 0; n < i; n++) {
                if (number == nums[n]) {
                    isRepeated = 1;

                    printf("No repeated numbers allowed.\n");
                }
            }
        } while (isRepeated == 1);

        nums[i] = number;
    }

    printf("Final vector: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", nums[i]);
    }

    printf("\n");

    return 0;
}