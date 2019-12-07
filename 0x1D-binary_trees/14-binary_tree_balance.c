#include "binary_trees.h"

/**
 * tree_height - measures the height of a binary tree
 *
 * @tree: pointer to a tree
 *
 * Return: height of the tree
 */

int tree_height(const binary_tree_t *tree)
{
	int left, right;

	if (!tree)
		return (0);

	left = 1 + tree_height(tree->left);
	right = 1 + tree_height(tree->right);

	if (left > right)
		return (left);
	return (right);
}

/**
 * binary_tree_balance - balance factor of a binary tree
 *
 * @tree: pointer to a tree
 *
 * Return: Balance
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left, right;

	if (!tree)
		return (0);

	left = tree_height(tree->left);
	right = tree_height(tree->right);

	return (left - right);
}
