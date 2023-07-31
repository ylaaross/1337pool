/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylaaross <ylaaross@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 19:44:09 by ylaaross          #+#    #+#             */
/*   Updated: 2022/05/24 19:47:45 by ylaaross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *s1)
{
	int	i;

	i = 0;
	while (s1[i])
	{
		i++;
	}
	return (i);
}

void	initialise(int *i, int *j)
{
	*i = 0;
	*j = 0;
}

void	incriment(int *i, int *j)
{
	*i = *i + 1;
	*j = *j + 1;
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	j;
	int	cmp;

	initialise (&i, &j);
	while (s1[i] != '\0' && s2[j] != '\0' )
	{
		cmp = s1[i] - s2[j];
		if (cmp > 0)
			return (cmp);
		else if (cmp < 0)
			return (cmp);
		incriment (&i, &j);
	}
	if (ft_strlen (s1) > ft_strlen (s2))
	{
		return (s1[i]);
	}
	else if (ft_strlen (s1) < ft_strlen (s2))
	{
		return (s2[i] * -1);
	}
	else
		return (0);
}
