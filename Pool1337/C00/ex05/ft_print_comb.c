/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylaaross <ylaaross@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 18:38:11 by ylaaross          #+#    #+#             */
/*   Updated: 2022/05/17 15:49:30 by ylaaross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	printchar(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
		c = b + 1;
			while (c <= '9')
			{
				printchar (a, b, c);
				if (a != '7')
				{
					write (1, ",", 1);
					write (1, " ", 1);
				}
			c++;
			}
		b++;
		}
	a++;
	}
}
