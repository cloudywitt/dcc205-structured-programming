// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 15. Leia um vetor com 10 números de ponto ﬂutuante. Em seguida, ordene os elementos
desse vetor e imprima o vetor na tela.*/
#include <stdio.h>

int main() {
    float nums[10];

    for (int i = 0; i < 10; i++){ 
        printf("Enter a floating point number: ");
        scanf("%f", &nums[i]);
    }

    for (int i = 0; i < 10; i++) {
        for (int j = i + 1; j < 10; j++) {
            if (nums[i] > nums[j]) {
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
        }
    }

    printf("In ascending order: ");
    for (int i = 0; i < 10; i++) {
        printf("%.1f ", nums[i]);
    }

    printf("\n");

    return 0;
}