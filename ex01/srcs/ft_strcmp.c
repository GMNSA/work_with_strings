/* ft_strcmp.c */

int     ft_strcmp(char *str1, char *str2)
{
    int     i;

    i = 0;
    while (str1[i] && str1[i])
    {
        if  (str1[i] - str2[i] != 0)
            return (str1[i] - str2[i]);
        ++i;
    }
    return (0);
}
