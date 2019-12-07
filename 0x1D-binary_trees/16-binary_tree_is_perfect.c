#include "binary_trees.h"

/**
 * binary_tree_size - size of the tree
 *
 * @tree: pointer to the tree
 *
 * Return: number of nodes
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: base
 * @y: exponent
 * Return: number raised to the power y
 */

size_t _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);

	return (x * (_pow_recursion(x, (y - 1))));
}

/**
 * binary_tree_height - measures the height of a binary tree
 *
 * @tree: pointer to a tree
 *
 * Return: height of the tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left, right;

	if (!tree || (!(tree->right) && !(tree->left)))
		return (0);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	if (left > right)
		return (1 + binary_tree_height(tree->left));
	return (1 + binary_tree_height(tree->right));
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 *
 * @tree: pointer to a tree
 *
 * Return: 1 if the tree is perfect, otherwise 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height, size, powered;

	if (!tree)
		return (0);

	height = binary_tree_height(tree) + 1;
	size = binary_tree_size(tree);
	powered = _pow_recursion(2, height) - 1;

	if (powered == size)
		return (1);
	return (0);
}
