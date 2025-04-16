/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memchr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ginfranc <ginfranc@studentporto.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 10:21:00 by ginfranc          #+#    #+#             */
/*   Updated: 2025/04/16 10:34:42 by ginfranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "../../Libft/libft.h"

void	test_ft_memchr(void)
{
	printf("Testing ft_memchr:\n");

	char str[] = "42 Porto";
	int c = 'P';
	size_t n = 9;

	void *expected = memchr(str, c, n);
	void *actual = ft_memchr(str, c, n);

	if (expected == actual)
		printf("✅ Passed: \"%s\", char: '%c' | Return: %p\n\n", str, c, actual);
	else
		printf("❌ Failed: \"%s\", char: '%c' | Expected: %p, got: %p\n", str, c, expected, actual);
}

