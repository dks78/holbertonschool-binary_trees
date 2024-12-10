/**
 * binary_tree_insert_left - Inserts a node as the left child of a parent node.
 * @parent: A pointer to the parent node where the left child will be inserted.
 * @value: The value to store in the new left child node.
 * 
 * Description: This function creates a new node and inserts it as the left child
 * of the specified parent node. If the parent already has a left child, the
 * current left child will be moved to the right of the new node.
 * 
 * Return: A pointer to the newly created node, or NULL if memory allocation fails
 *         or if the parent is NULL.
 */

#include "binary_trees.h"

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)

{
binary_tree_t *M, *S;

if (parent == NULL)
{
return (NULL);
}

M = malloc(sizeof(binary_tree_t));
if (M == NULL)
{
return (NULL);
}


M->n = value;
S = parent->left;
M->parent = parent;
M->left = NULL;
M->right = NULL;

if (parent->left != NULL)
{
parent->left = M;
M->left = S;
S->parent = M;
}

else
{
parent->left = M;
}


return (M);
}
