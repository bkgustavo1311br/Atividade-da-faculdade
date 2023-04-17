#include <stdio.h>

int main(){
    float soma;
    int i,deno=7,nume=70;

    for (i=0;i<100;i++){
        printf("%d/%d\n",nume,deno);
        soma += nume/deno;
        deno+=7;
        nume--;
    }

    printf("O somatorio da sequencia e: %.2f",soma);
    return 0;
}