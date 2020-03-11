#include "binary_trees.h"

/**
 * binary_tree_is_full - Entry point
 *
 * @tree: parent
 *
 * Return: Always 0 (Success)
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (binary_tree_leaves(tree) == (binary_tree_nodes(tree) + 1))
		return (1);
	return (0);
}
