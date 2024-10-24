#include "ft_printf.h"

//%c
// Função para imprimir um caractere
int	ft_printf_char(char c)
{
	ft_putchar_fd(c, 1);  // Imprime o caractere na saída padrão
	return (1);           // Retorna 1, pois um caractere foi impresso
}
