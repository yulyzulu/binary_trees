#include "binary_trees.h"

/**
*binary_tree_insert_right - Inserts a node as the right-child of another node
*@parent: Pointer to the node to insert the right-child in
*@value: The value to sotre in the new node
*Return: A pointer to the created node or NUll
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *temp = NULL, *new_node = NULL;

	if (parent == NULL)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	if (parent->right == NULL)
	{
		parent->right = new_node;
		new_node->n = value;
		new_node->parent = parent;
		new_node->left = NULL;
		new_node->right = NULL;
	}
	else
	{
		temp = parent->right;
		parent->right = new_node;
		new_node->parent = parent;
		new_node->left = NULL;
		new_node->n = value;
		new_node->right = temp;
		temp->parent = new_node;
	}
	return (new_node);
}
