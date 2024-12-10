#include "binary_trees.h"
#include <stddef.h>
/**
 * binary_tree_leaves - Measures the depth of a binary tree.
 * @tree: A pointer to the root node of the tree.
 *
 * Return: The depth of the tree. If the tree is NULL, return 0.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
    int has_child;
    if (tree == NULL)
    {
        return (0);
    }

    if (tree->left == NULL && tree->right == NULL)
        return (1);

    has_child = (tree->left != NULL || tree->right != NULL) ? 1 : 0;


    return has_child + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right);
}

