#include "binary_trees.h"

/**
 * binary_tree_postorder - Entry point
 *
 * @tree: parent
 * @func: func
 *
 * Return: Always 0 (Success)
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
