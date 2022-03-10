#include <stdlib.h>
#include <string.h>
#include <stdio.h>
int registro(int n,int *v){
    for(int i=0;i<n;i++){
        scanf("%i",&v[i]);
    }
    return 0;
}
int main(){
int n;
int *v;
scanf("%i",&n);
v=(int*)malloc(n*sizeof(int));
if(v==NULL){
    printf("Erro em alocar memoria");
    exit(0);
}
registro(n,v);
for(int i=0;i<n;i++){
    printf("%i\n",v[i]);
}
free(v);
}
