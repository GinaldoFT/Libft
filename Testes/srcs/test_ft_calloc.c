/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_calloc.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ginfranc <ginfranc@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 11:20:35 by ginfranc          #+#    #+#             */
/*   Updated: 2025/04/16 20:58:56 by ginfranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../../Libft/libft.h"

void	test_ft_calloc(void)
{
	printf("Testing ft_calloc:\n");

	size_t	count = 5;
	size_t	size = sizeof(char);
	const char *desc = "Teste";

	char *expected = (char *)calloc(count, size);
	char *actual = (char *)ft_calloc(count, size);

	if (!expected || !actual)
	{
		printf("❌ Failed: %s (allocation returned NULL)\n", desc);
		free(expected);
		free(actual);
		return;
	}

	if (memcmp(expected, actual, count * size) == 0)
		printf("✅ Passed: \"%s\" | Return: \"%s\" \n\n", desc, actual);
	else
		printf("❌ Failed: \"%s\" (expected: \"%s\", got: \"%s\")\n", desc, expected, actual);

	free(expected);
	free(actual);
}

