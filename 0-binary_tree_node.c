/**
 * binary_tree_node - Creates a new node in a binary tree.
 * @parent: A pointer to the parent node of the new node.
 * @value: The value to store in the new node.
 *
 * Description: This function allocates memory for a new binary tree node,
 * initializes its values (parent, left, right),
 * and sets the value of the node.
 * The new node is created with no children (left and right are NULL).
 *
 * Return: A pointer to the new node, or NULL if memory allocation fails.
 */

#include"binary_trees.h"

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)

{
binary_tree_t *M;

M = malloc(sizeof(binary_tree_t));

if (M == NULL)
{
return (NULL);
}

M->parent = parent;
M->n = value;
M->left = NULL;
M->right = NULL;

return (M);

}
