#include <stdio.h>

#define N 10 // Satranç tahtasının boyutu (10x10)

// Bu global diziler, her sütunda ve çaprazda başka vezirlerin olup olmadığını kontrol eder.
int col[N];        // Her sütunda bir vezir olup olmadığını kontrol eder.
int d1[2 * N - 1]; // Ana çaprazları kontrol eder (row - col).
int d2[2 * N - 1]; // Ters çaprazları kontrol eder (row + col).
int solutions = 0; // Geçerli çözüm sayısı.

void print_solution(int board[N])
{
    for (int i = 0; i < N; i++)
    {
        printf("%d", board[i]);
    }
    printf("$\n");
}

void place_queen(int row, int board[N])
{
    if (row == N)
    {
        // Eğer tüm vezirler yerleştirildiyse, çözümü yazdır.
        print_solution(board);
        solutions++;
        return;
    }

    for (int i = 0; i < N; i++)
    {
        // Eğer sütunda ve çaprazlarda bu konumda başka bir vezir yoksa
        if (!col[i] && !d1[row - i + N - 1] && !d2[row + i])
        {
            // Bu pozisyonda veziri yerleştir
            board[row] = i;
            col[i] = 1;
            d1[row - i + N - 1] = 1;
            d2[row + i] = 1;

            // Sonraki satırda vezir yerleştir
            place_queen(row + 1, board);

            // Geriye dön (backtrack)
            col[i] = 0;
            d1[row - i + N - 1] = 0;
            d2[row + i] = 0;
        }
    }
}

int ft_ten_queens_puzzle(void)
{
    int board[N];

    // Başlangıçta, hiçbir vezir yerleştirilmedi.
    for (int i = 0; i < N; i++)
    {
        col[i] = 0;
        d1[i] = 0;
        d2[i] = 0;
    }

    // İlk satırdan itibaren vezirleri yerleştirmeye başla
    place_queen(0, board);

    return solutions;
}

int main(void)
{
    int result = ft_ten_queens_puzzle();
    printf("%d\n", result); // Geçerli çözüm sayısını yazdır.
    return 0;
}