#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if a node is a leaf
 * @node: A pointer to the node to check
 *
 * Return: 1 if node is a leaf, otherwise 0
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{

	if (node == NULL)
		return (0);

	if (node->left == NULL && node->right == NULL)
	{
		return (1);
	}

	return (0);
}

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left_leaves;
	size_t right_leaves;

	if (tree == NULL)
		return (0);

	if (tree->left)
	{
	left_leaves = binary_tree_is_leaf(tree->left);
	}	

	if (tree->right)
	{
	right_leaves = binary_tree_is_leaf(tree->right);
	}
	return(left_leaves + right_leaves);
}
