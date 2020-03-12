#include "binary_trees.h"
/**
* sibling- Function that finds the sibling of a node
*@node: Node to be check the sibling from
*Return: The sibling node value
*/

binary_tree_t *sibling(const binary_tree_t *node)
{
	binary_tree_t *s;

	if (node == NULL || node->parent == NULL)
		return (NULL);

	else if (node->parent->left == NULL || node->parent->right == NULL)
		return (NULL);

	else if (node->parent->left == node)
		s = node->parent->right;

	else
		s = node->parent->left;
	return (s);
}

/**
* uncle- Function that finds the uncle of a node
* @node: Pointer to the node to find the uncle
* Return: Return NULL when their is not uncle
*/

binary_tree_t *uncle(const binary_tree_t *node)
{
	binary_tree_t *uncle = NULL;

	if (node == NULL || sibling(node->parent) == NULL)
		return (NULL);

	uncle = sibling(node->parent);
	return (uncle);
}

/**
 * binary_trees_ancestor - Function that will get the closest ancestor
 * @first: This is the first node
 * @second: This is the second node
 * Return: The ancestor node value
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
const binary_tree_t *second)
{
	if (first == NULL || second == NULL)
		return (NULL);

	else if (first == second)
		return ((binary_tree_t *)first);

	else if (sibling(first) == second)
		return (second->parent);

	else if (uncle(first) == second)
		return (second->parent);

	else if (uncle(second) == first)
		return (first->parent);

	else if (first->parent ==  second)
		return (first->parent);

	else if (second->parent == first)
		return (second->parent);

	else
		return (binary_trees_ancestor(first->parent, second->parent));

	return (NULL);
}
