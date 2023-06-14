// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 9. Dado um arquivo contendo um conjunto de nomes e datas de nascimento (dia, mês e
ano, isto é, três inteiros seguidos), escrever um programa que leia esse arquivo e a data
atual e gere outro arquivo contendo o nome e a idade.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

FILE* openFile(char *name, const char * restrict mode) {
    FILE* fname = fopen(name, mode);

    if (fname == NULL) {
        printf("File not found\n");

        exit(1);
    }

    return fname;
}

int getAge(int bday, int bmonth, int byear) {
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    int age;
    int currentDay = tm.tm_mday;
    int currentMonth = tm.tm_mon + 1;
    int currentYear = tm.tm_year + 1900;

    age = currentYear - byear;

    if (bmonth > currentMonth || (bmonth == currentMonth && bday > currentDay)) {
        age--;
    }

    return age;
}

int main() {
    FILE* usersData = openFile("users-data.txt", "r");
    FILE* newUsersData = openFile("new-users-data.txt", "w");

    char name[30];

    int birthDay, birthMonth, birthYear;

    while (fscanf(usersData, "%s %d %d %d", name, &birthDay, &birthMonth, &birthYear) != EOF) {
        int age = getAge(birthDay, birthMonth, birthYear);

        fprintf(newUsersData, "Name: %s. Age: %d\n", name, age);
        
        fclose(usersData);
        fclose(newUsersData);
    }

    return 0;
}
