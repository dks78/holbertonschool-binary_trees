#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * binary_tree_node - Crée un nouveau nœud dans un arbre binaire
 * @parent: Pointeur vers le parent du nouveau nœud
 * @value: Valeur à insérer dans le nouveau nœud
 *
 * Return: Pointeur vers le nouveau nœud, ou NULL en cas d'échec
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *node = malloc(sizeof(binary_tree_t));

    if (node == NULL)
{
fprintf(stderr, "Erreur sur l'allocation\n");
exit(EXIT_FAILURE);
}

node->n = value;
node->parent = parent;
node->left = NULL;
node->right = NULL;

return (node);
}
