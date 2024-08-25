/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekucuk <ekucuk@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 18:28:15 by ekucuk            #+#    #+#             */
/*   Updated: 2024/08/17 18:46:04 by ekucuk           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int*a, int*b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
