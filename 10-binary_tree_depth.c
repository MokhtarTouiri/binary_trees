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
size_t c = 0;
if (!tree)
{
return (0);
}
if (tree->parent)
c = binary_tree_depth(tree->parent) + 1;
return (c);
}
