#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree.
 *
 * @tree: a pointer to the root node of the tree to measure the size.
 *
 * Return: The size of the tree, or 0 if tree is NULL.
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_size(tree->left);
	right_height = binary_tree_size(tree->right);

		return (1 + left_height + right_height);
}
