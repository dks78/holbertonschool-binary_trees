/**
 * binary_tree_is_root - Checks if a node is the root of a binary tree.
 * @node: Pointer to the node to check.
 *
 * Description: This function determines whether a given node in a binary tree
 * is the root. A root node is defined as a node with no parent.
 *
 * Return: 1 if the node is the root, 0 otherwise.
 */

#include"binary_trees.h"

int binary_tree_is_root(const binary_tree_t *node)

{

if (node == NULL)
{
return (0);
}

if (node->parent == NULL)
{
return (1);
}

return (0);

}
