/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbumhira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/24 15:54:16 by tbumhira          #+#    #+#             */
/*   Updated: 2020/06/24 15:54:57 by tbumhira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

void ft_swap( int *a, int *b)
{
	int *holder;

	*holder = *a;
	*a = *b;
	*b = *holder;
}



		
