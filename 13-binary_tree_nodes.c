#include "binary_trees.h"
/**
 * binary_tree_nodes - Counts the number of nodes with at least one child.
 * @tree: A pointer to the root node of the tree to count the nodes.
 *
 * Return: The number of nodes with at least one child.
 *         If tree is NULL, return 0.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
    if (tree == NULL)
        return (0);  /* If the tree is empty, return 0 */

    /* If the current node has at least one child */
    if (tree->left != NULL || tree->right != NULL)
    {
        /* Count this node and recursively count nodes in the left and right subtrees */
        return 1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right);
    }

    /* If it's a leaf node (no children), return 0 */
    return 0;
}
