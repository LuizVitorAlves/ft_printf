#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include "libft/libft.h"

int	ft_printf(const char *s, ...);

int	ft_printf_char(char c);

int	ft_printf_string(char *s);

int	ft_printf_number(int nb);

int	ft_printf_unsigned_num(unsigned int nb);

int	ft_printf_hex(unsigned int nb, int c);

int	ft_printf_pointer(unsigned long nb);
#endif
