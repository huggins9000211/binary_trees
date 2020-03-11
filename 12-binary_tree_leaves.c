#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Entry point
 *
 * @node: parent
 *
 * Return: Always 0 (Success)
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
	{
		return (0);
	}

	if (!node->left && !node->right)
	{
		return (1);
	}
	return (0);
}

/**
 * binary_tree_leaves - Entry point
 *
 * @tree: tree
 *
 * Return: Always 0 (Success)
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	int l;

	if (!tree)
		return (0);
	l = binary_tree_is_leaf(tree);

	l = l + binary_tree_leaves(tree->left);
	l = l + binary_tree_leaves(tree->right);
	return (l);
}
