/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memcmp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ginfranc <ginfranc@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 10:41:00 by ginfranc          #+#    #+#             */
/*   Updated: 2025/04/16 10:42:00 by ginfranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "../../Libft/libft.h"

void	test_ft_memcmp(void)
{
	printf("Testing ft_memcmp:\n");

	char s1[] = "banana";
	char s2[] = "banaba";
	size_t n = 6;

	int expected = memcmp(s1, s2, n);
	int actual = ft_memcmp(s1, s2, n);

	if ((expected == actual))
		printf("✅ Passed: \"%s\" vs \"%s\" | Return: %d\n\n", s1, s2, actual);
	else
		printf("❌ Failed: \"%s\" vs \"%s\" | Expected: %d, got: %d\n", s1, s2, expected, actual);
}

