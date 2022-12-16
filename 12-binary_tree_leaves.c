#include "binary_trees.h"
/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: is a pointer to the root node to count the number of leaves
 * Return: the number of leaves or (0) if tree is NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
size_t num_leaves = 0;

if (tree)
{
num_leaves += (!tree->left && !tree->right) ? 1 : 0;
num_leaves += binary_tree_leaves(tree->left);
num_leaves += binary_tree_leaves(tree->right);
}
return (num_leaves);
}