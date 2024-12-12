#include "binary_trees.h"
/**
 * binary_tree_is_full - Vérifie si un arbre binaire est complet
 * @tree: Pointeur vers la racine de l'arbre
 *
 * Return: 1 si l'arbre est complet, 0 sinon
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{

    if (node == NULL || node->parent == NULL)
        return (NULL);

    /* Si le nœud est à gauche, retourner le nœud à droite (le frère) et vice versa */
    if (node == node->parent->left)
        return (node->parent->right);
    else
        return (node->parent->left);
}