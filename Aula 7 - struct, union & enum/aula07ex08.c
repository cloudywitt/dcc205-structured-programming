// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 8. Crie uma estrutura capaz de armazenar o nome e a data de nascimento de uma
pessoa. Agora, escreva um programa que leia os dados de seis pessoas. Calcule e
exiba os nomes da pessoa mais nova e da mais velha.*/
#include <stdio.h>
#include <string.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Person {
    char name[50];
    struct Date birthDay;
};

int main() {
    struct Person people[6];
    struct Person youngest;
    struct Person oldest;

    for (int i = 0; i < 6; i++) {
        printf("Enter person %d's name: ", i + 1);
        fgets(people[i].name, sizeof(people[i].name), stdin);

        printf("Enter their birthday (dd/mm/yyyy) separated by spaces: ");
        scanf("%d %d %d", &people[i].birthDay.day, &people[i].birthDay.month, &people[i].birthDay.year);
        getchar();

        if (i == 0) {
            strcpy(youngest.name, people[i].name);
            strcpy(oldest.name, people[i].name);

            youngest.birthDay = people[i].birthDay;
            oldest.birthDay = people[i].birthDay;
        } else if (people[i].birthDay.year > youngest.birthDay.year ||
                  (people[i].birthDay.year == youngest.birthDay.year && people[i].birthDay.month > youngest.birthDay.month) || 
                  (people[i].birthDay.year == youngest.birthDay.year && people[i].birthDay.month == youngest.birthDay.month && people[i].birthDay.day > youngest.birthDay.day)
                  ) {
            strcpy(youngest.name, people[i].name);
            youngest.birthDay = people[i].birthDay;
        } else if (people[i].birthDay.year < oldest.birthDay.year ||
                  (people[i].birthDay.year == oldest.birthDay.year && people[i].birthDay.month < oldest.birthDay.month) || 
                  (people[i].birthDay.year == oldest.birthDay.year && people[i].birthDay.month == oldest.birthDay.month && people[i].birthDay.day < oldest.birthDay.day)
                  ) {
            strcpy(oldest.name, people[i].name);
            oldest.birthDay = people[i].birthDay;
        }
    }

    printf("The youngest person's name is %s", youngest.name);
    printf("The oldest person's name is %s", oldest.name);

    return 0;
}