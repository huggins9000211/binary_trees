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
