#include "binary_trees.h"

/**
 * binary_tree_uncle - Entry point
 *
 * @node: parent
 *
 * Return: Always 0 (Success)
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !(node->parent))
		return (NULL);
	return (binary_tree_sibling(node->parent));
}