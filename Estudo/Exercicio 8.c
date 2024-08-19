#include <stdio.h>
#include <math.h>
int main (){

int idade;

printf("Digite aqui sua idade\n");
scanf("%d",&idade);

if (idade<= 12){
     printf("Voce e crianca");
}
    else if (idade>=13 && idade<=17){;
printf("Voce e adolescente");
    }
else if (idade>=18 && idade<=64){
printf("Voce e adulto");
}
else if (idade>=65){
printf("Voce e idoso");
}



}