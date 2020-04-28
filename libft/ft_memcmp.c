/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrayne <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 20:49:34 by rrayne            #+#    #+#             */
/*   Updated: 2019/09/27 15:29:07 by rrayne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int ft_memcmp (const void *s1, const void *s2, size_t n) {
	int i;
	unsigned char *p1;
	unsigned char *p2;

	i = 0;
	p1 = (unsigned char *) s1;
	p2 = (unsigned char *) s2;
	while (i < n) {
		if (p1[i] == p2[i])
			i++;
		else
			return (p1[i] - p2[i]);
	}
	return (0);
}
