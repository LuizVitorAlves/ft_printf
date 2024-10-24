#include "ft_printf.h"

//%p

// Função auxiliar para imprimir uma string de trás para frente
static void	ft_rprint(char *s)
{
	int	i;

	i = ft_strlen(s) - 1;
	while (i >= 0)
	{
		write(1, &s[i], 1);  // Imprime um caractere por vez, de trás para frente
		i--;
	}
}

// Função que converte um número em hexadecimal (minúsculo) e o imprime
static int	ft_printf_bighex(unsigned long nb)
{
	unsigned int	num;
	char			*base;
	char			arr[16];  // Armazena o número convertido em hexadecimal
	int				i;

	base = "0123456789abcdef";  // Base hexadecimal em minúsculas
	i = 0;
	if (nb == 0)
	{
		ft_putchar_fd('0', 1);  // Imprime 0 se o número for zero
		return (1);
	}
	while (nb)
	{
		num = nb % 16;        // Calcula o valor do último dígito em hexadecimal
		arr[i] = base[num];   // Armazena o dígito correspondente no array
		nb = nb / 16;         // Divide o número por 16 para processar o próximo dígito
		i++;
	}
	arr[i] = '\0';           // Finaliza a string
	ft_rprint(arr);          // Imprime a string de trás para frente
	return (i);              // Retorna o número de dígitos impressos
}

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
