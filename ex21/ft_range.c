/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arohani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/10 19:42:25 by arohani           #+#    #+#             */
/*   Updated: 2017/04/10 19:44:48 by arohani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *result;
	int i;

	if (min >= max)
		return (NULL);
	result = (int*)malloc(sizeof(*result) * (max - min));
	i = 0;
	if (!result)
		return (NULL);
	while (min < max)
	{
		result[i] = min;
		min++;
		i++;
	}
	return (result);
}
