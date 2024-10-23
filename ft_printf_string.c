#include "ft_printf.h"

int	ft_printf_string(char *s)
{
	if (!s)
		s = "(null)";  // Se a string for NULL, atribui "(null)" a s
	ft_putstr_fd(s, 1);  // Imprime a string na saída padrão
	return (ft_strlen(s));  // Retorna o número de caracteres impressos
}
