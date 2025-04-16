/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isalnum.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ginfranc <ginfranc@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 10:06:04 by ginfranc          #+#    #+#             */
/*   Updated: 2025/04/15 10:06:08 by ginfranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "../../Libft/libft.h"
#include <ctype.h>

void	test_ft_isalnum(void)
{
    printf("Testing ft_isalnum:\n");

	char s1 = '9';
	char s2 = 'T';
//	int expected = isalnum(s1);
	int actual = ft_isalnum(s1);
	int expected2 = isalnum(s2);
	int actual2 = ft_isalnum(s2);


    if (actual >= 1 && actual2 >= 1)
        printf("✅ Passed: \"%c\" | Return: %i\n\n", s1, actual);
    else
        printf("❌ Failed: \"%c\" (Expected %i, got %i)\n", s1, expected2, actual2);
}

