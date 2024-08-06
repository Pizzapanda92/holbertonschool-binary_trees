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
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: A pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is perfect, 0 otherwise
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{

    size_t left_height;
    size_t right_height;
    size_t expected_nodes;
    size_t actual_nodes;
    if (tree == NULL)
        return 0;
    left_height = binary_tree_height(tree->left);
    right_height = binary_tree_height(tree->right);
    if (left_height != right_height)
        return 0;
    expected_nodes = (1 << (left_height + 1)) - 1;
    actual_nodes = binary_tree_size(tree);
    if (expected_nodes != actual_nodes)
        return 0;
    return (binary_tree_is_perfect(tree->left) && binary_tree_is_perfect(tree->right));
}
