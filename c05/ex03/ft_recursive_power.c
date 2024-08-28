/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekucuk <ekucuk@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 14:24:35 by ekucuk            #+#    #+#             */
/*   Updated: 2024/08/28 14:32:56 by ekucuk           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (1);
	if (power == 0)
		return (1);
	if (nb == 0)
		return (0);
	if (nb == 0 && power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}
