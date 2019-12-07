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
