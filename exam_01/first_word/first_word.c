#include <unistd.h>

// int main(int argc, char **argv)
// {
//     if (argc == 2)
//     {
//         while (*argv[1])
//         {
//             if (*argv[1] == " " || *argv[1] == "\t")
//             {
//                 write(1, "\n", 1);
//                 return (0);
//             }
//             write(1, argv[1], 1);
//             argv[1]++;
//         }
//     }
//     write(1, "\n", 1);
//     return (0);
// }

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        while (*argv[1])
        {
            if (*argv[1] == ' ' || *argv[1] == '\t') // Karakter kontrolü
            {
                write(1, "\n", 1);
                return (0);
            }
            write(1, argv[1], 1);
            argv[1]++;
        }
    }
    write(1, "\n", 1);
    return (0);
}