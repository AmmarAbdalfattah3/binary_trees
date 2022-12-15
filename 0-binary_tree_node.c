#include "binary_trees.h"
/**
 * binary_tree_node - creates a binary tree node
 * @parent: is a pointer to the parent node of the node to create
 * @value: is the value to put in the new node
 * Return: a pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node_tree;

	node_tree = malloc(sizeof(binary_tree_t));
	if (node == NULL)
	{
		return (NULL);
	}
	node_tree->n = value;
	node_tree->parent = parent;
	node_tree->right = NULL;
	node_tree->left = NULL;
	return (node_tree);
}
