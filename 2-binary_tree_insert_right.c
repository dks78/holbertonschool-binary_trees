#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * binary_tree_insert_right - Insère un nœud comme enfant gauche d'un parent
 * @parent: Pointeur vers le parent
 * @value: Valeur à stocker dans le nouveau nœud
 *
 * Return: Pointeur vers le nouveau nœud, ou NULL si une erreur se produit
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *node;

if (parent == NULL)
{
return (NULL);
}

node = binary_tree_node(parent, value);

if (parent->right != NULL)
{
node->right = parent->right;

parent->right->parent = node;
}

parent->right = node;

return (node);
}
