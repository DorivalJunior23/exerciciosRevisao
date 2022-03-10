#include <string.h>
#include <stdio.h> 
int horasMinutos(int totalMinutos,int *horas,int *minutos){
   int h;
   int m;
    h= totalMinutos/60;
    horas=&h;
    m= totalMinutos%60;
    minutos=&m;
    printf("%i horas e %i minutos\n",*horas,*minutos);
    return 0;
}
int main(){
int *horas;
int *minutos;
int totalMinutos;
scanf("%i",&totalMinutos);
horasMinutos(totalMinutos,horas,minutos);
}
