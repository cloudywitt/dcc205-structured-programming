// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 15. Faça um programa que leia os coeficientes de uma equação do segundo grau.
Em seguida, calcule e mostre as raízes dessa equação, lembrando que as raízes
são calculadas como

                 -b +ou-√Δ
        x = -------------------
                   2 * a
em que Δ = b2 – 4 * a * c e ax2
 + bx + c = 0 representa uma equação do segundo
grau. A variável a tem de ser diferente de zero. Caso seja igual, imprima a
mensagem “Não é equação de segundo grau”. Do contrário, imprima:
 • Se Δ < 0, não existe real. Imprima a mensagem “Não existe raiz”.
 • Se Δ = 0, existe uma raiz real. Imprima a raiz e a mensagem “Raiz única”.
 • Se Δ > 0, existem duas raízes reais. Imprima as raízes.
*/
#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;

    printf("Digite os três coeficientes de uma equação do 2° grau: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a == 0) {  
        printf("Não é uma equação do segundo grau.\n");
    }
    else {
        float delta = pow(b, 2) - 4 * a * c;

        if (delta < 0) {
            printf("Não existe raiz.\n");
        }
        else if (delta == 0) {
            float raiz = (-b + sqrt(delta)) / (2 * a);

            printf("Raiz única: %.1f\n", raiz);
        }
        else if (delta > 0) {
            float raiz1 = (-b + sqrt(delta)) / (2 * a);
            float raiz2 = (-b - sqrt(delta)) / (2 * a);

            printf("Duas raízes: %.1f e %.1f\n", raiz1, raiz2);
        }
    }

    return 0;
}