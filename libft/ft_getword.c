/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getword.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrayne <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/27 19:20:35 by rrayne            #+#    #+#             */
/*   Updated: 2019/09/28 14:31:13 by rrayne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_getword (const char *s, char c) {
	size_t i;

	i = 0;
	while ((s[i] != c) && (s[i] != '\0'))
		i++;
	return (i + 1);
}