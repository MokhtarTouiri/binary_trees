#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
* binary_tree_siblin - finds the uncle of a node
* @node: is a pointer to the node to find the sibling
* Return: NULL
*/

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
if ((!node) || (!node->parent) || (!node->parent->parent))
return (NULL);
if (grand_father->left == node->parent)
return (grand_father->right);
return (grand_father->left);
}
