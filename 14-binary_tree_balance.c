#include "binary_trees.h"
/**
 * max - Find the max number of a or b
 * @a: This is the first int
 * @b: This is the second int
 * Return: The max
 */

int max(int a, int b)
{
	return ((a >= b) ? a : b);
}
/**
 * height_l - Function that gets a binary tree's height
 * @tree: The tree to be checked
 * Return: The height
 */

int height_l(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (1 + max(height_l(tree->left), height_l(tree->right)));
}

/**
 * binary_tree_balance - measures the balance factor
 * @tree: tree to be measured
 * Return: the balance factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int balance_factor = 0;

	if (tree == NULL)
		return (0);

	balance_factor = height_l(tree->left) - height_l(tree->right);

	return (balance_factor);
}
