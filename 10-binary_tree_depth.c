#include "binary_trees.h"

/**
*binary_tree_depth- Measures the depth of a binary tree node
*@tree: Pointer to the root node of the tree to measure the depth
*Return: 0 if tree is NULL or the depth of the bynary tree node
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t p_count = 0;

	if (tree == NULL)
		return (0);

	if (tree->parent != NULL)
		p_count = binary_tree_depth(tree->parent) + 1;

	return (p_count);
}
