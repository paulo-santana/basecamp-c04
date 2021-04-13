/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psergio- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 19:28:17 by psergio-          #+#    #+#             */
/*   Updated: 2021/04/13 19:49:24 by psergio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_atoi.c"
#include <stdio.h>

void	print_result(int result)
{
	printf("int: %d\n", result);
}

int	main(void)
{
	int result;

	char *negative = "-+-4";
	char *not_negative = "+--+-+42";

	printf("%s: %d\n", negative, get_negative_multiplier(negative));
	printf("%s: %d\n", not_negative, get_negative_multiplier(not_negative));

	result = ft_atoi("12312");
	print_result(result);

	result = ft_atoi("  -42");
	print_result(result);

	result = ft_atoi("--4");
	print_result(result);

	result = ft_atoi("+++-4--4");
	print_result(result);

	result = ft_atoi("b  ---4");
	print_result(result);

	result = ft_atoi(" ---+--+1234ab567");
	print_result(result);

	result = ft_atoi("    2147483647");
	print_result(result);

	result = ft_atoi("-2147483648");
	print_result(result);

	result = ft_atoi("21 47483648");
	print_result(result);
}
