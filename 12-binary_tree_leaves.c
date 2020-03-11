#include "binary_trees.h"

/**
 * binary_tree_leaves - Entry point
 *
 * @tree: tree
 *
 * Return: Always 0 (Success)
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	int l = binary_tree_is_leaf(tree);

	l = l + binary_tree_leaves(tree->left);
	l = l + binary_tree_leaves(tree->right);
	return (l);
}
