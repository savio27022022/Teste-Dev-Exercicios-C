#include<stdio.h>
//Algoritmo: de 1 a 10.
void()cabecalho{
printf("\nContagem Crescente");
system("cls||clear");
fflush(stdin);
}
int main(){
setlocale(LC_ALL," ");

int i;
cabecalho();
for(i=1;i<=10;i++){
   printf("%d\n",i);  
}
return 0;
}
