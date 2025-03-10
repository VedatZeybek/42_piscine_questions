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
        while (*str && is_space(*str))
            str++;
        if (*str && !(is_space(*str)))
        {
            result[i] = malloc_word(str);
            i++;
            while (*str && !(is_space(*str)))
                str++;
        }
    }
    result[i] = NULL;
    return (result);
}

#include <stdio.h>

void print_split(char **split)
{
    int i = 0;
    while (split[i])
    {
        printf("split[%d]: %s\n", i, split[i]);
        i++;
    }
}
int main()
{
    char *str = "Merhaba dünya bu bir test";
    char **result = ft_split(str);

    if (!result)
    {
        printf("Bellek tahsis hatasi!\n");
        return (1);
    }

    print_split(result);

    // Belleği serbest bırakmayı unutma
    int i = 0;
    while (result[i])
        free(result[i++]);
    free(result);

    return 0;
}