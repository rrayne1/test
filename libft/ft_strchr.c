/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrayne <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 21:11:17 by rrayne            #+#    #+#             */
/*   Updated: 2019/10/17 17:01:59 by rrayne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr (const char *s, int c) {
	while (*s) {
		if (*s == c)
			return ((char *) s);
		s++;
	}
	if (*s == c)
		return ((char *) s);
	else
		return (0);
}
