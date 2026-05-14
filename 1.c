#include <stdio.h>
int dobro (num)
{
    return num + num;
}
int main()
{
    int num, dobronum;
    
    printf("Diz um numero inteiro: ");
    scanf("%d", &num);

    dobronum = dobro(num);

    printf("O resultado eh: %d",dobronum);

    return 0;
}