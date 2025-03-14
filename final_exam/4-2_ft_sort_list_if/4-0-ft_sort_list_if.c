#include "ft_list.h"

void ft_swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

t_list *sort_list(t_list *lst, int (*cmp)(int, int))
{
    t_list *begin;
    t_list *p;

    begin = lst;
    p = begin->next;

    while (begin)
    {
        p = begin->next;
        while (p)
        {
            if (p && cmp(begin->data, p->data) > 0)
                ft_swap(&(begin->data), &(p->data));
            p = p->next;
        }
        begin = begin->next;
    }
    return (lst); // begin döndürürsen sondan döndürmüş olursun hatalı çıktı
}