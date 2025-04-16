/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlen.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ginfranc <ginfranc@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 08:57:01 by ginfranc          #+#    #+#             */
/*   Updated: 2025/04/16 10:49:33 by ginfranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "../../Libft/libft.h"

void test_ft_strlen(void)
{
    printf("Testing ft_strlen:\n");

    const char *s1 = "Hello, world!";
    size_t expected = strlen(s1);
    size_t actual = ft_strlen(s1);

    if (actual == expected)
        printf("✅ Passed: \"%s\" | Return: %zu\n\n", s1, actual);
    else
        printf("❌ Failed: \"%s\" (Expected %zu, got %zu)\n", s1, expected, actual);
}

