#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: is a pointer to the root node of the tree to measure the height.
 * Return: the height of a binary tree or (0) if tree is NULL.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t lef_h = 0, rig_h = 0;

		lef_h = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		rig_h = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		return ((lef_h > rig_h) ? lef_h : rig_h);
	}
	return (0);
}
