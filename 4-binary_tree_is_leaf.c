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
int binary_tree_is_leaf(const binary_tree_t *node)
{
     if (node == NULL)
    {
        return (0);
    }
    else if(node->right == NULL )
    {
      
        return(1);
    }
    return 0;
}