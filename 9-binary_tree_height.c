#include "binary_trees.h"

size_t binary_tree_height(const binary_tree_t *tree)
{
    size_t size = 0;

    if (tree == NULL)
        return 0;
    
    if (tree->left)
        size++;
    if (tree->right)
        size++;
    binary_tree_height(tree->left);
    binary_tree_height(tree->right);

    return (size);
}
