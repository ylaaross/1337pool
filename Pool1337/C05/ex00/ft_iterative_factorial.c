/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylaaross <ylaaross@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 12:57:58 by ylaaross          #+#    #+#             */
/*   Updated: 2022/05/29 15:23:43 by ylaaross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	f;
	int	i;

	f = 1;
	i = 1;
	if (nb < 0)
		return (0);
	else if (nb == 1)
		return (1);
	else
	{
		while (i <= nb)
		{
			f = f * i;
			i++;
		}
	}
	return (f);
}
