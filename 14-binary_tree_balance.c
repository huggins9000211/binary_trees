#include "binary_trees.h"

/**
 * binary_tree_balance - Entry point
 *
 * @tree: tree
 *
 * Return: Always 0 (Success)
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int l;
	int r;

	if (!tree)
		return (0);
	l = binary_tree_height(tree->left);
	r = binary_tree_height(tree->right);
	return (l - r);
}
