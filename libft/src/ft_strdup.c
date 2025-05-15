/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikawamuk <ikawamuk@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 09:21:41 by ikawamuk          #+#    #+#             */
/*   Updated: 2025/05/11 12:16:42 by ikawamuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*rev;

	rev = ft_calloc(ft_strlen(s) + 1, sizeof(char));
	if (rev == NULL)
		return (NULL);
	return ((char *)ft_strcpy(rev, s));
}
