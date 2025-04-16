/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_toupper.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ginfranc <ginfranc@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 15:55:21 by ginfranc          #+#    #+#             */
/*   Updated: 2025/04/16 16:02:54 by ginfranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include "../../Libft/libft.h"

void	test_ft_toupper(void)
{
	printf("Testing ft_toupper:\n");

	char test_char = 'a'; 
	char expected = toupper(test_char);
	char actual = ft_toupper(test_char);

	if (expected == actual)
		printf("✅ Passed: '%c' Return: '%c'\n", test_char, actual);
	else
		printf("❌ Failed: '%c' (expected: '%c', got: '%c')\n", test_char, expected, actual);
}

