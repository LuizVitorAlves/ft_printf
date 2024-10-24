#include "ft_printf.h"

//%X

static int ft_printf_hexupp(unsigned int num)
{
    char *base = "0123456789ABCDEF";  // Para hexadecimal maiúsculo
    int count;

    if (num >= 16)  // Se o número é maior ou igual a 16
    {
        // Chama recursivamente para dividir o número e escreve o dígito atual
        count = ft_puthex_upper(num / 16) + write(1, &base[num % 16], 1);
        return (count);  // Retorna o total de caracteres escritos
    }
    // Caso base: quando o número é menor que 16
    return (write(1, &base[num], 1));  // Escreve o dígito correspondente
}