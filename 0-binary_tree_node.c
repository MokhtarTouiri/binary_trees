#include "binary_trees.h"

/**
 * binary_tree_node - function to create a binary tree
 * @parent: pointer of struct binary tree
 * @value: integer
 * Return: binary tree
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_binary;
new_binary = malloc(sizeof(binary_tree_t));
	if (new_binary == NULL)
		return (NULL);
	new_binary->parent = parent;
	new_binary->n = value;
	new_binary->left = NULL;
	new_binary->right = NULL;
	return (new_binary);
}
