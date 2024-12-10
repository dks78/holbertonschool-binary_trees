#include "binary_trees.h"
#include <stddef.h>
/**
 * max - Returns the maximum value between two integers
 * @a: The first integer
 * @b: The second integer
 *
 * Return: the larger of the two integers a and b.
 */
size_t binary_tree_depth(const binary_tree_t *tree) {
    size_t depth = 0;
    const binary_tree_t *current = tree;
    if(current == NULL)
    {
        return 0;
    }
    /*Remonter l'arbre jusqu'à la racine*/ 
    while (current != NULL) {
        current = current->parent; /*Remonte vers le parent*/ 
        depth++; /*Incrémente la profondeur à chaque niveau*/ 
    }

    return depth -1;
}
