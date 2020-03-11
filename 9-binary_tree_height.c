#include "binary_trees.h"

/**
 * binary_tree_height - Entry point
 *
 * @tree: tree
 *
 * Return: Always 0 (Success)
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree)
		return (-1);
	int l = binary_tree_height(tree->left);
	int r = binary_tree_height(tree->right);

	if (l > r)
		return (l + 1);
	else
		return (r + 1);
}
