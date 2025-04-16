/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strrchr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ginfranc <ginfranc@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 15:10:45 by ginfranc          #+#    #+#             */
/*   Updated: 2025/04/16 15:22:30 by ginfranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "../../Libft/libft.h"

void test_ft_strrchr(void)
{
    printf("Testing ft_strrchr:\n");

    const char *haystack = "Hello 42 Porto!";
    int needle = 'o';
    const char *desc = "'o' in \"Hello 42 Porto!\"";

    char *expected = strrchr(haystack, needle);
    char *actual = ft_strrchr(haystack, needle);

    if (expected == actual)
        printf("✅ Passed: %s | Return: \"%s\"\n\n", desc, actual);
    else
        printf("❌ Failed: %s (expected: \"%s\", got: \"%s\")\n", desc,
            expected ? expected : "NULL",
            actual ? actual : "NULL");
}

