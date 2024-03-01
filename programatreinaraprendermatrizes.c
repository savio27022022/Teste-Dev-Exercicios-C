#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
void cabecalho(){
printf("\n====Arrays bidimensionais em C.=====\n");
system("cls||clear");
fflush(stdin);
}
int main(){
setlocale(LC_ALL," "); 
int mat[3][3]={{1,2,3},{4,5,6},{7,8,9};
int i,j;
cabecalho();
printf("Imprimindo a primeira linha:\n");
for(j=0;j<3;j++){
    cabecalho();
    printf("%d",mat[0][j]);
        for(j=0;j<3;j++){
        printf("%d",mat[i][j]);
	}   }
        cabecalho();
        printf("\n");
       
    

return 0;
