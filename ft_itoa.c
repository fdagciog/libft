/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdagciog <fdagciog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 13:20:54 by fdagciog          #+#    #+#             */
/*   Updated: 2022/12/16 13:20:56 by fdagciog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_numlen(int num)
{
	int	i;

	if (num == 0)
		return (1);
	i = 0;
	while (num > 0 || num < 0)
	{
		num /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*dizi;
	long	nbr;

	nbr = n;
	len = ft_numlen(nbr);
	if (n < 0)
	{
		len++;
		nbr = -nbr;
	}
	dizi = malloc(sizeof(char) * len + 1);
	if (!dizi)
		return (NULL);
	dizi[len] = '\0';
	while (nbr > 0)
	{
		dizi[--len] = nbr % 10 + 48;
		nbr /= 10;
	}
	if (n < 0)
		dizi[0] = '-';
	if (n == 0)
		dizi[0] = '0';
	return (dizi);
}
