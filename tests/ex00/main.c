/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psergio- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 19:37:38 by psergio-          #+#    #+#             */
/*   Updated: 2021/04/13 19:40:25 by psergio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_strlen.c"

int	main(void)
{
	char *str = "teste";
	int size = ft_strlen(str);
	printf("%d\n", size);

	str = "";
	size = ft_strlen(str);
	printf("%d\n", size);

	str = "tes\ne";
	size = ft_strlen(str);
	printf("%d\n", size);
}
