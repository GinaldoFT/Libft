/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isalpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ginfranc <ginfranc@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 10:06:04 by ginfranc          #+#    #+#             */
/*   Updated: 2025/04/15 10:13:07 by ginfranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "../../Libft/libft.h"
#include <ctype.h>

void	test_ft_isalpha(void)
{
    printf("Testing ft_isalpha:\n");

	int s1 = 9;
	int expected = isalnum(s1);
	int actual = ft_isalnum(s1);


    if (actual == expected)
        printf("✅ Passed: %i | Return: %i\n\n", s1, actual);
    else
        printf("❌ Failed: %i (Expected %i, got %i)\n", s1, expected, actual);
}

