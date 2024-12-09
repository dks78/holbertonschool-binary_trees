#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *node = malloc(sizeof(binary_tree_t)); /* Allocation de mémoire pour le noeud */

    if (node == NULL) {
        fprintf(stderr, "Erreur sur l'allocation\n");
        exit(EXIT_FAILURE);
    } /*verifie si la mémoir c'est bien passé*/

    node->n = value; /* Assigner la valeur au membre correct */
   node->parent = parent;
   node->left = NULL;
   node->right = NULL;

   return node;
}