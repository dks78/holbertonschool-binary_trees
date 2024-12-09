#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * binary_tree_delete - Supprime un arbre binaire.
 * @tree: Pointeur vers la racine de l'arbre à supprimer.
 *
 * Cette fonction supprime récursivement tous les nœuds de l'arbre en
 * appelant la fonction sur les sous-arbres gauche et droit, puis
 * libère la mémoire allouée pour chaque nœud.
 */
void binary_tree_delete(binary_tree_t *tree)
{
if (tree == NULL)

{
return;
}

binary_tree_delete(tree->right);
binary_tree_delete(tree->left);


free(tree);
}
