#include <stdio.h>
    int main(){
    int idade;
    float peso, dosagem, gotas_por_dose;
    
    printf("DIGITE A IDADE DO PACIENTE: ");
    scanf("%d", &idade);
    
    printf("DIGITE O PESO DO PACIENTE EM Kg: ");
    scanf("%f", &peso);
    
    if(idade>=12){
    dosagem = peso*30;
    } else{
    dosagem = peso*15;
    }
    gotas_por_dose = dosagem*20/500;
    printf("RECEITA: TOME %.0f GOTAS POR DOSE, A CADA 6 HORAS \n", gotas_por_dose);
    }