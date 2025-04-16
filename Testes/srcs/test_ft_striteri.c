/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_striteri.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ginfranc <ginfranc@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 14:20:54 by ginfranc          #+#    #+#             */
/*   Updated: 2025/04/16 14:31:38 by ginfranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "../../Libft/libft.h"

void	upper_case(unsigned int i, char *c)
{
	(void)i;
	*c = (*c >= 'a' && *c <= 'z') ? *c - 32 : *c;
}

void	test_ft_striteri(void)
{
	printf("Testing ft_striteri:\n");

	char str[] = "hello world";
	const char *desc = "hello world";
	
	ft_striteri(str, upper_case);

	if (strcmp(str, "HELLO WORLD") == 0)
		printf("✅ Passed: %s | Return: \"%s\"\n\n", desc, str);
	else
		printf("❌ Failed: %s (expected: \"HELLO WORLD\", got: \"%s\")\n", desc, str);
}

