#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int a;
    scanf("%i", &a);
    a = a * a;
    printf("%i",a);
    return 0;
}
