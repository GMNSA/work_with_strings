/* ft_putnbr.c */

#include "../includes/tools.h"

void    ft_putnbr(int num)
{
    if (num == -2147483648)
    {
        ft_putchar('-');
        ft_putchar('2');
        ft_putnbr(147483648);
    }
    else if (num < 0)
    {
        ft_putchar('-');
        ft_putnbr(-num);
    }
    else if (num > 9)
    {
        ft_putnbr(num / 10);
        ft_putnbr(num % 10);
    }
    else
        ft_putchar(num + '0');
}
