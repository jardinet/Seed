/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwragg <mwragg@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/07 15:13:51 by mwragg            #+#    #+#             */
/*   Updated: 2016/12/07 15:49:25 by mwragg           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_sort(int ac, char **argv)
{
	int i;

	i = 0;
	while (i + 1 < ac && ac > 1)
		if (ft_strcmp(argv[i], argv[i + 1]) > 0)
		{
			ft_swap(&argv[i], &argv[i + 1]);
			i = 0;
		}
		else
			i++;
}
