#include "binary_trees.h"

/**
 * binary_tree_insert_right - Entry point
 *
 * @parent: parent
 * @value: value
 *
 * Return: Always 0 (Success)
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = binary_tree_node(parent, value);

	if (!new_node || !parent)
	{
		return (NULL);
	}
	if (parent->right)
	{
		new_node->right = parent->right;
		new_node->right->parent = new_node;
	}
	parent->right = new_node;
	return (new_node);
}
