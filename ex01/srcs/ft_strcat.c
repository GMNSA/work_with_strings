/* ft_strcat.c */

char    *ft_strcat(char *str1, char *str2)
{
    int     i;
    int     start;

    i = 0;
    while (str1[i] != '\0')
        ++i;
    start = i;
    i = 0;
    while (str2[i] != '\0')
    {
        str1[start] = str2[i];
        ++start;
        ++i;
    } 
    str1[start] = '\0';
    return (str1);
}
