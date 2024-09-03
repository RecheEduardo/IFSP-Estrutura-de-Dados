#include <stdio.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL , "Portuguese");
    char str[100];
    
    puts("Digite seu nome!");
    fgets(str, 99 , stdin);
    printf("Olá %s", str);

    return 0;
}