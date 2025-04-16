/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strmapi.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ginfranc <ginfranc@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 14:30:13 by ginfranc          #+#    #+#             */
/*   Updated: 2025/04/16 14:45:32 by ginfranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "../../Libft/libft.h"

char	to_upper_if_even(unsigned int i, char c)
{
	if (i % 2 == 0 && c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

void	test_ft_strmapi(void)
{
	printf("Testing ft_strmapi:\n");

	const char *input = "abcdef";
	const char *expected = "AbCdEf";
	const char *desc = "abcdef";

	char *result = ft_strmapi(input, to_upper_if_even);

	if (result && strcmp(result, expected) == 0)
		printf("✅ Passed: %s | Return: \"%s\"\n\n", desc, result);
	else
		printf("❌ Failed: %s (expected: \"%s\", got: \"%s\")\n", desc, expected, result ? result : "NULL");

	free(result);
}

