/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strdup.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ginfranc <ginfranc@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 10:59:04 by ginfranc          #+#    #+#             */
/*   Updated: 2025/04/15 11:04:09 by ginfranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "../../Libft/libft.h"
#include <ctype.h>

void	test_ft_strdup(void)
{
    printf("Testing ft_strdup:\n");

	char *s1 = "Teste42";
	char *expected = strdup(s1);
	char *actual = ft_strdup(s1);


    if (strcmp(expected, actual) == 0)
        printf("✅ Passed: \"%s\" | Return: \"%s\"\n\n", s1, actual);
    else
        printf("❌ Failed: \"%s\" (Expected \"%s\", got \"%s\")\n", s1, expected, actual);
}

