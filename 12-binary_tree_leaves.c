#include "binary_trees.h"

/**
 * binary_tree_leaves - Recursively counts the number of leaves in a binary tree
 * @tree: A pointer to the root node of the tree to count the number of leaves
 *
 * Return: The number of leaves in the tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{

	size_t left_leaves;
	size_t right_leaves;

	/* Base case: if the tree is NULL, it has no leaves */
	if (tree == NULL)
		return 0;

	/* If the current node is a leaf, return 1*/
	if (tree->left == NULL && tree->right == NULL)
		return 1;

	/* Recursively count the leaves in the left and right subtrees */
	left_leaves = binary_tree_leaves(tree->left);
	right_leaves = binary_tree_leaves(tree->right);

	/* Return the total number of leaves */
	return left_leaves + right_leaves;
}

