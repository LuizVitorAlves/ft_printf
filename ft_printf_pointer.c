#include "ft_printf.h"

//%p
// Função que imprime um ponteiro no formato hexadecimal
int	ft_printf_pointer(unsigned long nb)
{
	int	size;

	if (nb == 0)
	{
		ft_putstr_fd("(nil)", 1);  // Se o ponteiro for nulo, imprime "(nil)"
		return (5);                // Retorna 5, o número de caracteres de "(nil)"
	}
	else
	{
		size = 2;  // "0x" ocupa 2 caracteres
		ft_putstr_fd("0x", 1);  // Imprime o prefixo "0x"
		size += ft_printf_bighex(nb);  // Imprime o número em hexadecimal
	}
	return (size);  // Retorna o tamanho total da saída
}
