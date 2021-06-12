/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoghomo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 18:59:17 by lsoghomo          #+#    #+#             */
/*   Updated: 2021/02/01 18:59:19 by lsoghomo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void	*r;
	size_t	bytes;

	bytes = num * size;
	r = malloc(bytes);
	if (r != NULL)
		ft_bzero(r, bytes);
	return (r);
}
