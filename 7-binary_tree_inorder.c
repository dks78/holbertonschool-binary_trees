/**
 * binary_tree_inorder - Traverses a binary tree in
 * preorder and applies a function to each node.
 * @tree: Pointer to the root node of the tree to traverse.
 * @func: Pointer to a function to call for each node.
 *
 * Description: This function performs a preorder traversal of a binary tree,
 * visiting the nodes in the order: root, left subtree, right subtree.
 * It applies the function `func` to each node's value.
 *
 * Return: None.
 */

#include"binary_trees.h"

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))

{

if (tree == NULL || func == NULL)
{
return;
}



binary_tree_inorder(tree->left, func);

func(tree->n);

binary_tree_inorder(tree->right, func);

}
