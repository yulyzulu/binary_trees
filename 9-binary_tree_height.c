#include "binary_trees.h"

/**
*binary_tree_height- Measures the height of a binary tree
*@tree: Pointer to the root node of the tree to measure the height
*Return: 0 if tree is NULL or the height of the bynary tree
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l_count = 0, r_count = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		l_count = binary_tree_height(tree->left) + 1;

	if (tree->right != NULL)
		r_count = binary_tree_height(tree->right) + 1;

	if (l_count > r_count)
		return (l_count);
	else
		return (r_count);
}
