#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
* binary_tree_is_full - checks if a binary tree is full
* @tree:is a pointer to the root node of the tree to traverse
* Return: 1 if node is a leaf, otherwise 0
*/

int binary_tree_is_full(const binary_tree_t *tree)

{
if (!tree)
return (0);
if ((!tree->left) && (!tree->right))
return (1);
return ((binary_tree_is_full(tree->left)) &&
	 binary_tree_is_full(tree->right));
return (0);
}