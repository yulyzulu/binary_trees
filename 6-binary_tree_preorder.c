#include "binary_trees.h"

/**
 * binary_tree_preorder - Function that goes through a tree in preorder
 * @tree: The tree to be traveled
 * @func: pointer to be function to be executed
 * Return: nothing
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL && func != NULL)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
