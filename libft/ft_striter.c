/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrayne <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 21:31:00 by rrayne            #+#    #+#             */
/*   Updated: 2019/09/24 21:33:56 by rrayne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_striter (char *s, void (*f) (char *)) {
	if (s == NULL || f == NULL)
		return;
	while (s != NULL && *s)
		f(s++);
}
