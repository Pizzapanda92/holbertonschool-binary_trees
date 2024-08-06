#include "binary_trees.h"

/**
 * binary_tree_preorder - Goes through a binary tree using pre-order traversal
 * @tree: A pointer to the root node of the tree to traverse
 * @func: A pointer to a function to call for each node
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	unsigned int height = 0;

	if (tree == NULL)
		return (0);

//	return (height + 1);


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
