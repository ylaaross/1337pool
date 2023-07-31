/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylaaross <ylaaross@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 16:04:12 by ylaaross          #+#    #+#             */
/*   Updated: 2022/05/17 15:59:41 by ylaaross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	printnumb(char n1, char n2, char n3, char n4)
{
	write(1, &n1, 1);
	write(1, &n2, 1);
	write(1, " ", 1);
	write(1, &n3, 1);
	write(1, &n4, 1);
	if (n2 == '8' && n1 == '9')
	{
	}
	else
	{
		write(1, ",", 1);
		write(1, " ", 1);
	}
}

void	loops(char n1, char n2, char n3, char n4)
{
	while (n1 <= '9')
	{
	n2 = '0';
		while (n2 <= '9')
		{
		n3 = n1;
			while (n3 <= '9')
			{
				n4 = n2 + 1;
				while (n4 <= '9')
				{
					printnumb (n1, n2, n3, n4);
					n4++;
				}
			n3++;
			}
		n2++;
		}
	n1++;
	}
}

void	ft_print_comb2(void)
{
	char	n1;
	char	n2;
	char	n3;
	char	n4;

	n1 = '0';
	loops(n1, n2, n3, n4);
}
