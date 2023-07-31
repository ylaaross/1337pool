/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylaaross <ylaaross@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 21:45:13 by ylaaross          #+#    #+#             */
/*   Updated: 2022/05/17 16:20:00 by ylaaross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	positif(int nb)
{
	if (nb >= 0)
		return (1);
	else
		return (0);
}

void	put(char *t, int size, int p)
{
	if (p == 0)
		write (1, "-", 1);
	while (size >= 0)
	{
		write (1, &t[size], 1);
		size--;
	}
}

int	convert(int nb, char *t, int p)
{
	int	i;

	i = 0;
	if (p == 0)
		nb = nb * -1;
	while (nb >= 10)
	{
		t[i] = nb % 10 + 48;
		nb = nb / 10;
		i++;
	}
	t[i] = nb % 10 + 48;
	return (i);
}

void	ft_putnbr(int nb)
{
	char	t[100];

	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else if (nb == 2147483647)
		write(1, "2147483647", 10);
	else
	{
		convert(nb, t, positif(nb));
		put(t, convert(nb, t, positif(nb)), positif(nb));
	}
}
