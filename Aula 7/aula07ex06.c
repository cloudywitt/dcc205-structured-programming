// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/*6. Crie uma estrutura representando um aluno de uma disciplina. Essa estrutura deve
conter o número de matrícula do aluno, seu nome e as notas de três provas. Agora,
escreva um programa que leia os dados de cinco alunos e os armazene nessa
estrutura. Em seguida, exiba o nome e as notas do aluno que possui a maior média
geral dentre os cinco.*/
#include <stdio.h>

struct Student {
    int id;
    char name[50];
    float scoresOnTest[3];
    float average;
};

int main() {
    struct Student students[5];
    float highestAverage;
    int highestaAvgStudent;
    
    for (int i = 0; i < 5; i++) {
        printf("Student %d:\n", i + 1);

        printf("ID: ");
        scanf("%d", &students[i].id);
        getchar(); // consumes the "\n" left by the previous scanf

        printf("Name: ");
        fgets(students[i].name, sizeof(students[i].name), stdin);

        printf("Score on...\n");
        for (int t = 0; t < 3; t++) {
            printf("Test %d: ", t + 1);
            scanf("%f", &students[i].scoresOnTest[t]);

            students[i].average += students[i].scoresOnTest[t];
        }

        students[i].average /= 3;
        
        if (students[i].average > highestAverage) {
            highestAverage = students[i].average;
            highestaAvgStudent = i;
        }

    }

    printf("----------------------------------------------\n");
    printf("The student with the best average is %s", students[highestaAvgStudent].name);
    printf("Their grades are ");
    for (int i = 0; i < 3; i++) {
        printf("%.1f ", students[highestaAvgStudent].scoresOnTest[i]);
    }

    printf("\n");

    return 0;
}