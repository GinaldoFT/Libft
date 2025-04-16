/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isprint.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ginfranc <ginfranc@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 10:20:04 by ginfranc          #+#    #+#             */
/*   Updated: 2025/04/16 11:34:04 by ginfranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "../../Libft/libft.h"
#include <ctype.h>

void	test_ft_isprint(void)
{
    printf("Testing ft_isprint:\n");

	char s1 = '\t';
	int expected = isprint(s1);
	int actual = ft_isprint(s1);


    if (actual == expected)
        printf("✅ Passed: \"%c\" | Return: %i\n\n", s1, actual);
    else
        printf("❌ Failed: %c (Expected %i, got %i)\n", s1, expected, actual);
}

