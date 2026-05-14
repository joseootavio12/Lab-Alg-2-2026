#include <stdio.h>
#include <stdlib.h>
int positivoounegativo (int num)
{
    if (num == 0)
    {
        return 0;
    }
    else if (num > 0)
    {
        return 1;
    }
    else if (num < 0)
    {
        return -1;
    }
}
int main()
{
    int num, resultado;

    printf ("Digite um numero: ");
    scanf ("%d", &num);

    resultado = positivoounegativo(num);

    printf ("\n%d",resultado);

    return 0;
}