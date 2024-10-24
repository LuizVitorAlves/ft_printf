#include "ft_printf.h"

//%x
int ft_printf_hexlow(unsigned int num)
{
    char *base = "0123456789abcdef";  // Para hexadecimal minúsculo
    int count;

    if (num >= 16)
    {
        count = ft_puthex_lower(num / 16) + write(1, &base[num % 16], 1);
        return (count);
    }
    return (write(1, &base[num], 1));  // Escreve o dígito correspondente
}
