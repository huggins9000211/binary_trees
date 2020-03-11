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
		return (0);
	return (binary_tree_height_rec(tree));
}

/**
 * binary_tree_height_rec - Entry point
 *
 * @tree: tree
 *
 * Return: Always 0 (Success)
 */
size_t binary_tree_height_rec(const binary_tree_t *tree)
{
	int l;
	int r;

	if (!tree)
		return (-1);
	l = binary_tree_height_rec(tree->left);
	r = binary_tree_height_rec(tree->right);

	if (l > r)
		return (l + 1);
	else
		return (r + 1);
}

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
