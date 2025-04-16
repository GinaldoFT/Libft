/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_substr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ginfranc <ginfranc@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 15:40:52 by ginfranc          #+#    #+#             */
/*   Updated: 2025/04/16 15:47:43 by ginfranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "../../Libft/libft.h"

void	test_ft_substr(void)
{
	printf("Testing ft_substr:\n");

	const char *s = "Hello 42 Porto!";
	unsigned int start = 6;
	size_t len = 5;
	const char *desc = "\"Hello 42 Porto\", start = 6, len = 5";

	char *expected = "42 Po";
	char *actual = ft_substr(s, start, len);

	if (strcmp(expected, actual) == 0)
		printf("✅ Passed: %s | Return: \"%s\"\n\n", desc, actual);
	else
		printf("❌ Failed: %s (expected: \"%s\", got: \"%s\")\n", desc, expected, actual);
	
	free(actual);
}

