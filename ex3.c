#include <string.h>
#include <stdio.h> 
#include <stdlib.h>
int recursiva(int x,int y,int aux){
    x*=aux;
    printf("x=%i\n",x);
    printf("y=%i\n",y);
    if(y==0){
     return x;    
    }else{
       return recursiva(x,--y,aux);
    }
}
int main(){
int x,y,resultado,aux;
scanf("%i",&x);
scanf("%i",&y);
y--;
y--;
aux=x;
resultado=recursiva(x,y,aux);
printf("%i",resultado);
}
