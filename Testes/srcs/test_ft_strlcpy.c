/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlcpy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ginfranc <ginfranc@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 11:38:04 by ginfranc          #+#    #+#             */
/*   Updated: 2025/04/15 11:48:05 by ginfranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "../../Libft/libft.h"

void	test_ft_strlcpy(void)
{
    printf("Testing ft_strlcpy:\n");

	char *s1 = "Porto";
	char s2[20];
	char *expected = "Porto";
	ft_strlcpy(s2, s1, 6);


    if (strcmp(expected, s2) == 0)
        printf("✅ Passed: \"%s\" | Return: \"%s\"\n\n", s1, s2);
    else
        printf("❌ Failed: \"%s\" (Expected \"%s\", got \"%s\")\n", s1, expected, s2);
}

