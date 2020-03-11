#include "binary_trees.h"

/**
 * find_a_debth - Entry point
 *
 * @tree: tree
 *
 * Return: Always 0 (Success)
 */
int find_a_debth(const binary_tree_t *tree)
{
	int d = 0;

	while (tree != NULL)
	{
		d++;
		tree = tree->left;
	}
	return (d);
}

/**
 * binary_tree_is_perfect_rec - Entry point
 *
 * @tree: tree
 * @debth: debth
 * @level: level
 *
 * Return: Always 0 (Success)
 */
int binary_tree_is_perfect_rec(const binary_tree_t *tree, int debth, int level)
{
	int l;

	if (!tree)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
	{
		if (debth == level + 1)
			return (0);
		else
			return (1);
	}
	l = 0;

	l = l + binary_tree_is_perfect_rec(tree->left, debth, level + 1);
	l = l + binary_tree_is_perfect_rec(tree->right, debth, level + 1);
	return (l);
}

/**
 * binary_tree_is_perfect - Entry point
 *
 * @tree: tree
 *
 * Return: Always 0 (Success)
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (binary_tree_is_perfect_rec(tree, find_a_debth(tree), 0))
		return (0);
	return (1);
}
