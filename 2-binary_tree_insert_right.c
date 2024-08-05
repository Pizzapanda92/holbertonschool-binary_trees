#include "binary_trees.h"


/**
 * binary_tree_insert_right- program inserts a node at the right of the parent
 * @parent: is a pointer to parent node
 * @value: is the value to store in the node
 * Return: pointer to left node or NULL on faillure
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{

	binary_tree_t *right_node = malloc(sizeof(binary_tree_t));

	if (right_node == NULL)
	{
		return (NULL);
	}

	if (parent == NULL)
	{
		free(right_node);
		return (NULL);
	}
	right_node->n = value;
	right_node->right = NULL;
	right_node->left = NULL;
	right_node->parent = parent;

	if (parent->right == NULL)
	{
		parent->right = right_node;
	}
	else
	{
		right_node->right = parent->right;
		parent->right->parent = right_node;
		parent->right = right_node;
	}

	return (right_node);
}
