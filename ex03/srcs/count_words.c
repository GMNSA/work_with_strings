/* count_words.c */

#include "../includes/tools.h"

int     count_words(char *str)
{
    int     i;
    int     state;
    int     words;

    i = 0;
    state = 0;
    words = 0;
    while (str[i] != '\0')
    {
        if (ft_blank(str[i]))
            state = 0;
        else if (!state)
        {
            state = 1;
            ++words;
        }
        ++i;
    }
    return (words);
}
