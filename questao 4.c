#include <stdio.h>
#include <stdlib.h>

int main()
{

    float numeros[10], somapositiva=0;
    int quantidadenegativa=0, i;

    // leitura de dados
    for (i = 0; i < 10; i++)
    {
        printf("digite %d numero ", i + 1);
        scanf("%f", &numeros[i]);

        if (numeros[i] >= 0)
        {

            somapositiva = somapositiva + numeros[i];
        }

        if (numeros[i] < 0)
        {
            quantidadenegativa = quantidadenegativa + 1;
        }
    }

    // exibição dos dados
    printf("Quantidade de numeros negativos: %d\n", quantidadenegativa);
    printf("Soma do numeros positivos: %f\n", somapositiva);

    return 0;
}