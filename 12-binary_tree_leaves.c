#include "binary_trees.h"

/**
 * binary_tree_leaves - Count the number of leaves in a binary tree.
 *
 * @tree: a pointer to the root node of the tree to measure the size.
 *
 * Return: The number of leaves, or 0 if tree is NULL.
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		count += 1;

	count += binary_tree_leaves(tree->left);
	count += binary_tree_leaves(tree->right);

	return (count);
}
