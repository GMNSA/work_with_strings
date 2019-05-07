/* count_letter.c */

#include "../includes/tools.h"

int     is_letter(char c)
{
    return ((c >= 65 && c <= 90) || (c >= 97 && c <= 122));
}

int     vowel(char c)
{
    return ((c == 65 || c == 69 || c == 73 || c == 79 || c == 85 || c == 89)) || 
        ((c == 97 || c == 101 || c == 105 ||
          c == 111 || c == 117 || c == 121));
}

void    count_letter(char *str)
{
    int     i;
    int     vow;
    int     con;

    i = 0;
    vow = 0;
    con = 0;
    while (str[i] != '\0')
    {
        if (is_letter(str[i]))
        {
            if (vowel(str[i]))
                ++vow;
            else
                ++con;
        }
        ++i;
    }
    printf("vowel: %d\nconsonant: %d\n", vow, con);
}
