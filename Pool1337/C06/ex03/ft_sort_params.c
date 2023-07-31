/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylaaross <ylaaross@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 12:55:26 by ylaaross          #+#    #+#             */
/*   Updated: 2022/06/01 14:31:16 by ylaaross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0' )
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		write (1, &str[i], 1);
		i++;
	}
}

void	ft_swap(char **a, char **b )
{
	char	*c;

	c = *a;
	*a = *b;
	*b = c;
}

int	main(int ac, char **av)
{
	int	i;
	int	j;

	i = 1;
	while (i < ac - 1)
	{
		j = 1;
		while (j < ac - 1)
		{
			if (ft_strcmp(av[j], av[j + 1]) > 0)
				ft_swap(&av[j], &av[j + 1]);
			j++;
		}
			i++;
	}
	j = 1;
	while (j < ac)
	{
		ft_putstr(av[j]);
		j++;
		write(1, "\n", 1);
	}
	return (0);
}
