/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylaaross <ylaaross@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 15:44:52 by ylaaross          #+#    #+#             */
/*   Updated: 2022/05/30 13:02:05 by ylaaross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	puissance(int nbr)
{
	int	p;
	int	i;

	p = 1;
	i = 0;
	while (i < 2)
	{
		p = p * nbr;
		i++;
	}
	return (p);
}

int	ft_sqrt(int nb)
{
	int	i;
	int	sqrt;

	sqrt = 0;
	i = 2;
	if (nb <= 0)
		return (0);
	else if (nb == 1)
		return (1);
	while (puissance(i) <= nb && i <= 46340)
	{
		if (puissance(i) == nb)
			return (i);
		i++;
	}
	return (0);
}
