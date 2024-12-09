#include "binary_trees.h"
#include <stddef.h>
/**
 * binary_tree_preorder - Parcourt un arbre binaire en pré-ordre.
 * @tree: Pointeur vers la racine de l'arbre à parcourir.
 * @func: Pointeur vers la fonction à appeler pour chaque nœud.
 *
 * Si l'arbre ou la fonction est NULL, la fonction ne fait rien.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{

if (tree == NULL || func == NULL)
{
return;
}

func(tree->n);

binary_tree_preorder(tree->left, func);


binary_tree_preorder(tree->right, func);
}

