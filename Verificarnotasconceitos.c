#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void cabecalho(){
printf("\n=Verificar Notas  Conceito.==\n");
system(cls||clear");
}
int main(){
setlocale(LC_ALL,"portuguese");

char aluno;
float primeiraNota,segundaNota,media;
char conceito;

printf("/nDigite a primeira nota:");
scanf("%f",&primeiraNota);

printf("\nDigite  segunda nota:");
scanf("%f",&segundaNota);


 printf("\nDigite o seu conceito:");
scanf("%c",&conceito); 

   media=(primeiraNota+segundaNota)/2;

         switch(media){
         case 1:
          media=">=9";
          conceito="A";
        
         printf(" O aluno está aprovado e a média  é: %1.f",media);
          break;
           

           case2:
           media=">=7.5 e<9";
           conceito="B";
            printf("O aluno está aprovado  e a média  é:%1.f",media);
           break;
           
           case 3:
           media=">=6 e <7.5";
           conceito="C";
            printf("O aluno está aprovado e a média é:%1.f",media);
           break;
     

           case 4:
           media=">=4 e <6";
           conceito="D";
           printf("O aluno está reprovado  e a média é :%1.f",media);
           
       case 5:
       media="<4";
       conceito="E" 
        printf("O aluno está reprovado e a média é:%1.f",media);
 
           default:
           printf("\nOpção Inválida!");
         }


return 0;
}
