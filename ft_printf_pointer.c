#include "ft_printf.h"

//%p
// Função que imprime um ponteiro no formato hexadecimal
int ft_printf_pointer(void *ptr)
{
    unsigned long long address;
    int count;

    address = (unsigned long long)ptr;
    write(1, "0x", 2);  // Prefixo para ponteiros
    count = 2;  // Conta os dois caracteres do prefixo
    if (address == 0)
    {
        write(1, "(nil)", 5);
        return (count + 5);  // Retorna a contagem total incluindo "(nil)"
    }
    count += ft_printf_hex(address, 0);  // Imprime o valor em hexadecimal minúsculo
    return (count);
}
