/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_itoa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ginfranc <ginfranc@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 10:30:04 by ginfranc          #+#    #+#             */
/*   Updated: 2025/04/16 10:19:24 by ginfranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "../../Libft/libft.h"

void	test_ft_itoa(void)
{
    printf("Testing ft_itoa:\n");

	int s1 = -981417;
	char *expected = "-981417";
	char *actual = ft_itoa(s1);
	
    if (strcmp(expected, actual) == 0)
        printf("✅ Passed: %i | Return: \"%s\"\n\n", s1, actual);
    else
        printf("❌ Failed: %i (Expected \"%s\", got \"%s\")\n", s1, expected, actual);
    free(actual);
}

