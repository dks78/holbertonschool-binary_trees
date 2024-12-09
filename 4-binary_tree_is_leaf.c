#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * binary_tree_is_leaf - Checks if a node is a leaf node.
 * @node: Pointer to the node to check.
 *
 * Description: A leaf node is a node that has no .
 *
 * Return:
 * - 1 if the node is a leaf (no children).
 * - 0 if the node is not a leaf or if the node is NULL.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
if (node == NULL)
{
return (0);
}
else if (node->left == NULL && node->right == NULL)
{
return (1);
}
return (0);
}
