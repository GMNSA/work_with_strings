/* main.c */

#include "../includes/tools.h"

int     ft_strlen(char *str)
{
    int     i;

    i = 0;
    while (str[i] != '\0')
        ++i;
    return (i);
}

int     substring_search(char *source, char *target)
{
    int         i;
    int         j;
    int         len;
    int         count;

    i = 0;
    len = ft_strlen(target);
    while (source[i] !='\0')
    {
        j = 0;
        count = len;
        while (target[j] !='\0')
        {
            if (source[i + j] == target[j])
                count--;
            ++j;
            if (count == 0)
                return (i);
        }
        ++i;
    }
    return (-1);
}

int     main(void)
{
    char    string[] = "this is testing string";
    char    string2[] = "i";
    printf("%d", substring_search(string, string2));
    return (0);
}
