/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoler <asoler@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 14:32:54 by asoler            #+#    #+#             */
/*   Updated: 2022/02/15 03:20:48 by asoler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_char_is_alphanumeric(char *str)
{
	if (*str >= 'A' && *str <= 'Z')
		return (1);
	else if (*str >= 'a' && *str <= 'z')
		return (1);
	else if (*str >= '0' && *str <= '9')
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] += 32;
			i++;
		}
		else if (((str[i] >= 97 && str[i] <= 122) \
				&& (ft_char_is_alphanumeric(&str[i - 1]) == 0)) \
				|| (str[i] == 0))
		{
			str[i] -= 32;
			i++;
		}
		else
			i++;
	}
	str[i] = '\0';
	return (str);
}
