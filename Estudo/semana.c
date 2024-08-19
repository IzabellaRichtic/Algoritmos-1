#include <stdio.h>
int main()
{
    int numero;

    printf("Digite um numero (1, 2, 3, 4, 4, 5, 6 , 7): ");
    scanf("%d", &numero);

    switch (numero)
    {
    case 1:
        printf("Segunda!\n");
        break;

    case 2:
        printf("Terça!\n");
        break;

    case 3:
        printf("Quarta!\n");
        break;
    case 4:
        printf("Quinta!\n");
        break;
    case 5:
        printf("Sexta!\n");
        break;
    case 6:
        printf("Sabado!\n");
        break;
    case 7:
        printf("Domingo!\n");
        break;
    default:
        printf("Nao é um dia da Semana\n");
    }
    return 0;
}