#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at least 1 child in a binary tree
 * @tree: A pointer to the root node of the tree to count the number of nodes
 *
 * Return: The number of nodes with at least 1 child
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (tree == NULL)
		return (0);

	left = binary_tree_nodes(tree->left);
	right = binary_tree_nodes(tree->right);

	if (tree->left != NULL || tree->right != NULL)
		return (left + right + 1);

	return (left + right);
}
