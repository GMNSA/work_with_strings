/* main.c */

#include "../includes/tools.h"

int     is_number(char c)
{
    return (c >= '0' && c <= '9');
}

int     sum_numbers(char *str)
{
    int     i;
    int     res;

    i = 0;
    res = 0;
    while (str[i] != '\0')
    {
        if (is_number(str[i]))
        {
            res += str[i] - '0';
        }
        ++i;
    }
    return ((int)res);
}

int     main(void)
{
    char    string[] = "th1s 15 sm0r3";
    printf("sum: %d\n", sum_numbers(string));
    return (0);
}
