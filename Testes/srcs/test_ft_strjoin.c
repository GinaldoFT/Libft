/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strjoin.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ginfranc <ginfranc@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 11:05:04 by ginfranc          #+#    #+#             */
/*   Updated: 2025/04/15 11:14:21 by ginfranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "../../Libft/libft.h"

void	test_ft_strjoin(void)
{
    printf("Testing ft_strjoin:\n");

	char *s1 = "Teste";
	char *s2 = "Porto";
	char *expected = "TestePorto";
	char *actual = ft_strjoin(s1, s2);


    if (strcmp(expected, actual) == 0)
        printf("✅ Passed: \"%s\" \"%s\" | Return: \"%s\"\n\n", s1, s2, actual);
    else
        printf("❌ Failed: \"%s\" (Expected \"%s\", got \"%s\")\n", s1, expected, actual);
}

