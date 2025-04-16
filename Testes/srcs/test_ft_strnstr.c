/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strnstr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ginfranc <ginfranc@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 14:40:05 by ginfranc          #+#    #+#             */
/*   Updated: 2025/04/16 15:07:23 by ginfranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "../../Libft/libft.h"

void	test_ft_strnstr(void)
{
	printf("Testing ft_strnstr:\n");

	const char *haystack = "Hello 42 Porto!";
	const char *needle = "42";
	size_t len = 10;
	const char *desc = "\"42\" in \"Hello 42 Porto!\"";

	const char *expected = &haystack[6];
	char *actual = ft_strnstr(haystack, needle, len);

	if (expected == actual)
		printf("✅ Passed: %s | Return: \"%s\"\n\n", desc, actual);
	else
		printf("❌ Failed: %s (expected: \"%s\", got: \"%s\")\n", desc,
			expected ? expected : "NULL",
			actual ? actual : "NULL");
}

