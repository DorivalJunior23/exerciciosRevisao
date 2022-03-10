#include <string.h>
#include <stdio.h> 
#include <stdlib.h>
int main(){
FILE *arq;
 int i=0;
char local[50];
scanf(" %[^\n]s",local);

arq = fopen(local, "r");

if (arq == NULL)
{
    printf("Problemas em abrir o arquivo\n");
    exit(0);
}
FILE *arq2;
arq2 = fopen("texto de saida.txt","a");
if (arq2 == NULL)
{
    printf("Problemas na criacao do texto de saida\n");
    exit(1);
}

  char item[100],*retorno;
    retorno = fgets(item,100,arq);
    while(retorno!=NULL){
        for(int j=0;j<100;j++){
            if(item[j]=='A'||item[j]=='E'||item[j]=='I'||item[j]=='O'||item[j]=='U'||item[j]=='a'||item[j]=='e'||item[j]=='i'||item[j]=='o'||item[j]=='u'){
                item[j]='*';
            }
        }
        int verificacao = fputs(item,arq2);
        if(verificacao==EOF){
        printf("erro em arquivo tente novamente");
        exit(2);
    }
        i++;
        retorno = fgets(item,100,arq);
    }
    printf("\n%i linhas",i);
    fclose(arq);
    fclose(arq2);
}

