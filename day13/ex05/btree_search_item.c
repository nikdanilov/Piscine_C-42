/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndanilov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 20:45:20 by ndanilov          #+#    #+#             */
/*   Updated: 2018/08/09 20:47:52 by ndanilov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	*btree_search_item(t_btree *root, void *data_ref,
		int (*cmpf)(void *, void *))
{
	if (!root || !data_ref)
		return (0);
	if (cmpf(data_ref, root->item) == 0)
		return (root->item);
	if (root->left)
		return (btree_search_item(root->left, data_ref, cmpf));
	if (root->right)
		return (btree_search_item(root->right, data_ref, cmpf));
	return (0);
}
