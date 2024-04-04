#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
setlocale(LC_ALL," ");
char alunos[2][200];//Vetor para dois nomes.
float notas[2][3];//Matriz com 3 notas para dois alunos.
int i,j;

for(i=0;i<2;i++){
printf("Digite o nome do %iº aluno:",i+1);
scanf("%s",&alunos[i]);
    for(j=0;j<3;j++){
    printf("Digite a %iª nota:",j+1);
    scanf("%f",&notas[i][j]);
}
printf("\n");
}
printf("\n===Exibindo os resultados==\n");
for(i=0;i<2;i++){
printf("%iº aluno:%s\n",i+1,alunos[i]);

    for(j=0;j<3;j++{
    printf("%i nota:%1.f\n",j+1,notas[i][j]);
    }
}

return 0;
}
