/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylaaross <ylaaross@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 11:47:13 by ylaaross          #+#    #+#             */
/*   Updated: 2022/05/23 18:27:19 by ylaaross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	inisialise(int *i, int *new_word)
{
	*i = 0;
	*new_word = 0;
}

int	ft_isnt_alpha(char *str, int i)
{
	if (!(str[i] >= 'a' && str[i] <= 'z'))
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
			return (1);
		else
			return (0);
	}
	else
		return (0);
}

int	is_not_number(char *str, int i)
{
	if (!(str[i] >= '0' && str[i] <= '9'))
		return (1);
	else
		return (0);
}

void	test(char *str, int i, int *new_word)
{
	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] = str[0] - 32;
		*new_word = 0;
		i++;
	}
	else if (ft_isnt_alpha(str, i) == 1 && is_not_number(str, i) == 1)
		*new_word = 1;
	else if (str[i] >= '0' && str[i] <= '9')
		*new_word = 0;
	else if ((str[i] >= 'a' && str[i] <= 'z') && *new_word == 1)
	{
		str[i] = str[i] - 32;
		*new_word = 0;
	}
	else if ((str[i] >= 'A' && str[i] <= 'Z') && *new_word == 1)
	{
		*new_word = 0;
	}
	else if ((str[i] >= 'A' && str[i] <= 'Z') && *new_word == 0)
	{
		str[i] = str[i] + 32;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	new_word;

	inisialise(&i, &new_word);
	while (str[i] != '\0')
	{
		test(str, i, &new_word);
		i++;
	}
	return (str);
}
