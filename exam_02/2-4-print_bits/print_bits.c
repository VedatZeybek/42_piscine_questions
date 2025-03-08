#include <unistd.h>

void print_bits(unsigned char octet)
{
    int i;

    i = 7;
    while (i > -1)
    {
        char bit = ((octet >> i) & 1) + '0'; // '0' veya '1' karakteri oluşturulur.
        write(1, &bit, 1);                   // Bellekte doğrudan karakterin adresini yazdırıyoruz.
        i--;
    }
}

// void print_bits(unsigned char octet)
// {
//     int i;

//     i = 7;
//     while (i > -1)
//     {
//         if ((octet >> i) & 1)
//             write(1, "1", 1);
//         else
//             write(1, "0", 1);
//         i--;
//     }
// }
int main()
{
    char a = 14;

    print_bits(a);
}