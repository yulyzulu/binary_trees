#include "binary_trees.h"

/**
 * binary_tree_is_root - Function that detects a root
 * @node: Node to be checked
 * Return: 1 if it's a root, 0 otherwise
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	else
	{
		if (node->parent == NULL)
			return (1);
		else
			return (0);
	}
}
