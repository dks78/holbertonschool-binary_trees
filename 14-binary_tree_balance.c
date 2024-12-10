#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * binary_tree_nodes - Counts the number of nodes with at least one child.
 * @tree: A pointer to the tree node of the tree to count the nodes.
 *
 * Return: The number of nodes with at least one child.
 *         If tree is NULL, return 0.
 */
int height(const binary_tree_t *tree)
{
    int leftHeight;
    int rightHeight;
    if (tree == NULL)
        return (0);

    /* Compute the height of the left and right subtrees */
    leftHeight = height(tree->left);
     rightHeight = height(tree->right);

    /* Return the larger height plus 1 (for the current node) */
    return (1 + (leftHeight > rightHeight ? leftHeight : rightHeight));
}



int binary_tree_balance(const binary_tree_t *tree)
{
    int leftHeight;
    int rightHeight;
    if (tree == NULL)
        return (0);

    /* Compute the height of the left and right subtrees */
    leftHeight = height(tree->left);
    rightHeight = height(tree->right);

    /* Return the balance factor (difference between left and right heights) */
    return (leftHeight - rightHeight);
}