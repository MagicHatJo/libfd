/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deque_size.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/29 20:33:03 by jochang           #+#    #+#             */
/*   Updated: 2019/09/29 20:33:29 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfd.h"

int		deque_size(t_deque *deque)
{
	return (deque->size);
}
