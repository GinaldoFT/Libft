/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlcat.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ginfranc <ginfranc@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 11:17:04 by ginfranc          #+#    #+#             */
/*   Updated: 2025/04/15 11:32:43 by ginfranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "../../Libft/libft.h"

void	test_ft_strlcat(void)
{
    printf("Testing ft_strlcat:\n");

	char *s1 = "Porto";
	char *s2 = "Teste";
	char dest1[20] = "TestePorto";
	char dest2[20] = "Teste";
	ft_strlcat(dest2, s1, 20);


    if (strcmp(dest1, dest2) == 0)
        printf("✅ Passed: \"%s\" \"%s\" | Return: \"%s\"\n\n", s2, s1, dest2);
    else
        printf("❌ Failed: \"%s\" \"%s\" (Expected \"%s\", got \"%s\")\n", s2, s1, dest1, dest2);
}

