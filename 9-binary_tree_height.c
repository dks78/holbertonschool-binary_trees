#include"binary_trees.h"


/**
 * max - Returns the maximum value between two integers
 * @a: The first integer
 * @b: The second integer
 *
 * Return: the larger of the two integers a and b.
 */
int max(int a, int b)
{
return ((a > b) ? a : b);
}

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree
 *
 * Return: the height of the binary tree. If the tree is NULL, return -1.
 */
size_t binary_tree_height(const binary_tree_t *tree)

{

int l, r;

if (tree == NULL)
{
return (-1);
}

l = binary_tree_height(tree->left);
r = binary_tree_height(tree->right);

return (max(r, l) + 1);
}
