#include "binary_trees.h"

/**
*binary_tree_nodes - Counts the nodes with at least 1 child in a binary tree
*@tree: Pointer to the root node of the tree to count the number of nodes
*Return: 0 if tree is NULL or number of nodes of the binary tree
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t n_c = 0;

	if (tree == NULL)
		return (0);

	else if (tree->left != NULL || tree->right != NULL)
	{
		n_c = binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1;
	}
	return (n_c);
}
