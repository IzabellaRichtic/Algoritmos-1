#include <stdio.h>
#include <string.h>

int main()
{
    char entrada[30];
    char comp1[] = "if";
    char comp2[] = "else";
    char comp3[] = "while";
    printf("Digite uma palavra:\n");
    scanf("%s", entrada);

    if(strcmp(entrada, comp1)==0){
        printf("A entrada é igual a if");
    };

       if(strcmp(entrada, comp2)==0){
        printf("A entrada é igual a else");
    };
       if(strcmp(entrada, comp3)==0){
        printf("A entrada é igual a while");
    }else{
       printf(" A entrada não corresponde a nenhuma das palavras");
    }
}