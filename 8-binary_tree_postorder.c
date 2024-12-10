#include "binary_trees.h"
#include <stddef.h>
/**
 * binary_tree_postorder - Parcourt un arbre binaire en parcours in-order.
 * @tree: Pointeur vers la racine de l'arbre à parcourir.
 * @func: Pointeur vers une fonction à appeler pour chaque nœud.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree == NULL || func == NULL)
return;
/* Parcourir le sous-arbre gauche */
binary_tree_postorder(tree->left, func);
/* Traiter le nœud courant */
/* Parcourir le sous-arbre droit */
binary_tree_postorder(tree->right, func);
func(tree->n);
}

