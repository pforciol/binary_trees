#include "binary_trees.h"

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;
	binary_tree_t *tmp_node = NULL;

	if (parent)
	{
		node = binary_tree_node(parent, value);
		if (node)
		{
			if (parent->left)
				tmp_node = parent->left;
			parent->left = node;
			if (tmp_node)
				node->left = tmp_node;
		}
	}

	return (node);
}
