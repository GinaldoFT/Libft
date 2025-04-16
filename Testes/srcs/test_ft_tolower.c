/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_tolower.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ginfranc <ginfranc@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 15:54:38 by ginfranc          #+#    #+#             */
/*   Updated: 2025/04/16 16:01:11 by ginfranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include "../../Libft/libft.h"

void	test_ft_tolower(void)
{
	printf("Testing ft_tolower:\n");

	char test_char = 'A'; 
	char expected = tolower(test_char);
	char actual = ft_tolower(test_char);

	if (expected == actual)
		printf("✅ Passed: '%c' Return: '%c'\n\n", test_char, actual);
	else
		printf("❌ Failed: '%c' (expected: '%c', got: '%c')\n", test_char, expected, actual);
}

