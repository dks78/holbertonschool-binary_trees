/**
 * binary_tree_is_leaf - Checks if a node is a leaf in a binary tree.
 * @node: Pointer to the node to check.
 *
 * Description: This function determines whether a given node in a binary tree
 * is a leaf. A leaf is defined as a node with no children (both left and
 * right pointers are NULL).
 *
 * Return: 1 if the node is a leaf, 0 otherwise.
 */

#include"binary_trees.h"

int binary_tree_is_leaf(const binary_tree_t *node)
{

if (node == NULL)
{
return (0);
}

if (node->left == NULL && node->right == NULL)
{
return (1);
}

return (0);

}
