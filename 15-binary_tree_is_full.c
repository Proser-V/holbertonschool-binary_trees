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
	if (tree == NULL)
		return (0);

	if ((tree->left == NULL) && (tree->right == NULL))
		return (1);

	if ((tree->left != NULL) && (tree->right != NULL))
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
			/* Returns 1 only if both subtrees are full */
	return (0);
}
