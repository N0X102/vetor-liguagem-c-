#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i;
    float numero[5], maior, menor = INT_MAX;

    for (i = 0; i < 5; i++)
    {
        printf("digite o %d numero: ", i + 1);
        scanf("%f",&numero[i]);
    } 
     
    for (i = 0; i < 5; i++){
        
        if (numero[i] > maior)
        {
            maior = numero[i];
        }

        if (numero[i] < menor)
        {
            menor = numero[i];
        }
         
    } 
    printf("NUMEROS DIGITADOS:\n\n ");
    
    for(i = 0; i < 5; i++){
    printf("%.2d numero: %f\n",i + 1,numero[i]);
    }
    
    printf("MAIOR E MENOR NUMERO:\n\n ");

    printf("maior numero: %f\n", maior);
    printf("menor numero:%f\n", menor);
    return 0;
}