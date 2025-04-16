/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strncmp.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ginfranc <ginfranc@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 11:50:04 by ginfranc          #+#    #+#             */
/*   Updated: 2025/04/16 10:47:51 by ginfranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "../../Libft/libft.h"

void	test_ft_strncmp(void)
{
    printf("Testing ft_strncmp:\n");

	char *s1 = "Teste";
	char *s2 = "Porto";
	int expected = strncmp(s1, s2, 5);
	int actual = ft_strncmp(s1, s2, 5);


    if (expected == actual)
        printf("✅ Passed: \"%s\" vs \"%s\" | Return: %i\n\n", s1, s2, actual);
    else
        printf("❌ Failed: \"%s\" vs \"%s\" (Expected %i, got %i)\n", s1, s2, expected, actual);
}

