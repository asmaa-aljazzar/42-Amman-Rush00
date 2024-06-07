#include <unistd.h>

void ft_putchar(char c);

void	rush(int x, int y)
{
	int row,col;
	row = 1;
	if (x >= 0 && y >= 0)
	{
		while(row <= y)
		{
			col = 1;
			while(col <= x)
			{
				if ( (row == 1 && col ==1) || ( row == y && col == x)  )
				{
					ft_putchar('/');
				}
				else if ( (row == y && col == 1) || (row  == 1 && col == x) )
				{
						ft_putchar('\\');
				}
				else if (col == 1 || col == x || row == 1 || row == y)
				{
					ft_putchar('*');
				}
				else
				{
					ft_putchar(' ');
				}
				col++;
			}
			ft_putchar('\n');
			row++;		
		}
	}
	else
	{
		write(1, "Please Enter Just Positive values", 30);
	}
}
