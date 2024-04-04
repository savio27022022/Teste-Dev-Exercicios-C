#include<stdio.h>
#include<locale.h>
#define QUANTIDADE_DISCIPLINAS 3
#define QUANTIDADE_NOTAS 2
int main(){
setlocale(LC_ALL," ");
char disciplinas[QUANTIDADE_DISCIPLINAS][200];//Vetor para três disciplinas.
float notas[QUANTIDADE_DISCIPLINAS][QUANTIDADE_NOTAS];//Matriz para notas por disciplina.
float soma=0,media[QUANTIDADE_NOTAS];
int i,j;

for(i=0;i<QUANTIDADE_DISCIPLINAS;i++){
printf("Digite o nome do % iº aluno:",i+1);
scanf("%s",&disciplinas);

    for(j=0;J<QUANTIDADE_NOTAS;j++){
    printf("Digite a %iª nota:",j+1);
    scanf("%f",&notas[i][j]);
    soma+=notas[i][j];
}
    media[i]=soma/QUANTIADE_NOTAS;
    soma=0;
   
    printf("\n");
}

printf("\n==Exibindo resultados===\n");
for(i=0;i<QUANTIDADE_DISCIPLINAS;i++){
for(j=0;j<QUANTIDADE_NOTAS;j++){
    printf("%iª nota:%1.f\n",j+1,notas[i][j);
}
printf("Média do % iº aluno:%1.f\n",i+1,media[i]);
}
printf("\n");

return 0;
}
