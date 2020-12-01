#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
* binary_tree_depth - measures the depth of a node in a binary tree
* @tree:is a pointer to the root node of the tree to traverse
* Return: 1 if node is a leaf, otherwise 0
*/

size_t binary_tree_depth(const binary_tree_t *tree)

{
size_t a;
a = 0;
if (tree == NULL)
{
return (0);
}
a = binary_tree_height(tree->left);
b = binary_tree_height(tree->right);
if (a < b)
{
return (b + 1);
}
return (a + 1);
}
