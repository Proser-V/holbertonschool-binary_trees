#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full.
 *
 * @tree: a pointer to the root node of the tree to measure the height.
 *
 * Return: 1 if full, 0 if not full or NULL.
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int check = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
	{
		if (tree->right == NULL)
			return (0);
	}
	else if (tree->left == NULL)
	{
		if (tree->right != NULL)
			return (0);
	return (1);
	}
	check = binary_tree_is_full(tree->left);
	check = binary_tree_is_full(tree->right);

	return (check);
}
