#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 *
 * @parent: pointer to the parent node
 * @value: value to be inserted
 *
 * Return: pointer to the new node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_left;

	if (!parent)
		return (NULL);

	new_left = malloc(sizeof(binary_tree_t));
	if (!new_left)
		return (NULL);

	new_left->n = value;
	new_left->right = NULL;

	if (parent->left)
	{
		new_left->left = parent->left;
		new_left->left->parent = new_left;
	}
	else
		new_left->left = NULL;

	parent->left = new_left;
	new_left->parent = parent;

	return (new_left);
}
