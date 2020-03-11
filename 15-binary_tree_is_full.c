#include "binary_trees.h"
/**
*binary_tree_is_full - Checks if a binary tree is full
*@tree: Pointer to the root node of the tree to check
*Return: 0 if tree is NULL or 1 if binary tree is full
*/
int binary_tree_is_full(const binary_tree_t *tree)
{

	if (tree == NULL)
		return (0);

	else if (tree->left == NULL && tree->right == NULL)
		return (1);

	else if (tree->right != NULL && tree->right != NULL)
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));

	return (0);
}
