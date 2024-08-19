#include <stdio.h>
int main()
{

    char grade;

    printf("Digite sua nota (A, B, C, D ou F): ");
    scanf("%c", &grade);

        switch (grade) {
        case 'A':
            printf("Exelente!\n");
            break;

        case 'B':
            printf("Muito bom!\n");
            break;

        case 'C':
            printf("Bom!\n");
            break;
        case 'D':
        case 'F':
            printf("Precisa melhorar!\n");
            break;
            default:
            printf("Nota inválida.\n");
        }
    return 0;
   
}