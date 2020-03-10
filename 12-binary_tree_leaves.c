#include "binary_trees.h"

/**
*binary_tree_leaves - Measures the leaves of a binary tree
*@tree: Pointer to the root node of the tree to measure the leaves
*Return: 0 if tree is NULL or the leaves of the binary tree
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaf_count = 0;

	if (tree == NULL)
		return (0);

	else if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	else
	{
		leaf_count = binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right);
	}
	return (leaf_count);
}
