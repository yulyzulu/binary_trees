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

/**
* binary_tree_is_perfect - Checks if a binary tree is perfect
* @tree: Pointer to the root node of the tree to check
* Return: 0 if tree is NULL or 1 if binary tree is perfect
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	else if (tree->left == NULL && tree->right == NULL)
		return (1);

	else if (binary_tree_balance(tree->left) == binary_tree_balance(tree->right))
	{
		int bp_left = binary_tree_is_perfect(tree->left);
		int bp_right = binary_tree_is_perfect(tree->right);

		return (bp_left && bp_right);
	}

	return (0);
}
