#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_is_leaf - function that checks if a node is a leaf
 * @node: Node
 * Return: 1 if node is a leaf, otherwise 0
 */

int binary_tree_is_leaf(const binary_tree_t *node)

{
int i = 0;
if (node == NULL)
return (i);
if (node->left == NULL && node->right == NULL)
i = 1;
return (i);
}
