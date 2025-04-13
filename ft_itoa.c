/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ginfranc <ginfranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 11:25:17 by ginfranc          #+#    #+#             */
/*   Updated: 2025/04/13 15:17:14 by ginfranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char		*str;
	int			len;
	long int	num;
	long int	temp;

	num = n;
	len = 1;
	if (n < 0)
	{
		len++;
		num *= -1;
	}
	temp = num;
	while (temp /= 10)
		len++;
	str = (char *)malloc(len + 1);
	if (!str)
		return (NULL);
	if (num == 0)
		str[0] = '0';
	str[len] = '\0';
	while (num > 0)
	{
		str[--len] = (num % 10) + '0';
		num /= 10;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}
