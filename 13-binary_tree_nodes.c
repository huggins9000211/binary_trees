#include "binary_trees.h"
#include "12-binary_tree_leaves.c"

/**
 * binary_tree_nodes - Entry point
 *
 * @tree: tree
 *
 * Return: Always 0 (Success)
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	int l;

	if (!tree)
		return (0);
	if (!binary_tree_is_leaf(tree))
		l = 1;
	else
		l = 0;
	l = l + binary_tree_nodes(tree->left);
	l = l + binary_tree_nodes(tree->right);
	return (l);
}
