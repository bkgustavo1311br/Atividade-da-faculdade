#include <stdio.h>

int main()
    {
    
int idade, maior_idade = 0;
    char sexo, cor_olhos[20], cor_cabelo[20];
        int mulheres_louras_olhos_verdes_18_35 = 0, total_mulheres = 0;
            while(1)
    {

printf("Digite a idade do habitante (ou -1 para encerrar): ");    
    scanf("%d", &idade);
        if(idade == -1)
            break;
    
printf("Digite o sexo do habitante (M/F): ");
    scanf(" %c", &sexo);
        printf("Digite a cor dos olhos do habitante: ");
            scanf("%s", cor_olhos);
                printf("Digite a cor do cabelo do habitante: ");
                    scanf("%s", cor_cabelo);
    
if(idade > maior_idade)
            maior_idade = idade;
    if(sexo == 'F' && strcmp(cor_olhos, "verde") == 0 && strcmp(cor_cabelo, "louro") == 0 && idade >= 18 && idade <= 35)
            mulheres_louras_olhos_verdes_18_35++;
        if(sexo == 'F')

            total_mulheres++;

    }

float percentual;

    if(total_mulheres > 0)

        percentual = (float) mulheres_louras_olhos_verdes_18_35 / total_mulheres * 100;

            else

percentual = 0;

    printf("Maior idade dos habitantes: %d\n", maior_idade);

        printf("Porcentagem de mulheres com olhos verdes, cabelos louros e idade entre 18 e 35 anos: %.2f%%\n", percentual);

            return 0;
    
    }