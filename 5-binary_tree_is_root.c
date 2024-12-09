#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_tree_is_root - Checks if a node is the root.
 * @node: Pointer to the node to check.
 *
 * Return: 1 if the node is the root (no parent),
 *         0 if the node is not the root or is NULL.
 *
 * Description:
 * - Returns 1 if the node is the root (it has no parent).
 * - Returns 0 if the node is not the root or is NULL.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
if (node == NULL)
{
return (0);
}
else if (node->parent == NULL)
{
return (1);
}
return (0);
}
