#include "binary_trees.h"


/**
 * binary_tree_insert_left - program inserts a node at the left of the parent
 * @parent: is a pointer to parent node
 * @value: is the value to store in the node
 * Return: pointer to left node or NULL on faillure
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{

	binary_tree_t *left_node = malloc(sizeof(binary_tree_t));

	if (left_node == NULL)
	{
		return (NULL);
	}

	if (parent == NULL)
	{
		return (NULL);
	}
	left_node->n = value;
	left_node->left = NULL;
	left_node->right = NULL;
	left_node->parent = parent;

	if (parent->left == NULL)
	{
		parent->left = left_node;
	}
	else
	{
		left_node->left = parent->left;
		parent->left->parent = left_node;
		parent->left = left_node;
	}

	return (left_node);
}
