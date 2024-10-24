#include "ft_printf.h"

//%d e %i
//Imprime um número inteiro decimal

int ft_printf_nbr(int n)
{
    char *num_str;
    int count;

    num_str = ft_itoa(n);  // Converte o número para string usando ft_itoa da libft
    if (num_str == NULL)
    {
        return (0);
    }
    count = ft_putstr(num_str);  // Imprime a string do número
    free(num_str);  // Libera a memória alocada por ft_itoa
    return (count);
}
