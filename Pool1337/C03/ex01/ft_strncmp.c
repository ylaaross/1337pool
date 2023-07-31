/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylaaross <ylaaross@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 12:03:45 by ylaaross          #+#    #+#             */
/*   Updated: 2022/05/25 11:46:19 by ylaaross         ###   ########.fr       */
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

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned int	j;
	int				cmp;

	i = 0;
	j = 0;
	while (s1[i] != '\0' && s2[j] != '\0' && i < n)
	{
		cmp = s1[i] - s2[j];
		if (cmp > 0)
			return (1);
		else if (cmp < 0)
			return (cmp);
		i++;
		j++;
	}
	if (i == n)
		return (0);
	else if (ft_strlen(s1) > ft_strlen(s2))
		return (s1[i]);
	else
		return (s2[i] * -1);
}
