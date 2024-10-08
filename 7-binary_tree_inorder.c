#include "binary_trees.h"

/**
 * binary_tree_inorder - Traverses a binary tree in order
 * @tree: is a pointer to root
 * @func: is a function pointer
 * Return: void
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}


	if (tree->left)
		binary_tree_inorder(tree->left, func);
	func(tree->n);
	if (tree->right)
		binary_tree_inorder(tree->right, func);
}
