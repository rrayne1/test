/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrayne <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 20:20:56 by rrayne            #+#    #+#             */
/*   Updated: 2019/09/24 20:26:24 by rrayne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_toupper (int c) {
	if (c >= 97 && c <= 122)
		c -= 32;
	return (c);
}
