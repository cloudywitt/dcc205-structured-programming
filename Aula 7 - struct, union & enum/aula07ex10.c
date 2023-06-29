// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 10. Usando a estrutura “atleta” do exercício anterior, escreva um programa que leia os
dados de cinco atletas e os exiba por ordem de idade, do mais velho para o mais novo.*/
#include <stdio.h>
#include <string.h>

struct Athlete {
    char name[50];
    char sport[20];
    int age;
    float height;
};

int main() {
    struct Athlete athletes[5];

    for (int i = 0; i < 5; i++) {
        printf("Enter athlete %d name: ", i + 1);
        fgets(athletes[i].name, sizeof(athletes[i].name), stdin);

        printf("Enter athlete %d sport: ", i + 1);
        fgets(athletes[i].sport, sizeof(athletes[i].sport), stdin);

        printf("Enter athlete %d age: ", i + 1);
        scanf("%d", &athletes[i].age);

        printf("Enter athletes %d height: ", i + 1);
        scanf("%f", &athletes[i].height);
        getchar();
        printf("--------------------------------\n");
    }

    int order[5] = {0, 1, 2, 3, 4};

    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (athletes[order[i]].age < athletes[order[j]].age) {
                int temp = order[i];
                order[i] = order[j];
                order[j] = temp;
            }
        }
    }

    printf("--------------------------------\n");
    printf("          Athletes Info         \n");
    printf("--------------------------------\n");
    for (int i = 0; i < 5; i++) {
        printf("Name: %s", athletes[order[i]].name);
        printf("Sport: %s", athletes[order[i]].sport);
        printf("Age: %d\n", athletes[order[i]].age);
        printf("Height: %.2fm\n", athletes[order[i]].height);
        printf("--------------------------------\n");
    }

    return 0;
}