#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Function that detects a leaf
 * @node: Node to be checked
 * Return: 1 if it's a leaf, 0 otherwise
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->left == NULL && node->right == NULL)
		return (1);
	else
		return (0);
}
