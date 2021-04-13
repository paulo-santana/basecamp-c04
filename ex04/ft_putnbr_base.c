/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psergio- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 13:18:57 by psergio-          #+#    #+#             */
/*   Updated: 2021/04/13 15:53:34 by psergio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*g_base_symbols;

int		ft_strlen(char *str)
{
	int	size;

	size = 0;
	while (str[size])
		size++;
	return (size);
}

int		is_base_valid(char *base)
{
	int		i;
	int		size;
	char	n;
	char	computed[128];

	size = ft_strlen(base);
	if (size <= 1)
		return (0);
	i = 0;
	while (base[i])
	{
		n = base[i];
		if (n < 32 || n > 126 || n == '+' || n == '-')
			return (0);
		if (n == computed[n])
			return (0);
		computed[base[i]] = base[i];
		i++;
	}
	return (1);
}

void	convert(long int nbr, int base)
{
	char digit;

	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr *= -1;
	}
	digit = nbr % base;
	nbr = nbr / base;
	if (nbr != 0)
		convert(nbr, base);
	write(1, &g_base_symbols[digit], 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int base_size;
	int is_valid;

	is_valid = is_base_valid(base);
	if (!is_valid)
		return ;
	base_size = ft_strlen(base);
	g_base_symbols = base;
	convert(nbr, base_size);
}
