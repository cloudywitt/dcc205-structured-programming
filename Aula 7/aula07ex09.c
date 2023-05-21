// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 9. Crie uma estrutura representando um atleta. Essa estrutura deve conter o nome do
atleta, seu esporte, idade e altura. Agora, escreva um programa que leia os dados de
cinco atletas. Calcule e exiba os nomes do atleta mais alto e do mais velho.*/
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
    char tallestAthleteName[50];
    char oldestAthleteName[50];
    float tallestHeight;
    int oldestAge;

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

        if (athletes[i].height > tallestHeight) {
            strcpy(tallestAthleteName, athletes[i].name);
            tallestHeight = athletes[i].height;
        }

        if (athletes[i].age > oldestAge) {
            strcpy(oldestAthleteName, athletes[i].name);
            oldestAge = athletes[i].age;
        }
    }

    printf("The tallest athlete is %s", tallestAthleteName);
    printf("The oldest athlete is %s", oldestAthleteName);

    return 0;
}