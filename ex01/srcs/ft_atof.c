/* ft_atoi.c */

int     ft_atof(char *str)
{
    int     res;
    int     state;

    res = 0;
    state = 1;
    if (*str == 32 || (*str >= 9 && *str <= 13))
        str++;

    if (*str == '-' || *str == '+')
    {
        state = (*str == '-') ? -1 : 1;
        str++;
    }

    while (*str >= '0' && *str <= '9')
    {
        res = (res * 10) + (*str - '0');
        str++;
    } 
    return ((int)res * (int)state);
}
