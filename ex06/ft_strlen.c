/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbumhira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/24 15:56:57 by tbumhira          #+#    #+#             */
/*   Updated: 2020/06/24 15:57:01 by tbumhira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str)
{
	int lenght;
	lenght = 0;
	while(*str)
	{
		lenght++;
		str++;
	}
	return(lenght);
}


