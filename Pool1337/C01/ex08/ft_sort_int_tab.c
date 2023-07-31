/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylaaross <ylaaross@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 13:00:59 by ylaaross          #+#    #+#             */
/*   Updated: 2022/05/18 13:08:21 by ylaaross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	j = 0;
	while (i < size - 1)
	{
	j = 0;
		while (j < size - 1 - i)
		{
			if (tab[j] > tab[j + 1])
			{
			temp = tab[j];
			tab[j] = tab[j + 1];
			tab[j + 1] = temp;
			}
		j++;
		}
	i++;
	}
}
