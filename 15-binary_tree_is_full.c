#include "binary_trees.h"

int binary_tree_is_full(const binary_tree_t *tree)
{
    if (tree == NULL)
        return 0;
    
    if (tree->left && tree->right && tree->parent)
        return (1);

    binary_tree_is_full(tree->left);
    binary_tree_is_full(tree->right);

    return (0);
}
