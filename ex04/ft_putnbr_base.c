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
	int i;
	int	size;
	char n;
	char computed[100];

	size = ft_strlen(base);
	if (size <= 1)
		return (0);
	while (base[size])
	{
		n = base[size];
		if (n < 32 || n > 126 || n == '+' || n == '-')
			return (0);
		i = -1;
		while (++i < size)
		{
			if (base[size] == computed[i])
				return (0);
		}
		computed[i] = base[size];
		size++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int size;

	size = is_base_valid(base);
}
