/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylaaross <ylaaross@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 12:45:19 by ylaaross          #+#    #+#             */
/*   Updated: 2022/05/25 13:06:45 by ylaaross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

void	initialise(int *i, int *j, int *k, int *cmp)
{
	*i = 0;
	*j = 0;
	*k = 0;
	*cmp = 0;
}

void	initialise2(int *k, int *j, int *i, int *cmp)
{
	*k = 0;
	*j = *i;
	*cmp = 0;
}

void	increment(int *j, int *k)
{
	*j = *j + 1;
	*k = *k + 1;
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	k;
	int	cmp;

	initialise(&i, &j, &i, &cmp);
	if (to_find[0] == '\0')
		return (str);
	else
	{
		while (i < ft_strlen(str))
		{
			initialise2(&k, &j, &i, &cmp);
			while (to_find[k])
			{
				if (to_find[k] == str[j])
					cmp++;
				increment(&j, &k);
			}
			if (cmp == ft_strlen(to_find))
				return (&str[i]);
			i++;
		}
		return (0);
	}
}
