#include "binary_trees.h"

/**
*binary_tree_size - Measures the size of a binary tree
*@tree: Pointer to the root node of the tree to measure the size
*Return: 0 if tree is NULL or the size of the binary tree
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t l_count = 0, r_count = 0;

	if (tree == NULL)
		return (0);

	l_count = binary_tree_size(tree->left);
	r_count = binary_tree_size(tree->right);

	return (l_count + r_count + 1);
}
