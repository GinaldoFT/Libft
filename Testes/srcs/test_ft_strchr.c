/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strchr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ginfranc <ginfranc@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 10:46:04 by ginfranc          #+#    #+#             */
/*   Updated: 2025/04/15 10:59:07 by ginfranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "../../Libft/libft.h"
#include <ctype.h>

void	test_ft_strchr(void)
{
    printf("Testing ft_strchr:\n");

	char *s1 = "Teste";
	char *expected = strchr(s1, 'e');
	char *actual = ft_strchr(s1, 'e');


    if (strcmp(expected, actual) == 0)
        printf("✅ Passed: \"%s\" | Return: \"%s\"\n\n", s1, actual);
    else
        printf("❌ Failed: \"%s\" (Expected \"%s\", got \"%s\")\n", s1, expected, actual);
}

