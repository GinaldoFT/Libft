/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isascii.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ginfranc <ginfranc@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 10:14:04 by ginfranc          #+#    #+#             */
/*   Updated: 2025/04/15 10:26:45 by ginfranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "../../Libft/libft.h"
#include <ctype.h>

void	test_ft_isascii(void)
{
    printf("Testing ft_isascii:\n");

	int s1 = 9;
	int expected = isascii(s1);
	int actual = ft_isascii(s1);


    if (actual == expected)
        printf("✅ Passed: %i | Return: %i\n\n", s1, actual);
    else
        printf("❌ Failed: %i (Expected %i, got %i)\n", s1, expected, actual);
}

