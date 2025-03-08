#include <stdlib.h>

int is_space(char c)
{
    if (c == 32 || (c >= 9 && c <= 13))
        return (1);
    return (0);
}

int word_count(char *str)
{
    int count = 0;

    while (*str)
    {
        while (*str && is_space(*str))
            str++;
        if (*str && !is_space(*str))
        {
            count++;
            while (*str && !is_space(*str))
                str++;
        }
    }
    return (count);
}

char *malloc_word(char *str)
{
    int len = 0;
    char *word;
    int i;

    while (str[len] && !is_space(str[len]))
        len++;

    word = (char *)malloc(len + 1);
    if (!word)
        return NULL;
    i = 0;
    while (i < len)
    {
        word[i] = str[i];
        i++;
    }
    word[i] = '\0';
    return (word);
}

char **ft_split(char *str)
{
    int total_word_count = word_count(str);
    char **result = (char **)malloc(sizeof(char *) * (total_word_count + 1));
    int i;

    if (!(result))
        return NULL;

    i = 0;
    while (*str)
    {
        while (*str && is_space(str))
            str++;
        if (*str && !(is_space(str)))
        {
            result[i] = malloc_word(str);
            i++;
            while (*str && !(is_space(str)))
                str++;
        }
    }
    result[i] = NULL;
    return (result);
}