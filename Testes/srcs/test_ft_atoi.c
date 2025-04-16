/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_atoi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ginfranc <ginfranc@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 09:21:57 by ginfranc          #+#    #+#             */
/*   Updated: 2025/04/16 11:51:13 by ginfranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "../../Libft/libft.h"

void test_ft_atoi(void)
{
    printf("Testing ft_atoi:\n");

    const char *s1 = "    -64141T412";
    int expected = atoi(s1);
    int actual = ft_atoi(s1);

    if (actual == expected)
        printf("✅ Passed: \"%s\" | Return: %i\n\n", s1, actual);
    else
        printf("❌ Failed: \"%s\" (Expected %i, got %i)\n", s1, expected, actual);
}

