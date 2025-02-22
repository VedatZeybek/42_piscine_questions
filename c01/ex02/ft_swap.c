#include <stdio.h>
#include <unistd.h>

void ft_swap(int *a, int *b)
{

    int c = *a;
    *a = *b;
    *b = c;
}

// void main()
// {
//     int a = 5;
//     int b = 10;
//     printf("a pointer: %d,b pointer: %d \n", a, b);
//     ft_swap(&a, &b);
//     printf("a pointer: %d,b pointer: %d", a, b);
// }

int main()
{
    int num = 42;
    int *p = &num; // num'un adresini p'ye atıyoruz

    // printf("num: %d\n", num);          // num'ın değerini yazdırır
    // printf("num pointer: %d\n", &num); // num'ın tuttuğu adresi
    // printf("*p: %d\n", *p);            // p'nin işaret ettiği değeri yazdır
    // printf("*p adress: %p\n", &p);     // p'nin adresi
    // printf("*p adress: %p\n", p);      // p'nin tuttuğu adres (num'un adresi)
    printf("num: %d\n", num);                         // num'ın değeri
    printf("num address: %p\n", (void *)&num);        // num'ın RAM'deki adresi
    printf("*p: %d\n", *p);                           // p'nin işaret ettiği değer (num'un değeri)
    printf("p address: %p\n", (void *)&p);            // p pointer'ının adresi
    printf("p value (num address): %p\n", (void *)p); // p'nin tuttuğu değer (num'un adre
    return 0;
}