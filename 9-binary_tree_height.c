#include "binary_trees.h"
#include <stddef.h>
/**
 * binary_tree_postorder - Parcourt un arbre binaire en parcours in-order.
 * @tree: Pointeur vers la racine de l'arbre à parcourir.
 * @func: Pointeur vers une fonction à appeler pour chaque nœud.
 */
int max(int a, int b)
{
return (a > b) ? a : b;
}

size_t binary_tree_height(const binary_tree_t *tree)
{
     int leftHeight;
    int RightHeight;
    if(tree == NULL)
    {
        return 0;
    }

    leftHeight = binary_tree_height(tree->left);
    RightHeight = binary_tree_height(tree->right);

    return max(leftHeight , RightHeight) + 1;

}

