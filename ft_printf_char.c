#include "ft_printf.h"

//%c

int  ft_printf_char(char c)
{
  return (ft_putchar_fd(c, 1));  // Retorna o valor retornado por ft_putchar_fd
}
