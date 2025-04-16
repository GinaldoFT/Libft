/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strtrim.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ginfranc <ginfranc@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 15:20:54 by ginfranc          #+#    #+#             */
/*   Updated: 2025/04/16 15:40:39 by ginfranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "../../Libft/libft.h"

void test_ft_strtrim(void)
{
    printf("Testing ft_strtrim:\n");

    const char *s1 = "42 Hello 42 Porto! 42";
    const char *set = "42";
    const char *desc = "\"42 Hello 42 Porto! 42\"";

    char *expected = " Hello 42 Porto! ";
    char *actual = ft_strtrim(s1, set);

    if (strcmp(expected, actual) == 0)
        printf("✅ Passed: %s | Return: \"%s\"\n\n", desc, actual);
    else
        printf("❌ Failed: %s (expected: \"%s\", got: \"%s\")\n", desc,
            expected ? expected : "NULL",
            actual ? actual : "NULL");
}

