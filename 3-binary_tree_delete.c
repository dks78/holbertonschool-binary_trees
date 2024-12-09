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
 void binary_tree_delete(binary_tree_t *tree)
 {
    if(tree == NULL)
    {
        return;
    }

    binary_tree_delete(tree->right);
    binary_tree_delete(tree->left);


    free(tree);
 }