/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akyazici <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 11:14:04 by akyazici          #+#    #+#             */
/*   Updated: 2022/08/30 15:12:12 by akyazici         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	a;
	char	p;

	if (n >= 0)
	{
		p = 'P';
		write (1, &p, 1);
	}
	else
	{
		a = 'N';
		write (1, &a, 1);
	}
}
