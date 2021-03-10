#include "binary_trees.h"

/**
 * binary_tree_is_full - function that checks if a binary tree is full
 * @tree: tree is a pointer to the root node of the tree to check
 * Return: 0 if tree is not full or 1 if it is
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left && tree->right && tree->parent)
		return (1);

	binary_tree_is_full(tree->left);
	binary_tree_is_full(tree->right);

	return (0);
}
