#include "binary_trees.h"

/**
 * binary_tree_balance - Computes the balance factor of a binary tree
 * @tree: A pointer to the root node of the tree to traverse
 * Return: height of a b-tree or zero if tree is NULL
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		left = 1 + binary_tree_balance(tree->left);

	if (tree->right)
		right = 1 + binary_tree_balance(tree->right);

	return (left - right);
}
