#include "binary_trees.h"

/**
 * binary_tree_sibling - Give the sibling of a node in a binary tree.
 *
 * @node: a pointer to the node to find the sibling.
 *
 * Return: A pointer to the sibling node, or NULL if failed.
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	 binary_tree_t *parent_node;

	if (node == NULL || node->parent == NULL)
		return (NULL);

	parent_node = node->parent;

	if (parent_node->left == node)
		return (parent_node->right);

	return (parent_node->left);
}

/**
 * binary_tree_uncle - Give the uncle of a node in a binary tree.
 *
 * @node: a pointer to the node to find the uncle.
 *
 * Return: A pointer to the uncle node, or NULL if failed.
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *uncle;

	if (node == NULL)
		return (NULL);

	uncle = binary_tree_sibling(node->parent);

	return (uncle);
}
