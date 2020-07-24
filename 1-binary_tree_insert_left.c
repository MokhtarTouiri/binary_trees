#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - binary tree
 * @parent: pointer
 * @value: int
 * Return: binary
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;
node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);
if (parent == NULL)
return (NULL);
	node->parent = parent;
	node->n = value;
	if (parent->left != NULL)
		parent->left->parent = node;
	node->right = NULL;
	node->left = parent->left;
	parent->left = node;
	return (node);
}
