/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylaaross <ylaaross@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 17:36:34 by ylaaross          #+#    #+#             */
/*   Updated: 2022/05/25 11:45:02 by ylaaross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_lenght;
	unsigned int	src_lenght;
	unsigned int	i;
	int				j;

	dest_lenght = ft_strlen(dest);
	src_lenght = ft_strlen(src);
	i = ft_strlen(dest);
	j = 0;
	if (dest_lenght < size)
	{
		while (src[i] && i < size - 1)
		{
			dest[i] = src[j];
			i++;
			j++;
		}
		dest[i] = '\0';
		return (dest_lenght + src_lenght);
	}
	else
		return (src_lenght + size);
}
