#include "binary_trees.h"

/**
 * binary_tree_height - Computes the height of a binary tree
 * @tree: A pointer to the root node of the tree to traverse
 * Return: height of a b-tree or zero if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		left = 1 + binary_tree_height(tree->left);

	if (tree->right)
		right = 1 + binary_tree_height(tree->right);

	return ((left > right) ? left : right);
}
