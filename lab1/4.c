#include <stdio.h>
#include <stdlib.h> 

void quadradoperfeito (int num)
{
    int resultado, numeroteste = 0, indicador = 1;
    
    do {
        resultado = numeroteste * numeroteste;
        
        if (resultado == num)
        {
            printf ("\nNumero quadrado perfeito");
            indicador = 0;
            break;
        }

        numeroteste++;

    } while (resultado < num);

    if (indicador)
    {
        printf ("Nao eh quadrado perfeito");
    }
}

int main ()
{
    int num;
    
    printf ("Diz um numero: ");
    scanf ("%d", &num);

    quadradoperfeito (num);

    return 0;
}