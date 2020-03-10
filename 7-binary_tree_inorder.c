#include "binary_trees.h"

/**
 * binary_tree_inorder - Function that goes through a tree in inorder
 * @tree: The tree to be traveled
 * @func: pointer to be function to be executed
 * Return: nothing
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL && func != NULL)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
