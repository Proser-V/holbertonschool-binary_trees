#include "binary_trees.h"

/**
 * binary_tree_nodes - Count the number of nodes with at least 1 child in a
 *                     binary tree.
 *
 * @tree: a pointer to the root node of the tree to measure the size.
 *
 * Return: The number of leaves, or 0 if tree is NULL.
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL || tree->right != NULL)
		count += 1;

	count += binary_tree_nodes(tree->left);
	count += binary_tree_nodes(tree->right);

	return (count);
}
