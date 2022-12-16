#include "binary_trees.h"
/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: is a pointer to the root node of the tree to measure the size.
 * Return: the size of a binary tree or (0) If tree is NULL.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size_nodes = 0;

	if (tree)
	{
		size_nodes += 1;
		size_nodes += binary_tree_size(tree->left);
		size_nodes += binary_tree_size(tree->right);
	}
	return (size_nodes);
}
