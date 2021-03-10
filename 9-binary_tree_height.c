#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: tree is a pointer to the root node of the tree to measure the height.
 * Return: 0 if tree is NULL or height of tree if he's not empty
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		size++;
	if (tree->right)
		size++;
	binary_tree_height(tree->left);
	binary_tree_height(tree->right);

	return (size);
}
