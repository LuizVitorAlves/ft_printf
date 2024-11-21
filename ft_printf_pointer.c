/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_pointer.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalves-d <lalves-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 12:42:23 by lalves-d          #+#    #+#             */
/*   Updated: 2024/10/24 13:21:15 by lalves-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//%p
//Function that prints a pointer in hexadecimal format

static int	ft_putnbr_hex(unsigned long long num)
{
        char    *base;
        int     count;

        base = "0123456789abcdef";
        count = 0;
        if (num >= 16)
                count += ft_putnbr_hex(num / 16);
        count += write(1, &base[num % 16], 1);
        return (count);
}

int     ft_printf_pointer(void *ptr)
{
        unsigned long long      address;
        int     count;

        if (ptr == NULL)
        {
                return (ft_printf_string("(nil)"));
        }
        address = (unsigned long long)ptr;
        count = write(1, "0x", 2);
        count += ft_putnbr_hex(address);
        return (count);
}
