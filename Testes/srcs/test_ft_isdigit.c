/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isdigit.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ginfranc <ginfranc@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 10:19:04 by ginfranc          #+#    #+#             */
/*   Updated: 2025/04/15 10:29:16 by ginfranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "../../Libft/libft.h"
#include <ctype.h>

void	test_ft_isdigit(void)
{
    printf("Testing ft_isdigit:\n");

	char s1 = 'F';
	int expected = isdigit(s1);
	int actual = ft_isdigit(s1);


    if (actual == expected)
        printf("✅ Passed: %c | Return: %i\n\n", s1, actual);
    else
        printf("❌ Failed: %c (Expected %i, got %i)\n", s1, expected, actual);
}

