#include "ft_printf.h"

//%s
// Função para imprimir uma string
int	ft_printf_string(char *s)
{
	if (!s)
		return (ft_printf_string("(null)"));  // Se a string for nula, imprime "(null)"
	ft_putstr_fd(s, 1);  // Imprime a string
	return (ft_strlen(s));  // Retorna o comprimento da string
}
