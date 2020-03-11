#include "binary_trees.h"

/**
 * binary_tree_sibling - Function that returns the sibling of a node
 * @node: Node to be check the siblilng from
 * Return: The sibling node value
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *s;

	if (node == NULL || node->parent == NULL)
		return (NULL);

	else if (node->parent->left == NULL || node->parent->right == NULL)
		return (NULL);

	else if (node->parent->left == node)
		s = node->parent->right;
	else
		s = node->parent->left;

	return (s);
}
