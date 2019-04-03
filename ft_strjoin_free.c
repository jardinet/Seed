/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_free.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwragg <mwragg@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 21:46:00 by mwragg            #+#    #+#             */
/*   Updated: 2019/04/03 21:51:59 by mwragg           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin_free(char const *s1, char const *s2)
{
	char *link;

	if (!s1 && !s2)
		return (NULL);
	else if (!s1)
		link = ft_strdup(s2);
	else if (!s2)
		link = ft_strdup(s1);
	else
	{
		if ((link = (char *)malloc(sizeof(char) *
						(ft_strlen(s1) + ft_strlen(s2) + 1))) == NULL)
			return (NULL);
		link = ft_strcat(ft_strcpy(link, s1), s2);
	}
	free (s1);
	free (s2);
	return (link);
}
