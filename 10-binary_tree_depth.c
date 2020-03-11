#include "binary_trees.h"

/**
 * binary_tree_depth - Entry point
 *
 * @tree: tree
 *
 * Return: Always 0 (Success)
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree || !(tree->parent))
		return (0);
	int l = binary_tree_depth(tree->parent);

	return (l + 1);
}
