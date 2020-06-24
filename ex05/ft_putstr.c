/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbumhira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/24 15:56:45 by tbumhira          #+#    #+#             */
/*   Updated: 2020/06/24 15:56:47 by tbumhira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>



void ft_putstr(char *str)
{
	while(*str)
	{
		ft_putchar(*str++);
	}
	ft_putchar('\n');
}

