/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   queue_empty.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/29 19:55:02 by jochang           #+#    #+#             */
/*   Updated: 2019/09/29 19:55:03 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfd.h"

bool	queue_empty(t_queue *queue)
{
	return (queue->size ? false : true);
}
