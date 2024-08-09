#include "binary_trees.h"

/**
 * binary_tree_sibling - check for node sibblings
 * @node: is the arbitrary node to check
 * Return: pointer to sibbling node or NULL if none
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent || !node->parent->left || !node->parent->right)
	{
		return (NULL);
	}

	if (node == node->parent->left)
	{
		return (node->parent->right);
	}
	else
	{
		return (node->parent->left);
	}
}
