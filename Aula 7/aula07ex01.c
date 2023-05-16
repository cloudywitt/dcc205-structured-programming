// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 1. Implemente um programa que leia o nome, a idade e o endereço de uma pessoa e
armazene esses dados em uma estrutura. Em seguida, imprima na tela os dados da
estrutura lida.*/
#include <stdio.h>
#include <string.h>

struct registration {
    char name[50];
    int age;
    char address[50];

};

int main() {
    struct registration user;

    printf("Name: ");
    fgets(user.name, sizeof(user.name), stdin);

    printf("Age: ");
    scanf("%d", &user.age);
    getchar();

    printf("Address: ");
    fgets(user.address, sizeof(user.address), stdin);

    printf("--------------------------------------------------\n");
    printf("User name: %s", user.name);
    printf("User age: %d\n", user.age);
    printf("User address: %s", user.address);

    return 0;
}