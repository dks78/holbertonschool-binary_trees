/**
 * binary_tree_delete - Deletes an entire binary tree.
 * @tree: A pointer to the root node of the tree to delete.
 *
 * Description: This function recursively deletes the nodes of a binary tree.
 * It starts from the root node and proceeds
 * to delete its left and right children
 * before freeing the current node.
 *
 * Return: None
 */

#include"binary_trees.h"

void binary_tree_delete(binary_tree_t *tree)

{

if (tree == NULL)
{
return;
}

binary_tree_delete(tree->left);
binary_tree_delete(tree->right);
free(tree);
}
