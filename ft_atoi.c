/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ginfranc <ginfranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 12:55:49 by ginfranc          #+#    #+#             */
/*   Updated: 2025/04/13 15:46:48 by ginfranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isspace(int *nb, const char *nptr)
{
	int	i;
	int	nm;

	i = 0;
	nm = 1;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
	{
		i++;
	}
	if (nptr[i] == 43 || nptr[i] == 45)
	{
		if (nptr[i] == 45)
		{
			nm *= -1;
		}
		i++;
	}
	*nb = i;
	return (nm);
}

int	ft_atoi(const char *nptr)
{
	int	i;
	int	nm;
	int	result;

	result = 0;
	nm = ft_isspace(&i, nptr);
	while (nptr[i] && (nptr[i] >= 48 && nptr[i] <= 57))
	{
		result *= 10;
		result = result + nptr[i] - 48;
		i++;
	}
	return (result * nm);
}
