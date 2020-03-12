#include "binary_trees.h"
<<<<<<< HEAD
/**
 * binary_tree_sibling - Function that returns the sibling of a node
 * @node: Node to be check the siblilng from
 * Return: The sibling node value
 */
=======

/**
* binary_tree_sibling- Function that finds the sibling of a node
*@node: Node to be check the sibling from
*Return: The sibling node value
*/
>>>>>>> 711bd147709bf9b08f65a502b85cada7dd9c25fc

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *s;

	if (node == NULL || node->parent == NULL)
		return (NULL);

	else if (node->parent->left == NULL || node->parent->right == NULL)
		return (NULL);

	else if (node->parent->left == node)
		s = node->parent->right;
<<<<<<< HEAD
	else
		s = node->parent->left;

=======

	else
		s = node->parent->left;
>>>>>>> 711bd147709bf9b08f65a502b85cada7dd9c25fc
	return (s);
}

/**
<<<<<<< HEAD
 * binary_tree_uncle - 
 */
=======
* binary_tree_uncle- Function that finds the uncle of a node
* @node: Pointer to the node to find the uncle
* Return: Return NULL when their is not uncle
*/
>>>>>>> 711bd147709bf9b08f65a502b85cada7dd9c25fc

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *uncle = NULL;

	if (node == NULL || binary_tree_sibling(node->parent) == NULL)
		return (NULL);

	uncle = binary_tree_sibling(node->parent);
	return (uncle);
}
