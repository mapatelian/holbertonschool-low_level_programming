#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node
 *
 * @tree: pointer to a tree
 *
 * Return: depth of the node
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t i;

	if (!tree)
		return (0);

	for (i = 0; tree; i++)
		tree = tree->parent;
	i--;

	return (i);
}

/**
 * binary_tree_sibling - finds the sibling of a node
 *
 * @node: pointer to the node
 *
 * Return: address of the sibling
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	size_t depth;
	binary_tree_t *copy;

	copy = node;

	if (!node)
		return (NULL);

	depth = binary_tree_depth(node);
	if (depth == 0)
		return (NULL);

	node = node->parent;
	if (!node->left || !node->right)
		return (NULL);
	if (copy == node->left)
		return (node->right);
	return (node->left);
}
