#include "binary_trees.h"

/**
 * binary_tree_postorder - Traverses a binary tree in postorder
 * @tree: is a pointer to root
 * @func: is a function pointer
 * Return: void
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}


	if (tree->left)
		binary_tree_postorder(tree->left, func);
	if (tree->right)
		binary_tree_postorder(tree->right, func);
	func(tree->n);
}
