#include <stdio.h>
#include <stdlib.h>

void dataporextenso (int dia, int mes, int ano)
{
    printf ("%d de ");

    switch (mes)
    {
        case 1: 
        printf ("Janeiro");
        break;

        case 2: 
        printf ("Fevereiro");
        break;

        case 3:
        printf ("Marco");
        break;

        case 4:
        printf ("Abril");
        break;

        case 5:
        printf ("Maio");
        break;

        case 6: 
        printf ("Junho");
        break;

        case 7: 
        printf ("Julho");
        break;

        case 8: 
        printf ("Agosto");
        break;

        case 9: 
        printf ("Setembro");
        break;

        case 10:
        printf ("Outubro");
        break;

        case 11:
        printf ("Novembro");
        break;

        case 12:
        printf ("Dezembro");
        break;
        
        default: 
        printf ("Indisponivel");
        break;
    }

    printf (" de %d", ano);

}

int main()
{
    int dia, mes, ano;

    printf ("Qual o dia mes e ano?\nDia: ");
    scanf ("%d",&dia);

    printf("Mes: ");
    scanf ("%d", &mes);

    printf("Ano: ");
    scanf("%d", &ano);

    dataporextenso(dia, mes, ano);

    return 0;
}