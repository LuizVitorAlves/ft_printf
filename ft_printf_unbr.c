#include "ft_printf.h"

//%u
// Função que conta o número de dígitos em um número unsigned
static int	get_unsigned_num_size(unsigned int nb)
{
	int	count;

	count = 0;
	if (nb == 0)
		return (1);  // O número 0 tem 1 dígito
	while (nb != 0)
	{
		nb = nb / 10;
		count++;
	}
	return (count);
}

// Função que imprime um número unsigned de forma recursiva
static void	ft_positive_putunbr(unsigned int n)
{
	if (n <= 9)
	{
		n = n + '0';  // Converte para caractere
		ft_putchar_fd(n, 1);  // Imprime o caractere
	}
	else
	{
		ft_positive_putunbr(n / 10);  // Imprime a parte superior
		ft_positive_putunbr(n % 10);  // Imprime a parte inferior
	}
}

// Função principal que imprime um número unsigned e retorna a contagem de dígitos
int	ft_printf_unbr(unsigned int nb)
{
	if (nb == 0)
		ft_putchar_fd('0', 1);  // Lida com o caso em que o número é 0
	else
		ft_positive_putunbr(nb);  // Chama a função recursiva para imprimir

	return (get_unsigned_num_size(nb));  // Retorna o número de dígitos impressos
}
