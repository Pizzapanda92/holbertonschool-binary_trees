#include "binary_trees.h"

/**
 * binary_tree_height - Computes the height of a binary tree
 * @tree: A pointer to the root node of the tree to traverse
 * Return: height of a b-tree or zero if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	unsigned int height = 0;

	if (tree == NULL)
		return (0);


	if (tree->left)
	{
		if (tree->left != NULL || tree->right != NULL)
		{
			height++;
		}
	}

	if (tree->right)
	{
		if (tree->left != NULL || tree->right != NULL)
		{
			height++;
		}
	}
return (height);
}
