// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 12. Faça um programa que leia um vetor de 10 posições. Veriﬁque se existem valores iguais
e os escreva na tela. */
#include <stdio.h> 

int main() {
    int nums[10], repeatedNums[10];
    int i, n, repeatedNumsIndex, repetitionCount;

    for (i = 0; i < 10; i++) {
        printf("Enter a number: ");
        scanf("%d", &nums[i]);
    }

    printf("Repeated numbers: ");
    for (i = 0; i < 10; i++) {
        for (n = 0; n < i; n++) {
            if (nums[i] == nums[n]) {
                repetitionCount++;
            }
        }

        if (repetitionCount == 1) {
            repeatedNums[repeatedNumsIndex] = nums[i];
            printf("%d ", repeatedNums[repeatedNumsIndex]);
            repeatedNumsIndex++;
        }
        
        repetitionCount = 0;
    }
    
    printf("\n");

    return 0;
}