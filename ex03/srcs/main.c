/* main.c */

#include "../includes/tools.h"

int     main(void)
{
    char    string[] = "this    is test string   ";
    printf("words: %d\n", count_words(string));
    return (0);
}
