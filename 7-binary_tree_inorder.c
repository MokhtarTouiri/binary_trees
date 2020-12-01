#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_inorder - through a binary tree using pre-order traversal
 * @tree:is a pointer to the root node of the tree to traverse
 * @func:is a pointer to a function to call for each node
 * Return: 1 if node is a leaf, otherwise 0
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))

{
if (func == NULL || tree == NULL)
return;
{
if (tree->left != NULL)
binary_tree_inorder(tree->left, func);
func(tree->n);
if (tree->right != NULL)
binary_tree_inorder(tree->right, func);
}
}
