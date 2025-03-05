#include <unistd.h>

void ft_putsolution(char *str)
{
	int len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	write(1, str, len);
}

void print_solution(int board[])
{
	char solution[11];
	int i;

	i = 0;
	while (i < 10)
	{
		solution[i] = board[i] + '0';
		i++;
	}
	solution[10] = '\n';
	ft_putsolution(solution);
}

int is_safe(int board[], int row, int column)
{
	int i;
	int col_diff;
	int row_diff;

	i = 0;
	while (i < row)
	{
		if (board[i] == column)
			return (0);

		row_diff = i - row;
		col_diff = board[i] - column;

		if (col_diff < 0)
			col_diff *= -1;
		if (row_diff < 0)
			row_diff *= -1;
		if (row_diff == col_diff)
			return (0);
		i++;
	}
	return (1);
}

void place_queens(int board[], int row, int *count)
{
	int column;

	if (row == 10)
	{
		print_solution(board);
		(*count)++;
		return;
	}
	column = 0;
	while (column < 10)
	{
		if (is_safe(board, row, column))
		{
			board[row] = column;
			place_queens(board, row + 1, count);
		}
		column++;
	}
}

int ft_ten_queens_puzzle(void)
{
	int board[10];
	int count;
	int i;

	count = 0;
	i = 0;
	while (i < 10)
		board[i++] = -1; // Kullanılmayan satırları -1 ile başlat
	place_queens(board, 0, &count);
	return (count);
}

int main()
{
	int a = ft_ten_queens_puzzle();
	// Çözüm sayısını yazdırabilirsiniz
	write(1, "Total solutions: ", 17);
	char count_str[20];
	int len = 0;
	if (a == 0)
	{
		count_str[len++] = '0';
	}
	while (a > 0)
	{
		count_str[len++] = (a % 10) + '0';
		a /= 10;
	}
	for (int i = len - 1; i >= 0; i--)
	{
		write(1, &count_str[i], 1);
	}
	write(1, "\n", 1);
}