/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylaaross <ylaaross@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 19:35:16 by ylaaross          #+#    #+#             */
/*   Updated: 2022/05/17 20:24:45 by ylaaross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	c;
	int	s;

	i = 0;
	s = size - 1;
	while (i < (size / 2))
	{
		c = tab[i];
		tab[i] = tab[s];
		tab[s] = c;
		i++;
		s--;
	}
}
