/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekucuk <ekucuk@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 15:45:08 by ekucuk            #+#    #+#             */
/*   Updated: 2024/08/18 15:54:44 by ekucuk           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_line(int width, char start, char middle, char end)
{
	int	i;

	ft_putchar(start);
	i = 1;
	while (i < width - 1)
	{
		ft_putchar(middle);
		i++;
	}
	if (width > 1)
		ft_putchar(end);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	i;

	if (x <= 0 || y <= 0)
		return ;
	print_line(x, 'o', '-', 'o');
	i = 1;
	while (i < y - 1)
	{
		print_line(x, '|', ' ', '|');
		i++;
	}
	if (y > 1)
		print_line(x, 'o', '-', 'o');
}
