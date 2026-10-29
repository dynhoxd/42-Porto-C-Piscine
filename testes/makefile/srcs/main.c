#include <stdio.h>
#include "ft.h"

int main(void)
{
    char *str1 = "Maria";
    char *str2 = "Joao";
    char l1 = 'a';
    int n1 = 10;
    int n2 = 20;

    ft_putchar(l1);
    ft_putstr(str1);
    ft_swap(&n1, &n2);
    printf("%i\n", n1);
    printf("%i\n", n2);
    printf("%i\n", ft_strlen(str2));
    printf("%i\n", ft_strcmp(str1, str2));

    return 0;
}
