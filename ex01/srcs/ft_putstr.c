/* ft_putstr.c */

#include "../includes/tools.h"

void    ft_putstr(char *str)
{
    while (*str != '\0')
        ft_putchar(*str++);
}
