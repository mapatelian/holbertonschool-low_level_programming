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
 * binary_tree_uncle - finds the uncle of a node
 *
 * @node: pointer to the node
 *
 * Return: address of the uncle of a node
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *mother, *granny, *uncle;
	size_t depth;

	if (!node)
		return (NULL);

	depth = binary_tree_depth(node);
	if (depth < 2)
		return (NULL);

	mother = node->parent;
	granny = mother->parent;

	if (!granny->left || !granny->right)
		return (NULL);

	if (mother == granny->left)
		uncle = granny->right;
	else
		uncle = granny->left;

	return (uncle);
}
