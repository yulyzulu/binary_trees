#include "binary_trees.h"

/**
 * binary_tree_postorder - Function that goes through a tree in postorder
 * @tree: The tree to be traveled
 * @func: pointer to be function to be executed
 * Return: nothing
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL && func != NULL)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
