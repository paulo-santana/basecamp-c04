/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psergio- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 16:37:56 by psergio-          #+#    #+#             */
/*   Updated: 2021/04/13 13:14:20 by psergio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_isspace(int c)
{
	if (c == ' ' || c == '\f' || c == '\n' ||
		c == '\r' || c == '\t' || c == '\v')
		return (1);
	return (0);
}

/*
** Retorna a posicao em que os caracteres
** de espaco param de aparecer na *str.
*/

int		get_negative_multiplier(char *str)
{
	int sign;

	sign = 1;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	return (sign);
}

char	*skip_signs(char *str)
{
	while (*str)
	{
		if (*str != '-' && *str != '+')
			break ;
		str++;
	}
	return (str);
}

int		convert_to_int(char *str, int negative_multiplier)
{
	int			length;
	int			digit;
	long int	number;

	length = 0;
	number = 0;
	while (str[length] >= '0' && str[length] <= '9')
	{
		digit = str[length] - '0';
		number = number * 10 + digit;
		length++;
	}
	return (number * negative_multiplier);
}

int		ft_atoi(char *str)
{
	int negative_multiplier;

	printf("string: %s\n", str);
	while (*str)
	{
		if (!ft_isspace(*str))
			break ;
		str++;
	}
	if ((*str != '-' && *str != '+') && (*str < '0' || *str > '9'))
		return (0);
	negative_multiplier = get_negative_multiplier(str);
	str = skip_signs(str);
	if (*str < '0' || *str > '9')
		return (0);
	return (convert_to_int(str, negative_multiplier));
}
