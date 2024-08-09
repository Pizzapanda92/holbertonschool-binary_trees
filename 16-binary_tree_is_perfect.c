#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree
 * @tree: A pointer to the root node of the tree to measure the size
 *
 * Return: The size of the tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		left = binary_tree_size(tree->left);

	if (tree->right)
		right = binary_tree_size(tree->right);

	return ((left + right) + 1);
}
/**
 * binary_tree_depth - Measures the depth of a node in a binary tree
 * @tree: A pointer to the node to measure the depth
 *
 * Return: The depth of the node
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->parent == NULL)
		return (0);

	return (1 + binary_tree_depth(tree->parent));
}

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


/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: A pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is perfect, 0 otherwise
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_height;
	int right_height;
	int left_depth;
	int right_depth;
	int size_left;
	int size_right;


	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);
	left_depth = binary_tree_depth(tree->left);
	right_depth = binary_tree_depth(tree->right);
	size_left = binary_tree_size(tree->left);
	size_right = binary_tree_size(tree->right);

	if (size_left != size_right)
		return (0);

	if (left_height == right_height && left_depth == right_depth)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
