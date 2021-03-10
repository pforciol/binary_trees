#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: pointer to the node to insert child-node
 * @value: value to assign to the new node
 * Return: pointer to the new node of NULL on failure
 */
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
