#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
* binary_tree_leaves - measures the size of a binary tree
* @tree:is a pointer to the root node of the tree to traverse
* Return: 1 if node is a leaf, otherwise 0
*/

size_t binary_tree_leaves(const binary_tree_t *tree)

{
size_t a, b;
if (!tree)
{
return (0);
}
if ((!tree->left) && (!tree->right))
return (1);
a = binary_tree_leaves(tree->left);
b = binary_tree_leaves(tree->right);
{
return (a + b);
}
}
